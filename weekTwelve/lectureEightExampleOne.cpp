//Program to illustrate the use of nested if statements
#include <iostream>

using namespace std;

int main(void)
{
    //define variable
    int number;
    //get number
    cout << "Enter a number between 1 and 99: ";
    cin >> number;

    if (number > 0 && number < 100)
    {
        if (number < 10)
            cout << "One digit number\n";
        else
            cout << "Two digit number\n";
    }
    else
        cout << "Number not in range\n";
    
    return 0;
}