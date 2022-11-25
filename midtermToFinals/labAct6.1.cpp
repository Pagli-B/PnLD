#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int accountNumber;
    float startingCredit = 10000.00;
    float currentCredit;
    float charge, partialCharge;
    int option;
    cout << "Please input your account number: ";
    cin >> accountNumber;

    if (accountNumber < 0)
    {
        cout << "Invalid input.\n"
             << "Terminating program...";
        return -1;
    }
    else
    {}

    cout << "\nAccount Number: " << accountNumber
         << "\nStarting Credit Limit: PHP " << startingCredit
         << "\nCharge Amount on the card?: PHP ";
    cin >> charge;

    cout << "\nHow you would like to pay?\n"
         << "1. Pay in full using the credit card\n"
         << "2. Partially pay using the credit card\n"
         << "Your choice: ";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "\nYou opted to pay in full using the credit card.\n";
        currentCredit = startingCredit - charge;
        if (currentCredit >= 0)
        {
            cout << "PHP " << setprecision(2) << fixed << charge << " has been deducted to your credit.\n"
                 << "Your new credit limit available: PHP " << currentCredit << "\n";
            break;
        }
        else
        {
            cout << "Credit limit exceeded!"
                 << "Terminating the program...";
            return -2;
        }
    case 2:
        cout << "\nYou opted to pay partial using the credit card.\n"
             << "How much would you like to pay partially in credit?: PHP ";
        cin >> partialCharge;
        currentCredit = startingCredit - partialCharge;
        if (currentCredit >= 0)
        {
        cout << "\nYou have paid PHP " << setprecision(2) << fixed << partialCharge << " in credit and paid PHP " << charge - partialCharge << " in cash.\n"
             << "Your new credit limit available: PHP " << currentCredit << "\n";
        }
        else
        {
            cout << "Credit limit exceeded!"
                 << "Terminating the program...";
            return -2;
        }
        break;
    default:
        cout << "Invalid option..."
             << "Terminating the program...";
        return -3;    
        break;
    }

    return 0;
}