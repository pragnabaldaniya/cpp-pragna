#include <iostream>
using namespace std;

main()
{
    //1 2 3 5 8 13 ......?

    int a = 1, b = 2;
    int n;
    cout << "how number do you need? :";
    cin >> n;

    int i = 1;
    int c;
    cout << a << endl << b << endl;

    while (i <= n)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;

        i++;
    }
}