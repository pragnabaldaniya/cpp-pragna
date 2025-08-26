#include <iostream>
using namespace std;

// UDF OF POINTER.....

 // call by value :

    int sum (int val1, int val2)
    {
        return val1 + val2;
    }

int main()
{
   int a, b;

   cout << "Enter first number : ";
   cin >> a;
   cout << "Enter seconf number : ";
   cin >> b;

   cout << "Sum : " << sum (a, b);
}