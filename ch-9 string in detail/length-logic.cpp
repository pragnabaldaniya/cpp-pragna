#include <iostream>
using namespace std;

main()
{
    char name [20];
    cout << "Enter your name : ";
    cin >> name;

    cout << "Name\t :" << name << endl << endl;

    int len = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        len++;
        
    }
    cout << "Length\t : " << len;
    
}