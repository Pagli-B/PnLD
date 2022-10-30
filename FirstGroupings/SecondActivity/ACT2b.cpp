#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    int userUnit, dayConvert, hourConvert, minutesConvert;

    cout << "Enter a year that will be converted to minutes: ";
    cin >> userUnit;

    dayConvert = userUnit * 365;
    hourConvert = dayConvert * 24;
    minutesConvert = hourConvert * 60;

    cout << "\n\n"
         << userUnit << " Year is equivalent to " << minutesConvert << " minutes";

    getch();
}