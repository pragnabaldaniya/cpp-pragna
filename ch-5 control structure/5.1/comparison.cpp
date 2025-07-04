#include <iostream>
using namespace std;

main()
{
    int a, b;
    cout << "Enter the first number:";
    cin >> a;
    cout << endl;

    cout << "Enter the second number:";
    cin >> b;
    cout << endl;

    if(a < b){
        cout <<"minimum number is:" << a;
    }
    else if(a < b)
    {
         cout <<"minimum number is:" << b;
    }
    else{
        cout << "both number are equal..";
    }
}