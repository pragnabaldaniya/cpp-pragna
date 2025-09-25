
#include <iostream>
#include "Car.cpp"
using namespace std;

// array of object
int main()
{
    // Car c1, c2;

    // c1 .setCarData();
    // c2 .setCarData();

    // c1.getCarData();
    // c2.getCarData();

    int size;

    cout << "Enter of Number : ";
    cin >> size;

    Car cars[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Car No : " << i + 1;
        cars[i] .setCarData();
    }

    for (int i = 0; i < size; i++)
    {
        cars[i] .getCarData();
    }

    cars[0].sumofcarprice(size,cars);

}