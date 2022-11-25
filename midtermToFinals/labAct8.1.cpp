#include <iostream>

using namespace std;

int main()
{
    int value, x;
    cout << "This program determines the factorial of an integer.\n"
         << "Enter an integer: ";
    cin >> value;
    x = value;
    if (x < 0)
    {
        cout << "Math error!";
        return -1;
    }
    else if (x == 0)
    {
        value = 1;
    }
    else
    {
        do
        {
            x--;
            value *= x;
        } while (x > 1);
    }
    cout << "The factorial is " << value;
    return 0;
}