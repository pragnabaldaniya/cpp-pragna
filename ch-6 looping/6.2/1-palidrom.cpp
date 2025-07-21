#include <iostream>
using namespace std;

main()
{
    int n, originalnum;
    cout << "Enter a number:";
    cin >> n;
    originalnum = n;

    int rev = 0;
    int rem;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << rev << endl;

    if (originalnum == rev)
        cout << originalnum << "is a palindrom number.." << endl;
    else
        cout << originalnum << "is not a palindrom number.." << endl;
}