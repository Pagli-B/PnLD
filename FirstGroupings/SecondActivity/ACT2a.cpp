#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    float userUnit, centimeterConvert, meterConvert;

    cout << "Enter a unit of inch that will be converted to meter: ";
    cin >> userUnit;

    centimeterConvert = userUnit * 2.54;
    meterConvert = centimeterConvert / 100;

    cout << "\n\nThe " << userUnit << " inch(es) is equivalent to " << meterConvert << " meter(s).";
    getch();
}