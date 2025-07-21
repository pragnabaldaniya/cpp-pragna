#include <iostream>
using namespace std;

main()
{
    int i, j;

    for (i = 10; i <= 14; i++)
    {
        for (j = 10; j <= i; j++)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
}