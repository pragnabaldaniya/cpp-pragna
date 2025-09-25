#include <iostream>
using namespace std;

int main()
{
    int *a = new int();
    float *PI = new float();
    // *a = 22;

    cout << "Enter any Number : ";
    cin >> *a;
   
    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl << endl;

    delete a;

    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl << endl;

    a = new int(50);

    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl << endl;

    delete a;

    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl << endl;

    // array
    a = new int [3];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl << endl;

    delete[] a;
    a = NULL; // dengling pointer remove

    cout << "Address : " << a << endl;
    cout << "Value : " << *a << endl << endl;

}