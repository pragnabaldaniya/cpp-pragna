#include <iostream>
using namespace std;

//logic
int linear_searching (int a[], int size)
{
    int search_target;
    cout << endl << endl << "Enter any target : "; // particular element select
    cin >> search_target;

    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if(search_target == a[i])
        {
            index = i;
            break; // loop stop
        }
    }
    return index;
}

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a [size];
    cout << endl << "---Array Input---" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a [" << i << "] : ";
        cin >> a [i];
    }

    cout << endl << "Array is...." << endl;
    for (int element : a) // for each loop
    {
        cout << element << " ";
    }

    // function call
    int index = linear_searching (a, size);

    if(index == -1)
    {
        cout << endl << "Element not found..." << endl;
    }
    else{
        cout << endl << "Searching element index : " << index << endl << endl;
    }
}