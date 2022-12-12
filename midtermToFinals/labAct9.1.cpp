#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;
    int i;

    for (i = 1; i <= 6; i++)
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "The temperature in Celsius is " << celsius << "\n";
    }

    return 0;
}