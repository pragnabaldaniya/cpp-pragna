#include <iostream>
using namespace std;

class ABC
{
protected:
     int num;
   

public:

    void setABCData()
    {
        cout << "Enter any Number : ";
        cin >> this -> num;
    }

    void getABCData()
    {
        cout << endl << "Number : " << this -> num << endl;
    }

    // Binary opretor

    ABC operator+(ABC obj)
    {
        ABC tmp;

        tmp.num = this -> num + obj.num;
        return tmp;
    }
};

int main()
{
    ABC a1, a2, a3;

    a1.setABCData();
    a2.setABCData();

       a3 = a1 + a2;

    a1.getABCData();
    a2.getABCData();
    a3.getABCData();

 
}
