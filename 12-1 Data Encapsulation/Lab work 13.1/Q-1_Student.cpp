#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int id;
    char name[20];
    int age;
    char course[20];
    char city[20];
    char email[20];
    char college[20];

public:

// setter
    void setStudentData()
    {
        cout << endl;
        cout << endl;
        cout << "Enter your Id : ";
        cin >> this -> id;
        fflush(stdin);
        cout << "Enter your Name : ";
        gets (this -> name);
        cout << "Enter your Age : ";
        cin >> this -> age;
        fflush(stdin);
        cout << "Enter your Course : ";
        gets (this -> course);
        fflush(stdin);
        cout << "Enter your City : ";
        gets (this -> city);
        fflush(stdin);
        cout << "Enter your Email : ";
        gets (this -> email);
        fflush(stdin);
        cout << "Enter your College : ";
        gets (this -> college);
    }

// getter
    void getStudentData()
    {
        cout << endl;
        cout << endl;
        cout << "Id\t : " << this -> id << endl;
        cout << "Name\t : " << this -> name << endl;
        cout << "Age\t : " << this -> age << endl;
        cout << "Course\t : " << this -> course << endl;
        cout << "City\t : " << this -> city << endl;
        cout << "Email\t : " << this -> email << endl;
        cout << "College\t : " << this -> college << endl;
    }


};