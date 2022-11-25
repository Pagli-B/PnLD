#include <iostream>

using namespace std;

int main()
{
    // initialize sum, input, average as float for decimal places
    float sum, input, average;
    int x = 1; // starting the loop from 1
    cout << "This program averages the numbers inputted.\n";
    while (x <= 10) // up to only 10 numbers
    {
        cout << "[" << x << "] Enter a number: ";
        cin >> input;
        sum += input;
        x++;
    }
    average = sum / 10; // divide to 10 to get the average
    cout << "\nThe average of given numbers is " << average << ".\n";
    return 0;
}