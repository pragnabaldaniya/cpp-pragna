#include <iostream>
using namespace std;

main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            cout << j << "\t" ;
        }

        cout << endl;
    }
}