#include <iostream>
#include <string.h>
using namespace std;

class Person
{
protected:
    int id;
    char name[20];
    char role[20];

public:
    void setEmployeeData1()
    {
        cout << "Enter your Id : ";
        cin >> id;
        fflush(stdin);
        cout << "Enter Your Name : ";
        gets(this -> name);
        fflush(stdin);
        cout << "Enter Your Role : ";
        gets(this -> role);
    }

    void getEmployeeData1()
    {
        cout << endl ;
        cout << "Employee Id\t : " << this -> id << endl;
        cout << "Employee Name\t : " << this -> name << endl;
        cout << "Employee Role\t : " << this -> role << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;
    char companyName[20];
    char address[20];

public:
    void setEmployeeData2()
    {
        cout << "Enter your Salary : ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter Your CompanyName : ";
        gets(this -> companyName);
        fflush(stdin);
        cout << "Enter Your Address : ";
        gets(this -> address);
    }

    void getEmployeeData2()
    {
        cout << endl ;
        cout << "Employee Salary\t\t : " << this -> salary << endl;
        cout << "Employee CompanyName\t : " << this -> companyName << endl;
        cout << "Employee Address\t : " << this -> address << endl;
    }

};

class Worker : public Employee
{
protected:
    char email[20];
    int contact;

public:
    void setEmployeeData3()
    {
        fflush(stdin);
        cout << "Enter Your Email : ";
        gets(this -> email);
        cout << "Enter Your Contact : ";
        cin >> this -> contact;
    }

    void getEmployeeData3()
    {
        cout << endl;
        cout << "Employee Email\t\t: " << this -> email << endl;
        cout << "Employee Contact\t : " << this -> contact << endl;
    }
};
