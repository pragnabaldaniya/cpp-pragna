#include <iostream>
using namespace std;

class Maths
{
public:
    void Arithmetic(int a, int b)
    {
        cout << "Division Result : " << a << " / " << b << " = " << a / b << endl;
    }

    void Arithmetic(int a, int b, int c)
    {
        cout << "Subtraction Result : " << a << " - " << b << " - " << c << " = " << a - b - c << endl;
    }
    
    
    void Arithmetic(int a, int b, int c, int d)
    {
        cout << "Muiltplication Result : " << a << " * " << b << " * " << c << " * " << d << " = " << a * b * c * d << endl;
    }

    void Arithmetic(int a, int b, int c, int d, int e)
    {
        cout << "Addition Result : " << a << " + " << b << " + " << c << " + " << d << " + " << e << " = " << a + b + c + d + e << endl;
    }
};