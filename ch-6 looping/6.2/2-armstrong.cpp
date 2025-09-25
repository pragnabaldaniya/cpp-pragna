#include <iostream>
using namespace std;

main()
{
    int n, originalnum, rem, result = 0;
    cout << "Enter a number:";
    cin >> n;
    int digit = 0;

    originalnum = n;

    //count digit
    int a = n;
    while(a != n){
        a /= 10;
        digit++;
    }
    a = n;
    while (a != 0)
    {
        rem = a % 10;
        
        int power = 1;
        for (int i = 0; i < digit; i++){
            power *= rem;
        }
        result += power;
        a /= 10;
    }
    if (result == originalnum)
        cout << originalnum << "is a Armstrong number." << endl;
    else
        cout << originalnum << "is not a Armstrong number." << endl;


}