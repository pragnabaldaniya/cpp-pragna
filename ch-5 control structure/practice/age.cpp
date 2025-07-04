#include <iostream>
using namespace std;

main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;

    if(age > 18){
        cout << "you can vote!!";
    }

    else{
        cout << "you cannot vote!!";
    }

}