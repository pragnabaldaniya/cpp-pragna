#include <iostream>
using namespace std;

main()
{
    // minimum of 3 number 
    int a, b, c;
    cout << "Enter a value of first number:";
    cin >> a;
     cout << "Enter a value of second number:";
    cin >> b;
     cout << "Enter a value of third number:";
    cin >> c;

    if (a==b && a==c && b==c)
    {
        cout << endl << "All are equal...";
    }
    else if (a==b || a==c || b==c)
    {
        cout << endl << "Both are equal...";
    }
    else{
         if (a < b)
    {
        if (a < c){
            cout << endl << a << "is minimum..";
        }
        else{
            cout << endl << c << "is minimum..";
        }
    }
    else{
          if (b < c){
            cout << endl << b << "is minimum..";
        }
        else{
            cout << endl << c << "is minimum..";
        }
    }
    cout << "the minimum value is : 3" << endl;
    }

   


}