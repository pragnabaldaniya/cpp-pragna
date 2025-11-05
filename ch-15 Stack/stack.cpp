#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    //constructor
    Stack (int size)
    {
        this -> size = size;
        this -> arr = new int [size];
        this -> top = -1;
        this -> len = 0;
    }

    //distructor
    ~Stack()
    {
        delete[] arr;
    }

    //mathod

    void push (int element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else{
            this -> top++;
            this -> arr[this -> top] = element;
            this -> len++;
        }
    }

    void pop ()
    {
        if (this -> top == -1)
        {
            cout << "Stack is underflow..." << endl;
        }
        else{
            this -> top--;
            this -> len--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack id empty... " << endl;
        }
        else{
            cout << this -> arr [this -> top];
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty..." << endl;
        }
        else{
            for(int i = this->top; i >= 0; i--)
            {
                cout << this -> arr[i] << "  ";
            }
        }
        cout << endl;
    }

    bool isEmpty()
    {
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    void isFull()
    {
        (this -> top == this -> size -1)
            ? cout << "Stack is Full... "<< endl
            : cout << "Stack is not Full... " << endl;
    }

    void length()
    {
        cout << "Length : " << this -> len  << endl;
    }

};


int main()
{
    int size;

    cout << "Enter your size : ";
    cin >> size;

    Stack stack(size);
    int choice, element;

   do{
        cout << "Press 1 for push operation" << endl;
        cout << "Press 2 for pop operation" << endl;
        cout << "Press 3 for peek operation" << endl;
        cout << "Press 4 for display operation" << endl;
        cout << "Press 5 for is Empty operation" << endl;
        cout << "Press 6 for is Full operation" << endl;
        cout << "Press 7 for size(length) operation" << endl;
        cout << "Press 0 for ...Exit...." << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter element : ";
                cin >> element;
                stack.push(element);
                cout << endl;
            break;

            case 2:
                stack.pop();
                cout << endl;
            break;

            case 3:
                stack.peek();
                 cout << endl;
            break;

            case 4:
                stack.display();
                 cout << endl;
            break;

            case 5:
                stack.isEmpty();
                 cout << endl;
            break;

            case 6:
                stack.isFull();
                 cout << endl;
            break;

            case 7:
                stack.length();
                 cout << endl;
            break;

            case 0:
                cout << "Exit....";
                 cout << endl;
            break;

            default:
                cout << "Invalid choice...." << endl;
            break;
        
        }
    }while (choice != 0);
 
   
}