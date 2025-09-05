#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
private:
    int id;
    char name[20];
    
    char rating[20];
    char location[20];
    int establish_year;
    int staff_quantity;
    int room_quantity;

public:
    static char type[20];

// setter
    void setHotelData()
    {
        cout << endl;
        cout << "Enter your Id : ";
        cin >> this -> id;
        fflush(stdin);
        cout << "Enter your Name : ";
        gets (this -> name);
        // cout << "Enter your Hotel type : ";
        // cin >> this -> type;
        fflush(stdin);
        cout << "Enter your Rating : ";
        gets (this -> rating);
        fflush(stdin);
        cout << "Enter your Location : ";
        gets (this -> location);
        cout << "Enter of Year : ";
        cin >> establish_year;
        cout << "Enter Stsff Quantity : ";
        cin >> staff_quantity;
        cout << "Enter Room Quantity : ";
        cin >> room_quantity;
    }

// getter 
    void getHotelData()
    {
        cout << endl;
        cout << "Id\t\t : " << this -> id << endl;
        cout << "Name\t\t : " << this -> name << endl;
        cout << "Type\t\t : " << this -> type << endl;
        cout << "Rating\t\t : " << this -> rating << endl;
        cout << "Location\t : " << this -> location << endl;
        cout << "Staff Quantity\t : " << this -> staff_quantity << endl;
        cout << "Room Quantity\t : " << this -> room_quantity << endl;
    }

    static void displayData ()
    {
        cout << "type : " << type << endl;
    }

};
    char Hotel :: type[20] = "Motel";