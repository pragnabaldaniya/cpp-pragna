#include <iostream>
using namespace std;

class Shape
{
    protected:
        int width, height;

    public:
        //  constractor
        Shape()
        {
            cout << "Enter any width : ";
            cin >> width;
            cout << "Enter any height : ";
            cin >> height;

        }
};

// Triangle formulah
class triangle : public Shape
{
public:
    void area()
    {
        int result = 0.5 * width * height;
        cout << endl << "Area of Triangle is: " << result << endl;
    }
};

// Rectangle formulah
class rectangle : public Shape
{
public:
    void area()
    {
        int result = width * height;
        cout << endl << "Area of Rectangle is: " << result << endl;
    }
};