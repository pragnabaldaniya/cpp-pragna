#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[20];
    int emp_age;
    char emp_role[20];
    float emp_salary;
    char emp_city[20];
    int emp_experience;
    char emp_company_name[20];
};

int main()
{
    // object : class_name objname;

    Employee emp1, emp2, emp3, emp4, emp5;

    // emp 1 input...
    cout << "Enter details for Employee 1: " << endl << endl;
    cout << "Enter Id : ";
    cin >> emp1.emp_id;
    cout << "Enter your name : ";
    cin >> emp1.emp_name;
    cout << "Enter your Age : ";
    cin >> emp1.emp_age;
    cout << "Enter Role : ";
    cin >> emp1.emp_role;
    cout << "Enter your salary : ";
    cin >> emp1.emp_salary;
    cout << "Enter your City : ";
    cin >> emp1.emp_city;
    cout << "Enter Experience : ";
    cin >> emp1.emp_experience;
    cout << "Enter Company Name : ";
    cin >> emp1.emp_company_name;
    // emp1 output...
    cout << endl << "Employee 1 Information : " << endl;

    cout << "Id          : " << emp1.emp_id << endl;
    cout << "Name        : " << emp1.emp_name << endl;
    cout << "Age         : " << emp1.emp_age << endl;
    cout << "Role        : " << emp1.emp_role << endl;
    cout << "Salary      : " << emp1.emp_salary << endl;
    cout << "City        : " << emp1.emp_city << endl;
    cout << "Experience  : " << emp1.emp_experience << endl;
    cout << "Company Name: " << emp1.emp_company_name << endl;

    // emp 2 input....
    cout << endl << "Enter details for Employee 2: " << endl << endl;cout << "Enter Id : ";
    cin >> emp2.emp_id;
    cout << "Enter your name : ";
    cin >> emp2.emp_name;
    cout << "Enter your Age : ";
    cin >> emp2.emp_age;
    cout << "Enter Role : ";
    cin >> emp2.emp_role;
    cout << "Enter your salary : ";
    cin >> emp2.emp_salary;
    cout << "Enter your City : ";
    cin >> emp2.emp_city;
    cout << "Enter Experience : ";
    cin >> emp2.emp_experience;
    cout << "Enter Company Name : ";
    cin >> emp2.emp_company_name;

    // emp 2 output..
    cout << endl << "Employee 2 Information : " << endl;
    cout << "Id          : " << emp2.emp_id << endl;
    cout << "Name        : " << emp2.emp_name << endl;
    cout << "Age         : " << emp2.emp_age << endl;
    cout << "Role        : " << emp2.emp_role << endl;
    cout << "Salary      : " << emp2.emp_salary << endl;
    cout << "City        : " << emp2.emp_city << endl;
    cout << "Experience  : " << emp2.emp_experience << endl;
    cout << "Company Name: " << emp2.emp_company_name << endl;

    // emp 3 input...
    cout << endl <<"Enter details for Employee 3: " << endl << endl;cout << "Enter Id : ";
    cin >> emp3.emp_id;
    cout << "Enter your name : ";
    cin >> emp3.emp_name;
    cout << "Enter your Age : ";
    cin >> emp3.emp_age;
    cout << "Enter Role : ";
    cin >> emp3.emp_role;
    cout << "Enter your salary : ";
    cin >> emp3.emp_salary;
    cout << "Enter your City : ";
    cin >> emp3.emp_city;
    cout << "Enter Experience : ";
    cin >> emp3.emp_experience;
    cout << "Enter Company Name : ";
    cin >> emp3.emp_company_name;

    //emp 3 output....
    cout << endl << "Employee 3 Information : " << endl;
    cout << "Id          : " << emp3.emp_id << endl;
    cout << "Name        : " << emp3.emp_name << endl;
    cout << "Age         : " << emp3.emp_age << endl;
    cout << "Role        : " << emp3.emp_role << endl;
    cout << "Salary      : " << emp3.emp_salary << endl;
    cout << "City        : " << emp3.emp_city << endl;
    cout << "Experience  : " << emp3.emp_experience << endl;
    cout << "Company Name: " << emp3.emp_company_name << endl;

    //emp 4 input...
    cout << endl << "Enter details for Employee 4: " << endl << endl;cout << "Enter Id : ";
    cin >> emp4.emp_id;
    cout << "Enter your name : ";
    cin >> emp4.emp_name;
    cout << "Enter your Age : ";
    cin >> emp4.emp_age;
    cout << "Enter Role : ";
    cin >> emp4.emp_role;
    cout << "Enter your salary : ";
    cin >> emp4.emp_salary;
    cout << "Enter your City : ";
    cin >> emp4.emp_city;
    cout << "Enter Experience : ";
    cin >> emp4.emp_experience;
    cout << "Enter Company Name : ";
    cin >> emp4.emp_company_name;

    // emp 4 output...
    cout << endl << "Employee 4 Information : " << endl;
    cout << "Id          : " << emp4.emp_id << endl;
    cout << "Name        : " << emp4.emp_name << endl;
    cout << "Age         : " << emp4.emp_age << endl;
    cout << "Role        : " << emp4.emp_role << endl;
    cout << "Salary      : " << emp4.emp_salary << endl;
    cout << "City        : " << emp4.emp_city << endl;
    cout << "Experience  : " << emp4.emp_experience << endl;
    cout << "Company Name: " << emp4.emp_company_name << endl;

    // emp 5 input...
    cout << endl << "Enter details for Employee 5: " << endl << endl;cout << "Enter Id : ";
    cin >> emp5.emp_id;
    cout << "Enter your name : ";
    cin >> emp5.emp_name;
    cout << "Enter your Age : ";
    cin >> emp5.emp_age;
    cout << "Enter Role : ";
    cin >> emp5.emp_role;
    cout << "Enter your salary : ";
    cin >> emp5.emp_salary;
    cout << "Enter your City : ";
    cin >> emp5.emp_city;
    cout << "Enter Experience : ";
    cin >> emp5.emp_experience;
    cout << "Enter Company Name : ";
    cin >> emp5.emp_company_name;

    // emp 5 output...
    cout << endl << "Employee 5 Information : " << endl;
    cout << "Id          : " << emp5.emp_id << endl;
    cout << "Name        : " << emp5.emp_name << endl;
    cout << "Age         : " << emp5.emp_age << endl;
    cout << "Role        : " << emp5.emp_role << endl;
    cout << "Salary      : " << emp5.emp_salary << endl;
    cout << "City        : " << emp5.emp_city << endl;
    cout << "Experience  : " << emp5.emp_experience << endl;
    cout << "Company Name: " << emp5.emp_company_name << endl;
    
}