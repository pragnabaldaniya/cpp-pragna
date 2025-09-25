#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char psw [20];
    cout << "Enter your password : ";
    cin >> psw;

    int len = strlen(psw);
    int upr = 0;
    int lwr = 0;
    int digit = 0;
    int symbol = 0;

    if (len >= 6)
    {
        for (int i = 0; i < len; i++){
            
        if (psw[i] >= 65 && psw[i] <= 90)
        upr++;
        else if(psw[i] >= 97 && psw[i] <= 122)
         lwr++;
     
        else if(psw[i] >= 48 && psw[i] <= 57)
         digit++;
     
        else
        symbol++;
        }

        cout << "Total uppercase : " << upr << endl;
        cout << "Total lwercase : " << lwr << endl;
        cout << "Digit : " << digit << endl;
        cout << "Symbol : " << symbol << endl;

        if(upr >= 1 && lwr >= 1 && digit >= 1 && symbol >=1)
        cout << "Password is strong..";
     
        else
        cout << "Password not strong..";
    }

        else
        {
        cout << "Password should be at least 6 characters long." << endl;
        }
     
}