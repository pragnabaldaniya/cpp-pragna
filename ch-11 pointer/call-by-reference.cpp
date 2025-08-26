#include <iostream>
using namespace std;

// UDF OF POINTER......

 // call by reference :

   void swapping (int *a, int *b)
   {
    int c = *a;
    *a = *b;
    *b = c;
   }

int main()
{
   int a, b;

   cout << "Enter first number : ";
   cin >> a;
   cout << "Enter seconf number : ";
   cin >> b;


     swapping (&a, &b);
    cout << "After swapping : " << endl;
    cout << "A\t : " << a << endl;
    cout << "B\t : " << b << endl;
}