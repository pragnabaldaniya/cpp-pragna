#include <iostream>
using namespace std;

// logic loop
int binray_search(int a[], int n, int target)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        int middle = start + (end - start) / 2;

        if(target < a [middle])
        {
            end = middle -1;
        }
        else if(target > a [middle])
        {
            start = middle + 1;
        }
        else{
            return middle;
        }
    }
    return -1;
}

int main()
{
    int n;

    cout << "Enter number of elements : ";
    cin >> n;

    int a [n];

    cout << endl << "---Array Input---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a [" << i << "] : " ;
        cin >> a[i];
    }

    cout << endl << "Array is...." << endl;
    for (int element : a) // for each loop
    {
        cout << element << " ";
    }

    int target;
    cout << endl << endl << "Enter target number : ";
    cin >> target; 
    
    // function call
    int index = binray_search (a, n, target);

    if(index == -1)
    {
        cout << endl << "Element not found..." << endl;
    }
    else{
        cout << endl << "Searching element index : " << index << endl << endl;
    }
}