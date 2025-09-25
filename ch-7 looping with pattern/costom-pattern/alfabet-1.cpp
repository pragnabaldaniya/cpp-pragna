#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(
                (i >= 2 && i <= 4) && (j == 1 || j == 5)||

                (i == 1 && (j >= 2 && j <= 4))||
                (i == 5 && (j % 2 != 0))||
                (i == 6 && (j == 1 || j == 4))||
                (i == 7 && (j == 2 || j == 3 || j == 5))
            ){
                cout << " * ";
            }
            else{
                cout << " " ;
            }
        }
     cout << endl;
    }
}