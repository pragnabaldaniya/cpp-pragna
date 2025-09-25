#include <iostream>
using namespace std;

main()
{
    // multipal formula
    int n;
    cout << "Enter ant numebr:";
    cin >> n;

    int a =1;
    while (a <= 10)
    {
        cout << n << "*" << a << "=" << n * a << endl;
        a++;

    }
}