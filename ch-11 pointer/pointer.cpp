#include <iostream>
using namespace std;

int main()

{
    int n = 22;
    int *ptr;

    cout << "N Address : " << &n << endl;
    printf ("Decimal Address : %d", &n );
    cout << endl;
    printf ("Decimal Address : %u", &n);
    cout << endl;

    printf ("hexadecimal address : %p\n", &n);
    cout << endl;
    printf ("hexadecimal address : %x\n", &n);

    ptr = &n;
    cout << "Number : " << &n << endl;
    cout << "PTR : " << ptr << endl;
}