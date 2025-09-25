#include <iostream>
using namespace std;

main()
{
    // odd number n to 1.....
    
    int a = 1;
    int n; //15
    cout << "Enter any number:";
    cin >> n;

    while (n >= a)
    {
        if (n % 2 !=0){
            cout << n << "\t";
        }
        n--;
    
    }
}