#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter Your Size : " ;
    cin >> size;

    vector<int> v(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << "[" << i << "]" << "element : ";
        cin >> v[i];
    }
    cout << endl << "Display vector is : " << endl;

    for (int element : v)
    {
        cout << element << "\t" << endl;
    }
    cout << endl;

    for (int i = 0; i < size / 2; i++)
    {
        int element = v[i];
        v[i] = v[size - i - 1];
        v[size - i - 1] = element;
    }
    cout << endl << "Reverse vector is : ";

    for (int element : v)
        cout << element << " ";

        cout << endl;
}

