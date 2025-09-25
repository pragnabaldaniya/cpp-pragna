#include "Crud_operation.cpp"

int main()
{
    Collection c1;

    int choice, index, element;

    do
    {
        c1.display();
        cout << "Enter Your Choice" << endl;
        cin >> choice;

        switch (choice)
        {
            // 1 addData
        case 1:
            cout << "Enter element : ";
            cin >> element;
            c1.addDataElement(element);
            break;

        // 2 getData
        case 2:
            cout << "Display elements" << endl;
            c1.getDataElements();
            break;

        // 3 updatDataelement
        case 3:
            cout << "Enter your index : ";
            cin >> index;
            cout << "Enter your element : ";
            cin >> element;
            c1.updateDataElement(index, element);
            break;

        // 4  deleteDataelement
        case 4:
            cout << "Enter your index : ";
            cin >> index;

            c1.deleteDataElement(index);
            break;

            // 5 exit
        case 5:
            cout << "Exit...." << endl;
            break;
        
        default:
            cout << "Invalid Choice...." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
