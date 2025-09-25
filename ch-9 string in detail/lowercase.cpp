#include <iostream>
using namespace std;

main()
{
    char str [20];
    cout << "Enter your name : ";
    cin >> str;

    cout << endl <<"Str\t :" << str << endl << endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] += 32;
        }
    }
    cout << "Name\t : " << str;
}