#include <iostream>
#include <vector>
using namespace std;

// Function declaration
void marge(vector<int> &a, int start, int middle, int end);

// Divide finction logic
void margeSort (vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int middle = (start + end) / 2;

        margeSort (a, start, middle); //left
        margeSort (a, middle + 1, end); //right

        marge (a, start, middle, end); // <--sort and combine k liye
    }
}

// marge function
void marge (vector<int> &a, int start, int middle, int end)
{
    int i = start;
    int j = middle + 1;

    vector<int> temp;

    while (i <= middle && j <= end)
    {
        if (a [i] <= a [j])
        {
            temp.push_back (a[i]);
            i++;
        }
        else{
            temp.push_back (a[j]);
            j++;
        }
    }

    while(i <= middle)
    {
        temp.push_back (a[i]);
        i++;
    }

    while(j <= end)
    {
        temp.push_back (a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    a [i + start] = temp [i];
}


int main()
{
    int n;
    cout << "Enter number of element : ";
    cin >> n;

    vector<int> a;

    cout << "---Array Input---" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a [" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }
    cout << endl;

    cout << "--Array Output--" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a [i] << " ";
    }
    cout << endl;

    margeSort(a, 0 , n-1);

    cout << endl << "---Sorted Marge element---" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a [i] << " ";
    }
}