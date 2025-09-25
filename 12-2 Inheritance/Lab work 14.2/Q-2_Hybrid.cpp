#include <iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
        void setA()
        {
            cout << "Enter your A : ";
            cin >> a;
        }

        void getA()
        {
            cout << endl << "A\t : " << this -> a << endl;
        }
};
class B : public A
{
    protected:
        int b;
    public:
        void setB()
        {
            cout << "Enter your B : ";
            cin >> b;
        }

        void getB()
        {
            cout << endl << "B\t : " << this -> b << endl;
        }
};
class C : public A
{
    protected:
        int c;
    public:
        void setC()
        {
            cout << "Enter your C : ";
            cin >> c;
        }

        void getC()
        {
            cout << endl << "C\t : " << this -> c << endl;
        }
};
class D : public C, public B
{
    protected:
        int d;
    public:
        void setD()
        {
            cout << "Enter your D : ";
            cin >> d;
        }

        void getD()
        {
            cout << endl << "D\t : " << this -> d << endl;
        }

        void sum()
        {
            cout << "Sum : " << B::a + b + c + d;
        }
};