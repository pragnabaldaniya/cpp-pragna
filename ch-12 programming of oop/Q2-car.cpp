#include <iostream>
using namespace std;

class Car
{
public:

    int car_id;
    char company_name[20];
    char color[20];
    char model[20];
    int  car_release_year;

};
int main()
{
    // object : class_name objname;
    Car car1, car2, car3, car4;

    // car-1 input...
    cout << "Enter detail for car 1 : " << endl << endl;
    cout << "Car Id : " ;
    cin >> car1.car_id;
    cout << "Enter Company Name : ";
    cin >> car1.company_name;
    cout << "Car Color : ";
    cin >> car1.color;
    cout << "Model : ";
    cin >> car1.model;
    cout << "Car Release Year : ";
    cin >> car1.car_release_year;

    // car-1 output...
    cout << endl << "Car-1 Information : " << endl;
    cout << "Id           : " << car1.car_id << endl;
    cout << "Company name : " << car1.company_name << endl;
    cout << "Color        : " << car1.color << endl;
    cout << "Model        : " << car1.model << endl;
    cout << "Release year : " << car1.car_release_year << endl;

     // car-2 input...
    cout << endl << "Enter detail for car 2 : " << endl << endl;
    cout << "Car Id : " ;
    cin >> car1.car_id;
    cout << "Enter Company Name : ";
    cin >> car1.company_name;
    cout << "Car Color : ";
    cin >> car1.color;
    cout << "Model : ";
    cin >> car1.model;
    cout << "Car Release Year : ";
    cin >> car1.car_release_year;

    // car-2 output...
    cout << endl << "Car-2 Information : " << endl;
    cout << "Id           : " << car2.car_id << endl;
    cout << "Company name : " << car2.company_name << endl;
    cout << "Color        : " << car2.color << endl;
    cout << "Model        : " << car2.model << endl;
    cout << "Release year : " << car2.car_release_year << endl;

     // car-3 input...
    cout << endl << "Enter detail for car 3 : " << endl << endl;
    cout << "Car Id : " ;
    cin >> car1.car_id;
    cout << "Enter Company Name : ";
    cin >> car1.company_name;
    cout << "Car Color : ";
    cin >> car1.color;
    cout << "Model : ";
    cin >> car1.model;
    cout << "Car Release Year : ";
    cin >> car1.car_release_year;

    // car-3 output...
    cout << endl << "Car-3 Information : " << endl;
    cout << "Id           : " << car3.car_id << endl;
    cout << "Company name : " << car3.company_name << endl;
    cout << "Color        : " << car3.color << endl;
    cout << "Model        : " << car3.model << endl;
    cout << "Release year : " << car3.car_release_year << endl;

     // car-4 input...
    cout << endl << "Enter detail for car 4 : " << endl << endl;
    cout << "Car Id : " ;
    cin >> car1.car_id;
    cout << "Enter Company Name : ";
    cin >> car1.company_name;
    cout << "Car Color : ";
    cin >> car1.color;
    cout << "Model : ";
    cin >> car1.model;
    cout << "Car Release Year : ";
    cin >> car1.car_release_year;

    // car-4 output...
    cout << endl << "Car-4 Information : " << endl;
    cout << "Id           : " << car4.car_id << endl;
    cout << "Company name : " << car4.company_name << endl;
    cout << "Color        : " << car4.color << endl;
    cout << "Model        : " << car4.model << endl;
    cout << "Release year : " << car4.car_release_year << endl;


}