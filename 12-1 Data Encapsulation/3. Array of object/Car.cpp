#include <iostream>
using namespace std;

// array of object
class Car
{
private :
    int id;
    char name[20];
    char color[20];
    double price;

public :
    //setter
    void setCarData()
    {
        cout << "Enter your car id : ";
        cin >> this -> id;
        fflush(stdin);
        cout << "Enter your car name : ";
        gets (this -> name);
        fflush(stdin);
        cout << "Enter your car color : ";
        gets (this -> color);
        cout << "Enter your car price : ";
        cin >> this -> price;
        cout << endl;
    }

    //getter
    void getCarData()
    {
        cout << endl;
        cout << "Car Id \t\t : " << this -> id << endl;
        cout << "Car Name\t : " << this -> name << endl;
        cout << "Car Color\t : " << this -> color << endl;
        cout << "Car Price\t : " << this -> price << endl;
    }

    // sum of car price
    void sumofcarprice (int size, Car cars[])
    {
        double sum = 0;
        for(int i = 0; i < size; i++){
            sum += cars[i].price;
        }
    }
    
};