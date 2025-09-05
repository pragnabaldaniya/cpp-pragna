#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    public:

    int id;
    char name[20];
    float salary;
    char role[20];

    //setter
    void setEmployeeData()
    {
        cout << "Enter your Emp Id : ";
        cin >> id;
        fflush(stdin);
        cout << "Enter your name : ";
        gets(name);
        cout << "Enter your salary : ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter your role : ";
        gets(role);
        cout << endl << endl;
    }
    
    // Getter
    void getEmployeeData()
    {
        cout << endl << endl;
        cout << "Emp Id\t\t : " << id << endl;
        cout << "Emp Name\t : " << name << endl;
        cout << "Emp Salary\t : " << salary << endl;
        cout << "Emp Role\t : " << role << endl;
    }
};

// int main()
// {
//     Employee e1, e2;

//     e1.setEmployeeData();
//     e2.setEmployeeData();

//     e1.getEmployeeData();
//     e2.getEmployeeData();
// }
 
