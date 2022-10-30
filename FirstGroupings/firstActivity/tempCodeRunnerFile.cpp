#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

main()
{
    float a, T, m, g; // a = initial acceleration T - thrust in Newton m - mass in kg g - acceleration caused by gravity in m/s^2

    T = 6e6;
    g = 9.81;
    m = 5e4;

    a = (T - (m * g)) / m;

    cout << "The initial acceleration, a, of a rocket fired from earth , with an initial thrust, T, is given by this formula:\n a = (T - mg) / m\n where:\n a = initial acceleration \n T = thrust in Newton\n m = mass in kg\n g = acceleration caused by gravity in m/s^2"
         << "\nWrite and run program that will determine the initial acceleration of a rocket having a mass of 5X10^4 kg and an initial thrust of 6X10^5 Newtons. The Value of g is 9.81m/s^2.\n\n";
    cout << "The initial acceleration is " << a << "m/s^2.";
    getch();
}