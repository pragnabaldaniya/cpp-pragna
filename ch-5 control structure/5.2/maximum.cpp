
#include <iostream>
using namespace std;

 main() 
{
    int a, b, c, d;
    cout << "Enter a value of first number:";
    cin >> a;
     cout << "Enter a value of second number:";
    cin >> b;
     cout << "Enter a value of third number:";
    cin >> c;
    cout << "Enter a value of four number:";
    cin >> d;


    // Input 4 number maximum

    if (a > b) {
        if (a > c) {
            if (a > d) {
                  cout << a << "is maximum..";
            } else {
                cout << d << "is maximum..";
            }
        } else {
            if (c > d) {
                cout << c << "is maximum..";
            } else {
                 cout << d << "is maximum..";
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
               cout << b << "is maximum..";
            } else {
                cout << d << "is maximum..";
            }
        } else {
            if (c > d) {
                cout << c << "is maximum..";
            } else {
                 cout << d << "is maximum..";
            }
        }
         cout << "the maximum value is : 12" << endl;
    }
    
    
  


}
