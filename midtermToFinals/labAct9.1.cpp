#include <iostream>

using namespace std;

int main()
{
    float temperature;
    char degree = 248;
    for (int i = 0; i < 6; i++)
    {
        cout << "[" << i + 1 << "] Enter temperature to in degree Celsius: ";
        cin >> temperature;
        temperature = (temperature * 1.8) + 32;
        cout << temperature << degree << "F\n";
    }
    return 0; 
}