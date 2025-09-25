#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter any row element : ";
    cin >> row;
    cout << "Enter ant col element : ";
    cin >> col;

    vector <int> v (col);

    //2D vector
    vector <vector<int>> matrix (row, v);

    cout << endl
         << "-----Input Elements-----" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Your Matrix element ["<< i << "] [" << j << "] : ";
            cin >> matrix[i] [j];
        }
        cout << endl;
    }

    cout << endl
         << "-----Output Elements-----" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout << matrix[i] [j] << " ";
        }
        cout << endl;
    }

    // Diagonal element
    cout << endl << endl
            << "---Diagonal element---" << endl;
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  "; 
            }
        }
    cout << endl;
    }

    

    
}