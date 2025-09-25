#include <iostream>
#include <string.h>
using namespace std;

// tish keyword
class User
{
    // Attributes
private :
     int id;
     char userName[20];
     string email;
     char password[20];

public :
     //setter
    void setUserData(int id, char userName[], string email, char password[])
    {
        this -> id = id;
        strcpy (this -> userName, userName);
        this -> email = email;
        strcpy (this -> password, password);
    }

    //getter
    void getUserData()
    {
        cout << "User Id\t\t : " << id << endl;
        cout << "User Name\t : " << userName << endl;
        cout << "User Email\t : " << email << endl;
        cout << "User Password\t : " << password << endl;
    }

};