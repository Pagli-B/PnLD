#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter a number between 1 to 10: ";
    cin >> x;
    switch (x)
    {
    case 1: 
        cout << "x = 1";
        break;
    case 2:
        cout << "x = 2";
        break;
    case 3:
        cout << "x = 3";
        break;
    case 4:
        cout << "x = 4";
        break;
    case 5:
        cout << "x = 5";
        break;
    default:
        cout << "x > 5";
        break;
    }
    return 0;
}