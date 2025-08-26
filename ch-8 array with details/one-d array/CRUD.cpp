#include <iostream>
using namespace std;

main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];
    cout << "Array Input" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a["<< i << "] : ";
        cin >> a[i];
    }

    cout << system("cls");
    cout << endl << "CRUD Opertion" << endl;

    int n;
   
    do{
        cout << "Press 1 for Insert" << endl;
        cout << "Press 2 for Push" << endl;
        cout << "Press 3 for Fetch" << endl;
        cout << "Press 4 for Update" << endl;
        cout << "Press 5 for Delete" << endl;
        cout << "Press 6 for Pop" << endl;
        cout << "Press 0 for Exit" << endl;

         cin >> n;
        switch (n)
        {
            case 1 :
            system ("cls");
            cout << endl << "INSERT" << endl ;
            break;

            int pos, element;
            cout << "Enter your index :";
            cin >> pos;
            cout << "Enter new element :";
            cin >> element;
            for (int i = size - 1; i >= pos; i--)
            {
                if(pos < size && pos >= 0)
                {
                a[i + 1] = a[i];
                a[pos = element];
                size++;
                }
            }

            case 2 :
            system ("cls");
            cout << endl << "PUSH" << endl;
            break;

            case 3 :
            system ("cls");
            cout << endl << "FETCH" << endl;
            break;

            for(int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }

            case 4 :
            system ("cls");
            cout << endl << "UPDATE" << endl;
            break;

            case 5 :
            system ("cls");
            cout << endl << "DELETE" << endl;
            break;

            case 6 :
            system ("cls");
            cout << endl << "POP" << endl;
            break;

            case 0 :
            system ("cls");
            cout << endl << "EXIT" << endl;
            break;
            
            default :
            system ("cls");
            cout << endl <<"INVALID CHOICE" << endl;
            break;
        }
    }while (n != 0);
}