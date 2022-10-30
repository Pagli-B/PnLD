#include <iostream.h>
#include <conio.h>

using namespace std;

main()
{
    char pro[5] = "CPE";
    cout << "Your Program " << pro << "\n \tis easy";
    getch();
}

/* Is the output similar? (yes or no) If no why?
    - The output is not similar. The program resulted in an error where cout was not declared in the file. The program does not have the line "using namespace std" which is used in order to shorten the syntax of the statements. In the line cout, we need to have std:: beforehand. However, by using "using namespace std", we can write cout only and the program would compile and run normally.
 */
