#include <iostream>
using namespace std;

main()
{
    //1 to n number

    int a = 1;
    int n; //7
    cout << "Enter any number:";
    cin >> n;

    while (a <= n) //1 <= 7
    {
        cout << a << "\t";
        a++;
    }

}