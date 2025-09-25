#include <iostream>
using namespace std;

class CubeX
{
    protected:
        int a, b, c;

};

    class SumY : public CubeX
{
     public:
    // setter
    void setCubeData()
    {
        cout << endl;
        cout << "Enter first Number : ";
        cin >> a;
        cout << "Enter second Number : ";
        cin >> b;
        cout << "Enter third Number : ";
        cin >> c;
    }
    // getter
    void getCubeData()
    {
        int cubeA = a * a * a;
        int cubeB = b * b * b;
        int cubeC = c * c * c;
        int sum = cubeA + cubeB + cubeC;

        cout << endl;
        cout << "Cube of A : " << cubeA << endl;
        cout << "Cube of B : " << cubeB << endl;
        cout << "Cube of C : " << cubeC << endl << endl;
        cout << "===============================" << endl;
        cout << "Sum of Cubes A , B and C is : " << sum << endl;                      
    }
};
