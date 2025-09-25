#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Temp
{
    private:
    //data members == attributes
    T1 a;
    T2 b;

    public:
    //constructor
    Temp(T1 a, T2 b)
    {
        this -> a = a;
        this -> b = b;
    }

    void getData()
    {
        cout << "A : " << this -> a << endl;
        cout << "B : " << this -> b << endl;
    }

};

int main()
{
    Temp<int, double> t1(22, 10.25);
    
    t1.getData();

    return 0;
}