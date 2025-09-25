#include <iostream>
#include <string.h>
using namespace std;

class Customers
{
private:
    int id;
    char name[20];
    int age;
    char city[20];
    int mobileNo;
    int simcard_validity;
    char telecombrand;

public:

// setter
    void setCostomersData()
    {
        cout << endl;
        cout << "Enter your Id : ";
        cin >> this -> id;
        fflush(stdin);
        cout << "Enter your Name : ";
        gets (this -> name);
        cout << "Enter your Age : ";
        cin >> this -> age;
        fflush(stdin);
        cout << "Enter your City : ";
        gets (this -> city);
        cout << "Enter your Mobile No : ";
        cin >> mobileNo;
        cout << "Enter any Simcard Validity : ";
        cin >> simcard_validity;
        
    }
// getter
    void getCostomersData()
    {
        cout << endl;
        cout << "Id\t : " << this -> id << endl;
        cout << "Name\t : " << this -> name << endl;
        cout << "Age\t : " << this -> age << endl;
        cout << "City\t : " << this -> city << endl;
        cout << "Mobile No\t : " << this -> mobileNo << endl;
        cout << "Simcar Validity\t : " << this -> simcard_validity << endl;
    }

};