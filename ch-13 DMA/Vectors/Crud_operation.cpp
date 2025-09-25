#include <iostream>
using namespace std;
#include <vector>

class Collection
{
    vector<int> v;

public:
    // 1 add data
    void addDataElement(int element)
    {
        v.push_back(element);
    }

    // 2 get data
    void getDataElements()
    {
        if (v.empty() == 0)
        {
            cout << "Displaying Vector is : ";
            for (int element : v)
            {
                cout << element << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No data found..." << endl;
        }
    }

    // 3 updat data element
    void updateDataElement(int index, int element)
    {
        if (index >= 0 && index < v.size())
        {
            v[index] = element;
        }
        else
        {
            cout << "Invalid Choice...." << endl;
        }
    }

    // 4 delete data element
    void deleteDataElement(int index)
    {
        if (index >= 0 && index < v.size())
        {
            v.erase(v.begin() + index);
        }
        else
        {
            cout << "Invalid Index...." << endl;
        }
    }
    void display()
    {
        cout << "Press 1 for Insert element" << endl;
        cout << "Press 2 for Fetch element" << endl;
        cout << "Press 3 for Update element" << endl;
        cout << "Press 4 for Delete element" << endl;
        cout << "Press 5 for Exit" << endl;
    }
};
