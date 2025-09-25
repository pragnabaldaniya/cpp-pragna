#include <iostream>
#include <string.h>
using namespace std;

class City
{
private:
    string cityName;
    int pincode;


public:
    // Default constructor
    City()
    {
        cout << endl << "Welcomem My City" << endl;
        this -> cityName = "Navsari";
        this -> pincode = 395010;

        getCityData();

        cout << endl << endl;
    }

    // parameterized constructor
    City(string cityName, int pincode)
    {
        this -> cityName = cityName;
        this -> pincode = pincode;
    }

    void getCityData()
    {
        cout << "City Name : " << this -> cityName << endl;
        cout << "Pincode   : " << this -> pincode << endl;
    }
};
    int main()
    {
        City c1("Surat", 395010);
        City c2;

        c1.getCityData();
    }