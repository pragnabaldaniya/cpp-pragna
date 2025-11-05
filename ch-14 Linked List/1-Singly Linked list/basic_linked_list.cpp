#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    // frist node
    Node *HEAD = new Node();
    HEAD -> data = 10;
    HEAD -> next = nullptr;

    // second node
    Node *n2 = new Node();
    n2 -> data = 22;
    n2 -> next = nullptr;
    HEAD -> next = n2;

    // third node
    Node *n3 = new Node();
    n3 -> data = 35;
    n3 -> next = nullptr;
    HEAD -> next = n3;

    cout << "Data is : " << HEAD -> data << endl;
    cout << "Address is : " << HEAD -> next << endl;

    cout << endl << "Data is : " << n2 -> data << endl;
    cout << "Address is : " << n2 -> next << endl;

    cout << endl << "Data is : " << n3 -> data << endl;
    cout << "Address is : " << n3 -> next << endl;
}