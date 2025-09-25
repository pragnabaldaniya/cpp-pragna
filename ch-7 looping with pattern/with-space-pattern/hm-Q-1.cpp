#include <iostream>
using namespace std;

main()
{
    int n = 5;
    int i, j, start;

    for (i = 1; i <= n; i++)
    {
        start = i;
        int step = n - 1;

        for (j = 1; j <= i; j++)
        {
            cout << start << "" ;
            start = start + step;
            step--;
        }

        cout << endl;
    }
}