#include <iostream>
using namespace std;

main()
{
    //Q-2 without using third variable
      int a, b;

    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;

    cout <<endl <<"A\t:" <<a << endl <<"B\t:" <<b;

    
    // without using third variable (+ -)
    a = a + b; //a=30;
    b = a - b; //30-20 =10
    a = a - b; // 30-10 =20

    //without using third variable (* /)
    a = a * b; //10 * 20 = 200=a
    b = a / b; // 200 / 20 = 10=b
    a = a / b; //200 /10 = 20=a


    cout << endl <<"A\t:" << a << endl <<"B\t:" <<b;
}