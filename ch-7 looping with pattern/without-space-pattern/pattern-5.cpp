#include <iostream>
using namespace std;

main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
}