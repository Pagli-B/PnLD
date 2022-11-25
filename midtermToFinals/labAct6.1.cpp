#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     // initialize the variables needed for the program
     int accountNumber;
     float startingCredit = 10000.00; // as instructed in the lab activity
     float currentCredit;
     float charge, partialCharge;
     int option;
     cout << "Please input your account number: ";
     cin >> accountNumber;

     if (accountNumber < 0) // rules out all negative values
     {
        cout << "Invalid input.\n"
             << "Terminating program...";
        return -1; // indication of termination by inserting negative value
     }
     else
     {}
     // displays the information of the account
     cout << "\nAccount Number: " << accountNumber
         << "\nStarting Credit Limit: PHP " << startingCredit
         << "\nCharge Amount on the card?: PHP ";
     cin >> charge;

     // letting the user choose on how to pay
     cout << "\nHow you would like to pay?\n"
         << "1. Pay in full using the credit card\n"
         << "2. Partially pay using the credit card\n"
         << "Your choice: ";
     cin >> option;

     // switch case either for paying in full or partially
     switch (option)
     {
     // case for paying full
     case 1:
        cout << "\nYou opted to pay in full using the credit card.\n";
        currentCredit = startingCredit - charge;
        if (currentCredit >= 0) // input for valid value
        {
            cout << "PHP " << setprecision(2) << fixed << charge << " has been deducted to your credit.\n"
                 << "Your new credit limit available: PHP " << currentCredit << "\n";
            break;
        }
        else // if charge exceeded the credit limit
        {
            cout << "Credit limit exceeded!"
                 << "Terminating the program...";
            return -2;
        }
     // case for paying for partial
     case 2:
        cout << "\nYou opted to pay partial using the credit card.\n"
             << "How much would you like to pay partially in credit?: PHP ";
        cin >> partialCharge;
        currentCredit = startingCredit - partialCharge; // only deducting the alloted credit
        if (currentCredit >= 0)
        {
        cout << "\nYou have paid PHP " << setprecision(2) << fixed << partialCharge << " in credit and paid PHP " << charge - partialCharge << " in cash.\n" // separating the cost in credit from cash
             << "Your new credit limit available: PHP " << currentCredit << "\n";
        }
        else
        {
            cout << "Credit limit exceeded!"
                 << "Terminating the program...";
            return -2;
        }
        break;
     default: // if option was not part of either choices
        cout << "Invalid option..."
             << "Terminating the program...";
        return -3;    
        break;
    }

     return 0;
}