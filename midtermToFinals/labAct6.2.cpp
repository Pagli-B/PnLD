#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int sale;
    float grossSale, commission;
    cout << "How much sales did the salesperson make the past week?: $";
    cin >> grossSale;
    sale = grossSale;
    switch(sale)
    {
    case -1:
        cout << "Invalid Input...\n"
             << "Terminating the program...";
        return -1;
    default:
        commission = 200 + (grossSale * 0.09);
        cout << "The salesperson's earnings/commission is $" << setprecision(2) << fixed << commission << ".\n";
        break;
    }
    return 0;

}