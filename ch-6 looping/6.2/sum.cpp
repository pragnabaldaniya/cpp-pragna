#include <iostream>
using namespace std;

main()
{
    int a = 1;
    int n;
    cout << "Enter any number:";
    cin >> n;

    int sum = 0;
    while (a <= n)
    {
        sum = sum + a ;
        a++;
    }
    cout << "sum\t:" << sum << endl;
}