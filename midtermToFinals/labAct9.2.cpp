#include <iostream>

using namespace std;

int main()
{
    cout << "X\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n";
    for (int x = 1; x <= 10; x++)
    {
        cout << x << "\t";
        for (int y = 1; y <= 10; y++)
        {
            cout << x * y << "\t";
        }
        cout << "\n";
    }
    return 0;
}