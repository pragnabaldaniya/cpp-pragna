#include <iostream>
using namespace std;

main()
{
    char str [20];
    cout << "Enter your name :";
    cin >> str;

    cout << "Name\t :" << str << endl;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str [i] >= 65 && str [i] <= 90)
        str [i] += 32;

        else if (str[i] >= 97 && str[i] <= 122)
        str [i] -= 32;
    }
    cout << "Toogalecase\t :"  << str;

}