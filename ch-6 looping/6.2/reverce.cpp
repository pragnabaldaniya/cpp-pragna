#include <iostream>
using namespace std;

main()
{
    int n = 793;
    int rem;
    int rev = 0;
   

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;

    }
    cout << rev << endl;

}