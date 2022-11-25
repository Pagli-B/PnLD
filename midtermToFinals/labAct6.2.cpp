#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // initialize the variables, sale and grossSale is different due to display functionality of decimal and the use of switch cases.
    int sale;
    float grossSale, commission;
    cout << "How much sales did the salesperson make the past week?: $";
    cin >> grossSale;
    sale = grossSale;
    switch(sale)
    {
    case -1: // inputting negative one will terminate the program
        cout << "Invalid Input...\n"
             << "Terminating the program...";
        return -1;
    default: // continuation of the program
        commission = 200 + (grossSale * 0.09); // given formula in the activity sheet
        cout << "The salesperson's earnings/commission is $" << setprecision(2) << fixed << commission << ".\n";
        break;
    }
    return 0;

}