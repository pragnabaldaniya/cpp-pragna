#include <iostream>
using namespace std;

main()
{
    // leap years 2020 to 2040

    int a, b;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;

    while (a <= b)
    {
         if (a % 4 == 0 and b % 100 != 0){
            cout << a << endl;
        }
        a ++;
    }
}





