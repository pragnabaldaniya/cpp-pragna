#include <iostream>
using namespace std;

main()
{
    //odd 1 to n 

    int a = 1;
    int n;
    cout << "Enter any number:";
    cin >> n;

    while (a <= n)
    {
        if (a % 2 != 0){
            cout << a << "\t";
        }
        a++;
    }
}