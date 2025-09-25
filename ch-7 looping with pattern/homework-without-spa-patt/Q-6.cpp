#include <iostream>
using namespace std;

main()
{
    // galat he........
    char i, j;
    char n = 1;

    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            cout << n;
            n++;
            
            
        }
        cout << endl;
    }
}