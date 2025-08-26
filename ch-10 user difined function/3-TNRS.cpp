#include <iostream>
using namespace std;

// TNRS - tack nothing return something

int addition ()
{
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    return a + b;
}

int inputint ()
{
    int n;
    cin >> n;
    return n;
}

int main()
{
    int ans = addition();
    {
        cout << "Sum : " << ans << endl << endl;
    }

    int age;
    cout << "Enter your age : ";
    age = inputint();
    cout << "Age : " << age;

     return 0;
}