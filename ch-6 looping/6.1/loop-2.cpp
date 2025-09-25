#include <iostream>
using namespace std;

main()
{
    // n value user and 1 to .....
    int a = 1;
    int n;
    cout << "Enter any number:";
    cin >> n;

    while (n >= a)
    {
        cout << n << "\t";
        n--;
    }
}