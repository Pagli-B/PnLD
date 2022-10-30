#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

main()
{
     char degree = 248;
     float firstTemp = -5.4, secondTemp = 124.67, thirdTemp = 305.15; // Celius, Farenheight, Kelvin
     float firstFarenheightConversion, firstKelvinConversion, firstRankineConversion;

     firstFarenheightConversion = ((1.8) * firstTemp) + 32;
     firstKelvinConversion = (firstTemp) + 273.15;
     firstRankineConversion = firstFarenheightConversion + 459.67;

     cout << setprecision(2) << fixed << "First Constant Value = " << firstTemp << degree << "C\n"
          << degree << "F = " << firstFarenheightConversion << degree << "F\n"
          << degree << "K = " << firstKelvinConversion << degree << "K\n"
          << degree << "R = " << firstRankineConversion << degree << "R\n";

     float secondFarenheightConversion, secondKelvinConversion, secondRankineConversion;

     secondFarenheightConversion = 5 * (secondTemp - 32) / 9;
     secondKelvinConversion = secondFarenheightConversion + 273.15;
     secondRankineConversion = secondTemp + 459.67;

     cout << "\nSecond Constant Value = " << secondTemp << degree << "F\n"
          << degree << "F = " << secondFarenheightConversion << degree << "C\n"
          << degree << "K = " << secondKelvinConversion << degree << "K\n"
          << degree << "R = " << secondRankineConversion << degree << "R\n";

     float thirdFarenheightConversion, thirdCelciusConversion, thirdKelvinConversion, thirdRankineConversion;

     thirdFarenheightConversion = (thirdTemp - 491.67) * 5 / 9;
     thirdCelciusConversion = thirdFarenheightConversion;
     thirdKelvinConversion = ((1.8) * thirdFarenheightConversion) + 32;
     thirdRankineConversion = thirdTemp * 0.5555555556;

     cout << "\nThird Constant Value = " << thirdTemp << degree << "R\n"
          << degree << "C = " << thirdFarenheightConversion << degree << "C\n"
          << degree << "F = " << thirdKelvinConversion << degree << "F\n"
          << degree << "R = " << thirdRankineConversion << degree << "R\n";

     getch();
}