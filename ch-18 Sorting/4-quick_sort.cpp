#include <iostream>
#include <vector>
using namespace std;

int quickPartition (vector<int> &a, int start, int end)
{
    int i = start - 1;
    int pivot = a[end];

    for (int j = start; j < end; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap (a[j], a[i]);
        }
        
    }
        i++;
        swap (a[end], a[i]);
        return i;

}

void quicksort (vector<int> &a, int start, int end )
{
    if (start < end)
    {
        int pivotindex = quickPartition (a, start, end);
        quicksort (a, start, pivotindex - 1); // left
        quicksort (a, pivotindex + 1, end); // right
    }
}


int main()
{
    int n;
    cout << "Enter number of element : ";
    cin >> n;

    vector <int> a;

    cout << "---Array Input--- ";
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a [" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << "Array Output : ";
    for(int e : a)
    {
        cout << e << " " ;
    }

    quicksort (a, 0, n - 1);

    cout << endl << endl;
    cout << "Sorted Array : ";
        for(int e : a)
    {
        cout << e << " " ;
    }
}
