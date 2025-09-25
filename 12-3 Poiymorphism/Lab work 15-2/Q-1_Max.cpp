#include <iostream>
using namespace std;

class Max
{
    private:
        int value;

    public:
        void setValue()
        {
            cout << "Enter any Value : ";
            cin >> value;
        }

        void getValue()
        {
            cout << endl << "Max Number is : " << this -> value << endl;
        }

        Max operator>(Max obj)
         {
            Max tmp;
                if (this->value > obj.value)
                tmp.value = this->value;
            else
                tmp.value = obj.value;
            return tmp;
        }
    };



