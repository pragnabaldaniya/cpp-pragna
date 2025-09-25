#include <iostream>
using namespace std;

int main()
{
    int size;
    int *arr;

    cout << "Enter arrary size : ";
    cin >> size;

    arr = new int [size];

    if(arr == nullptr)
    {
        cout <<"Memory allocation failed...";
        return 1;
    }
    cout << endl << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
        sum += arr[i];
    }
    cout << endl << "Sum of elements : " << sum << endl;

    delete[] arr;
    arr = nullptr;

    if(arr != nullptr)
    {
        cout << "Memory deallocation failed...";
    }
}