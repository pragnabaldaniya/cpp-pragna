#include <iostream>
using namespace std;

class Find
{
protected:
    int value;

public:
    // constactor
    Find()
    {
        cout << "----The Find Area Of Squre----" << endl;
        cout << "Enter any value : ";
        cin >> value;
    }
};

class Squre : public Find
{
public:
    // getter
    void getSqureData()
    {
        int result = value * value;
        cout << endl << "Square of " << value << " is: " << result << endl;
    }
};

class Cube : public Find {
public:
    void getCubeData() {
        int result = value * value * value;
        cout << endl << "Cube of " << value << " is: " << result << endl;
    }
};