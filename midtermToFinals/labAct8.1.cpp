#include <iostream>

using namespace std;

int main()
{
    int i, n, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    i = 1;
    do
    {
        factorial *= i;
        ++i;
    } while (i <= n);
    cout << "Factorial of " << n << " = " << factorial;
    return 0;
}