#include <iostream>
using namespace std;

main()
{
    // 1D Array : datatype arrayname[size]
    // Datatype arrayname[size] = {elements};

    // static array                                                                

    //int array[5];
    int array[5] = {10, 20, 30, 40, 50};

    // array[0] = 10;
    // array[1] = 20;
    // array[2] = 30;
    // array[3] = 40;
    // array[4] = 50;

    for(int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }

    
}