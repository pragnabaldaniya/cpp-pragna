#include <iostream>
using namespace std;

main()
{
    for (int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if (
                
                ((i == 1 || i == 4)&& (j >= 1 && j <= 4))||
                ((i >= 2 && i <= 3)&&(j == 1 || j == 5))||
                ((i == 5 || i == 6 || i == 7) && (j == 1))
            )
            
                {
                    cout << " * ";
                }
                else{
                    cout << "   ";
                }
        }
        cout << endl;
    }
}