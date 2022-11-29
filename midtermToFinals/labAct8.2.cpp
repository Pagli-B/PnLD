#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Angle\t\tsin x\t\tcos x\t\ttan x\nin degrees\n";
    float degree = 0;
    const float pi = 3.14159265358979323846;
    do
    {
        cout << degree << "\t\t" << sin(degree * (pi / 180)) << "\t\t" << cos(degree * (pi / 180)) << "\t\t" << tan(degree * (pi / 180)) << "\n";
        degree++;
    } while (degree <= 20);
    return 0;
}