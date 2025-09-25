#include <iostream>
using namespace std;

template <typename T>
class Collection
{
private:
    int size;
    int index = 0;
    T *arr;

public:
    // constructor
    Collection(int size)
    {
        this -> size = size;
        arr = new T [this -> size];

        if (arr != nullptr)
        {
            cout << "Array is allocated..." << endl;
        }
    }
    //destructor
    ~Collection()
    {
        delete[] arr;
        // delete size;

        arr = nullptr;
        // size = nullptr;

        
        // if (arr == nullptr)
        // {
        //     cout << "Array is deallocated..." << endl;
        // }
    }

    void insertElement(int index, T value)
    {
        if (index >= 0 && index < this->size)
        {
            arr[index] = value;
        }
    }

    void push(T value)
    {
        if (index >= 0 && index < this-> size)
        {
            arr[index] = value;
            index++;
        }
    }

    void fetchCollection()
    {
        cout << "Collection element : " << endl;
        for (int i = 0; i < this->size; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    Collection<int> intCollection(5);

    // intCollection.insertElement(0, 10);
    // intCollection.insertElement(1, 20);
    // intCollection.insertElement(2, 30);
    // intCollection.insertElement(3, 40);
    // intCollection.insertElement(4, 50);

    intCollection.push(11);
    intCollection.push(22);
    intCollection.push(33);
    intCollection.push(44);
    intCollection.push(55);

    
    intCollection.fetchCollection();

    cout << "------------------------" << endl;
    Collection<char> name(6);

    name.push('P');
    name.push('R');
    name.push('A');
    name.push('G');
    name.push('N');
    name.push('A');

    name.fetchCollection();

     cout << "------------------------" << endl;
    Collection<double> marks(3);

    marks.push(80.23);
    marks.push(90.22);
    marks.push(93.45);

    marks.fetchCollection();

    return 0;
}