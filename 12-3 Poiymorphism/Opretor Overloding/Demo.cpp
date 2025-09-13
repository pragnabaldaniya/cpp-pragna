#include <iostream>
using namespace std;

class Demo
{
    private:
    int n;

    public:
        void setDemoData()
        {
            cout << "Enter any Number : ";
            cin >> this -> n;
        }

        void getDemoData()
        {
            cout << "N\t : " << this -> n << endl;
        }
    
        Demo operator++(int val)
        {
            Demo tmp;
            tmp.n = this -> n + 1;
            return tmp;
        }
        
};

int main()
{
    Demo d1, d2;

    d1.setDemoData();
    d2 = d1++;

    d1.getDemoData();
    d2.getDemoData();
}