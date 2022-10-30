#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    float speed, dist, time;
    cout << "Enter distance in meters: ";
    cin >> dist;
    cout << "Enter time in seconds: ";
    cin >> time;
    speed = dist / time;
    cout << "The speed is " << speed << " meters per second";
    getch();
}