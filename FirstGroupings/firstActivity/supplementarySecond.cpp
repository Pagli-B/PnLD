#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

main()
{
    cout << "N\t2^n\n"
         << "0\t" << pow(2, 0) << "\n"
         << "1\t" << pow(2, 1) << "\n"
         << "2\t" << pow(2, 2) << "\n"
         << "3\t" << pow(2, 3) << "\n"
         << "4\t" << pow(2, 4) << "\n"
         << "5\t" << pow(2, 5) << "\n"
         << "6\t" << pow(2, 6) << "\n"
         << "7\t" << pow(2, 7) << "\n"
         << "8\t" << pow(2, 8) << "\n";
    getch();
}