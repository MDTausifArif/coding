// BINARY SEARCH
#include <iostream>
#include <thread>  //library use for setting random pause or sleep time
#include <chrono> //  same use for sleep time during execution
using namespace std;

class NumberGuess
{
private:
    int low;
    int high;
    int steps;

public:
    NumberGuess(int l, int h) : low(l), high(h), steps(0){}

    void guessNumber()
    {
        char response;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            steps++;
            cout << "Is your number " << mid << " ? (y for yes, l for lower, h for higher): ";
            cin >> response;

            if (response == 'y')
            {
                cout << "Yes! I guessed the Number!" << endl;
                cout << "It takes " << steps <<" step(s)." << endl;
                return;
            }
            else if (response == 'l')
            {
                high = mid - 1;
            }
            else if (response == 'h')
            {
                low = mid + 1;
            }
            else
            {
                cout << "Invalid Input, Please type 'y', 'l', or 'h'." << endl;
            }
        }
        cout << "Please Choose the number in the given range! " << endl;
    }
};

int main()
{
    int low, high;

    cout << "Enter the number which is lower of the range: ";
    cin >> low;
    cout << "Enter the number which is upper of the range: ";
    cin >> high;

    NumberGuess guesser(low, high);
    cout << "Think a number between " << low << " and " << high << "...." << endl;

    // this_thread::sleep_for(chrono::seconds(3)); // not working due to C-11 needed

    cout << "Press Enter if you are ready..... " << endl;
    getchar();
    getchar();
    
    
    guesser.guessNumber();

    return 0;
}
