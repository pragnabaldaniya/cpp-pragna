#include <iostream>
using namespace std;

main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= i; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
}