#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

main()
{
    int firstNum, secondNum;
    float multiply, add, subtract, modulus, firstFloat, secondFloat;
    float divide;
    cout << "Input First Number: ";
    cin >> firstNum;
    cout << "Input Second Number: ";
    cin >> secondNum;

    firstFloat = firstNum;
    secondFloat = secondNum;

    multiply = firstNum * secondNum;
    add = firstNum + secondNum;
    subtract = firstNum - secondNum;
    divide = firstFloat / secondFloat;
    modulus = firstNum % secondNum;

    cout << "Multiplication:\t" << multiply
         << "\nAddition:\t" << add
         << "\nSubtraction:\t" << subtract
         << setprecision(2) << fixed
         << "\nDivision:\t" << divide
         << setprecision(0) << fixed
         << "\nModulus:\t" << modulus;
    getch();
}