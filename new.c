#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <xlsxwriter.h>

#define MAX_CUSTOMERS 100

// Structure to store customer details
typedef struct {
    char name[50];
    char email[50];
    char phone[20];
} Customer;

// Function to get customer details
void getCustomerDetails(Customer *customer) {
    printf("Enter customer name: ");
    scanf("%s", customer->name);

    printf("Enter customer email: ");
    scanf("%s", customer->email);

    printf("Enter customer phone: ");
    scanf("%s", customer->phone);
}

// Function to export customer details to Excel
void exportToExcel(Customer *customers, int numCustomers, const char *filename) {
    lxw_workbook  *workbook  = workbook_new(filename);
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);

    // Write headers
    worksheet_write_string(worksheet, 0, 0, "Name", NULL);
    worksheet_write_string(worksheet, 0, 1, "Email", NULL);
    worksheet_write_string(worksheet, 0, 2, "Phone", NULL);

    // Write data
    for (int i = 0; i < numCustomers; ++i) {
        worksheet_write_string(worksheet, i + 1, 0, customers[i].name, NULL);
        worksheet_write_string(worksheet, i + 1, 1, customers[i].email, NULL);
        worksheet_write_string(worksheet, i + 1, 2, customers[i].phone, NULL);
    }

    workbook_close(workbook);
}

int main() {
    Customer customers[MAX_CUSTOMERS];
    int numCustomers;

    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    if (numCustomers > MAX_CUSTOMERS) {
        printf("Error: Exceeded maximum number of customers.\n");
        return 1;
    }

    // Get customer details
    for (int i = 0; i < numCustomers; ++i) {
        printf("\nEnter details for customer #%d:\n", i + 1);
        getCustomerDetails(&customers[i]);
    }

    // Export to Excel
    exportToExcel(customers, numCustomers, "customer_details.xlsx");

    printf("\nCustomer details exported to customer_details.xlsx\n");

    return 0;
}
