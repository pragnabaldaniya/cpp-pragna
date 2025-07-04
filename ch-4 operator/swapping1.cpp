#include <iostream>
using namespace std;

main()
{
    //Q-1 using third variable
    int a, b;

    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;

    cout <<endl <<"A\t:" <<a << endl <<"B\t:" <<b;

    // using third variable
    int c = a; //c=10

    a = b; //a = 20
    b = c; //b = 10

    cout << endl <<"A\t:" << a << endl <<"B\t:" <<b;

}