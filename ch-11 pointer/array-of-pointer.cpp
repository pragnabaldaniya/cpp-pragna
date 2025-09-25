#include <iostream>
using namespace std;

int main()
{
    int a [5] = {10, 20, 30, 40, 50};

    int *ptr [5];

    for (int i = 0; i < 5; i++)
    {
        ptr [i] = &a [i];
    }
    for (int i = 0; i < 5; i++)
    {
<<<<<<< HEAD
        // printf ("%u\t", &a[i]);

        // printf ("%u\t", *ptr[i]);

        cout << *ptr[i] << "\t";
=======
        printf ("%u\t", &a[i]);

        // printf ("%u\t", *ptr[i]);

        // cout << *ptr[i] << "\t";
>>>>>>> 83b0f476f9caea12e50b281610414b63e0279d4d
    }
}