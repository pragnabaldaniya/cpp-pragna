#include <iostream>
using namespace std;

int main()
{
   
    int a [0];

    int *ptr = &a[0];

    // printf ("%u\n", *ptr);
    // printf ("%u\n",*(ptr + 1));

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << "\t" ;
    }
}