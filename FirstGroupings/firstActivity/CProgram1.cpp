#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    char pro[5] = "CPE";
    cout << "Your Program " << pro << "\n \tis easy";
    getch();
}

/* 6. Is the output similar? (yes or no) If no why?
    - The output is not similar, the matter of fact there are 2 errors present in the program. Firstly, there is no such pre-processor directive as iostream.h, rather it is only iostream. Secondly, the program resulted in an error where cout was not declared in the file. In order to solve the problems, we will use the correct the iostream.h to iostream and include a statement that will make cout declared. The program does not have the line "using namespace std;" which is used in order to shorten the syntax of the statements. In the line cout, we need to have std:: beforehand. However, by using "using namespace std", we can write cout only and the program would compile and run normally.
 */