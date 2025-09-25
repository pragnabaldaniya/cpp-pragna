#include <iostream>
using namespace std;

main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "1" ;
        }

        if(i != 5){
            cout << ",";
        }
         
    }
   
}