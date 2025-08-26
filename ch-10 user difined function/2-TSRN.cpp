#include <iostream>
using namespace std;

// TSRN - TACK SOMETHING, RETURN NOTHING

    // void addition (int a, int b)
    // {
    //     cout << "Addition is : " << a + b << endl;
    // }
    // int main()
    // {
    //     addition (5, 3);
    //     return 0;
    // }
void sum (int a, int b, int c)
{
    cout << a << " + " << b << " + " << c << " = " << a + b + c ;
}

int main()
{

    int a, b, c;
    cout << "Enter first number is : ";
    cin >> a;
    cout << "Enter second number is : " ;
    cin >> b;
    cout << "Enter third number is : " ;
    cin >> c;

    sum (a, b, c);
    // sum (10, 20, 30);
    return 0;
}
