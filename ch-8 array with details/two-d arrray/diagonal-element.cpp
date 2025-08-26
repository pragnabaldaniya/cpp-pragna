#include <iostream>
using namespace std;

main()
{
    int row, col;

    cout <<" Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> col;

    int a [row] [col];

    cout << endl << endl << "Array Input" << endl << endl ;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Enter a ["<< i <<"] ["<< j <<"] : ";
            cin >> a [i] [j];
        }
        cout << endl;
    }

    
    cout << endl << endl << "Array Output" << endl << endl ;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == j)
            cout << a [i] [j] << "\t";
             else{
            cout << "\t";
            }
        }
       
        cout << endl;
    }
    
        
        
}