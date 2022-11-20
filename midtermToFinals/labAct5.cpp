#include <iostream>

using namespace std;

int main()
{
    /*
    Prelim Grade = (R * 0.60) + (PE * 0.40)
    where : R = Average of all the requirements given in Prelim
            PE = your Prelim Exam Grade
    Note: All grades must be in percentage (not raw scores)

     */

    cout << "This program computes for the preliminary period.\n"
         << "(Enter the percentage value, 0-100)\n";
    
    char fullName[50];
    cout << "Enter your fullname: ";
    cin.getline (fullName, 50);

    int R, PE; //initialize variables
    cout << "Enter your average of all requirements given in Prelim: ";
    cin >> R; 
    cout << "Enter your Prelim Exam Grade: ";
    cin >> PE;

    int prelimGrade = (R * 0.60) + (PE * 0.40);

    string letterGrade;

    if (prelimGrade > 0 && prelimGrade <= 100)
    {
        if (prelimGrade >= 97 && prelimGrade <= 100)
        {
            letterGrade = "A";
        }
        else if (prelimGrade >= 93 && prelimGrade <= 96)
        {
            letterGrade = "A-";
        }
        else if (prelimGrade >= 89 && prelimGrade <= 92)
        {
            letterGrade = "B+";       
        } 
        else if (prelimGrade >= 85 && prelimGrade <= 88)
        {   
            letterGrade = "B";
        }
        else if (prelimGrade >= 82 && prelimGrade <= 84)
        {   
            letterGrade = "B-";
        }
        else if (prelimGrade >= 79 && prelimGrade <= 81)
        {   
            letterGrade = "C+";
        }
        else if (prelimGrade >= 76 && prelimGrade <= 78)
        {   
            letterGrade = "C";
        }
        else if (prelimGrade >= 73 && prelimGrade <= 75)
        {   
            letterGrade = "C-";
        }
        else if (prelimGrade >= 70 && prelimGrade <= 72)
        {   
            letterGrade = "D";
        }
        else if (prelimGrade < 70)
        { 
            letterGrade = "F";
        }
        else 
        { 
        cout << "Values entered not valid...";
        }
        
    }
    cout << "Student Name: " << fullName << "\n"
         << "Prelim Grade: " << prelimGrade << "\n"
         << "Obtained letter grade: " << letterGrade;
    return 0;
}