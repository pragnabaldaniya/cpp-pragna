#include <iostream>
using namespace std;

main()
{
    int start, end;

    cout << "Enter a start:";
    cin >> start;
    cout << "Enter a end:";
    cin >> end;

    for (i = start; i <= end; i++)
    {
        for(j =1; j <= 10; j++)
        {
            cout << i << "*" << j << "=" << i * j << endl;
        }

        cout << endl;
    }
}