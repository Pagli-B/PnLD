#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "N\tN^2\tN^3\tN^4"; // header for the table
    int value = 1;
    while (value <= 5) // computing up to only 5
    {
    cout << "\n" << value << "\t" << pow(value, 2) << "\t" << pow(value, 3) << "\t" << pow(value, 4); 
    value++;
    }
    return 0;
}