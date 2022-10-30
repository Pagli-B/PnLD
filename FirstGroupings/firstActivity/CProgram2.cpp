#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int fNum = 3, sNum = 2;
    cout << "Addition: \t" << (fNum += sNum);         // fnum = 3 + 2 = 5
    cout << "\nMultiplication: \t" << (fNum *= sNum); // fNum = 5 * 2 = 10
    cout << "\nDivision: \t" << (fNum /= sNum);       // fNum = 10 / 2 = 5
    cout << "\nModulus: \t" << (fNum %= sNum);        // fNum = 5 % 2 = 5 / 2  = 1
    getch();
}

/*

 */

/* 7. Explain briefly the flow of the output.
    We have the results of the operations done in the program which are Addition: 5, Multiplication : 10, Division: 5, and Modulus: 1;

   6. DATA/PROGRAM ANALYSIS

   1. From Sample Program1.2, what will be the output of line 9. Explain.
    - The output of line 9 is 1, we have done multiple assignment operations from 5 to 10 to 5. Then in line 9, we have the value of fNum as 5, by following the modulo assignment operation fNum%sNum (5%2), we have a result of 1 because 5 divided by 2 is 2 remainder "1" which we use as the answer in modulo.

   2. In Sample Program 1.1 line 7, omit the character "<<". Will the program run? Why?
    - No, as part of the cout statement, we need to use << to determine what will be displayed on the output whether it be a set of words or variables used in the program.

   3. From Sample Program 1.1 line 5, what is the significant of "5" in the program?
    - We started the operation with an addition assignment, where we added the fNum (3) and sNum (2) which results to 5. 5 will be the new value for fNum for the proceeding operations.

   4. If semicolon (;) is omitted in the Sample program 1.2 line 6, does the program have an error? (yes/no) if yes, what will be the error of the program? Write the comment that appears in the compiler.
    - Yes, there will be an error. The comment of the compiler as shown:
    [Error] expected ';' before 'cout'

   5. From the Sample Program 1.2 line 5, change the data type "int" to "float". What will be the output of the program and explain.
    - There has an error that states[Error] in evaluation of 'operator%=(float, float)'. The reason is modulo can't be done on numbers that have a fractional/decimal part. Hence, the program will not compile at all.

   6. From Sample Program 1.1, replace te code of line 1 and line 2 by
   "/*#include <stdio.h>
   #inlude <conio.h>*
   Observe the output and explain
   - The program resulted in an error, because the the library we changed didn't supported the cout statement. In the first place, we used iostream for the cout functionality. Another problem is that the pre-processor derectives are commented out, when statements are commented out, they are not compiled with the other statements. Pre-processor directives are there to tell the compiler which library to use and where to get the functions. So essentially, we have no library present in our compiler.

 */