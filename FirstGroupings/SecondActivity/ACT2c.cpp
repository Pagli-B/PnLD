#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    float firstNum, secondNum, thirdNum, sum, average;

    cout << "Enter three numbers: ";
    cin >> firstNum;
    cin >> secondNum;
    cin >> thirdNum;

    sum = firstNum + secondNum + thirdNum;
    average = sum / 3;

    cout << "\n\nThe sum is " << sum << " and the average is " << average;

    getch();
}