#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    vector <int> array (size);

    cout << endl << "--Input Vector is--" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> array[i];
    }

    cout << endl << "--Output Vector is--" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    //Smallest logic...
    cout << endl << "--Smallest element is--" << endl;
    for (int i = 1; i < size - 1; i++)
    {
        if (array[i] < array[i - 1] && array[i] < array[i + 1])
        {
            cout << array[i] << " ";
        }
    }

    //Largest logic...
    cout << endl << "--Largest element is--" << endl;
    for (int i = 1; i < size - 1; i++)
    {
        if (array[i] > array[i - 1] && array[i] > array[i + 1])
        {
            cout << array[i] << " ";
        }
    }
}