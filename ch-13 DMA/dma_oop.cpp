#include <iostream>
using namespace std;

class DMA
{
private:
    int size;
    int *arr;

public:
    // Constuctor
    DMA(int size)
    {
        this -> size = size;
        arr = new int [this -> size];
        if(arr == nullptr)
            cout << "Memory allocation failed..." << endl;
        else
            cout << "Memory allocation successfully..." << endl;
    }

    // Desturctor
    ~DMA()
    {
        delete[]arr;
        arr = nullptr;
        if(arr != nullptr)
            cout << endl << "Memory deallocation failed..." << endl << endl;
    }

private:
    bool indexCheck(int index)
    {
        return (index >= 0 && index < this -> size);
    }

public:
   void insert(int index, int value)
    {
        if(indexCheck(index))
            arr[index] = value;
        else
            cout << endl << "Index is wrong..." << endl;
    }

    void getValue(int index)
    {
        if(indexCheck(index))
            cout << "Element is : " << arr[index] << endl;
        else
            cout << endl << "Index is wrong" << endl;
    }
};

int main()
{
    DMA d1(5);

    d1.insert(0, 22);
    d1.insert(1, 11);
    d1.insert(2, 44);
    d1.insert(3, 55);

    d1.getValue(5);
}