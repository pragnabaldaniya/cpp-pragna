#include <iostream>
using namespace std;

// Atributes == Data members

class Student
{
public :
    char name[20];
    int rollNo;
    int age;
    char course[20];
    
};


int main()
{
    // object : class_name objname;

    Student student;

    //(.) Dot oprator
    cout << "Student Input : " << endl << endl;

    cout << "Enter your name : ";
    cin >> student.name;
    cout << "Enter your RollNo : ";
    cin >> student.rollNo;
    cout << "Enter your Age : ";
    cin >> student.age;
    cout << "Enter your Course : ";
    cin >> student.course;

    cout << endl << "Student Info : " << endl;

    cout << "Name\t : " << student.name << endl;
    cout << "RollNo\t : " << student.rollNo << endl;
    cout << "Age\t : " << student.age << endl;
    cout << "Course\t : " << student.course << endl;
}

