#include <iostream>
using namespace std;

int main()
{
    // char name [20];
    // char *ptr [20];

    // cout << "Entsr your name : ";
    // cin >> name;

    // ptr[0] = &name[0];

    // cout << "Nmae\t : " << name << endl;
    // cout << "Name\t : " << *ptr [0];

    // *ptr = "HELLO";
       
    // cout << "Nmae\t : " << name << endl;
    // cout << "Name\t : " << *ptr [0];

    //OR OPTION

    string name;
    string *ptr;
    cout << "Enter your name : ";
    cin >> name;

    ptr = &name;

    cout << "Name\t : " << name << endl;
    cout << "Name\t : " << *ptr << endl;
}