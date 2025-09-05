#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int rollNo;
    char name[20];
    int age;

public:
    static char school[20];



// setter
    void setStudentData()
    {
        cout << endl;
        cout << "Enter your roll No : ";
        cin >> this -> rollNo;
        fflush(stdin);
        cout << "Enter your Name : ";
        gets (this -> name);
        cout << "Enter your Age : ";
        cin >> this -> age;
    }

// getter
    void getStudentData()
    {
        cout << endl;
        cout << "Roll No\t : " << this -> rollNo << endl;
        cout << "Name\t : " << this -> name << endl;
        cout << "Age\t : " << this -> age << endl;
        cout << "School\t : " << this -> school << endl;
    }
};
    char Student :: school[20] = "RNW school" ;