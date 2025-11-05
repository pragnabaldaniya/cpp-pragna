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
    HEAD -> data = 22;
    HEAD -> next = nullptr;

    // second node
    Node *current = new Node();
    current -> data = 30;
    current -> next = nullptr;
    HEAD -> next = current;

    // third node
    current = new Node();
    current -> data = 40;
    current -> next = nullptr;
    HEAD -> next -> next = current;

    
    // four node
    current = new Node();
    current -> data = 50;
    current -> next = nullptr;
    HEAD -> next -> next -> next = current;

   
    // Print all nodes
   
    Node *ptr = HEAD;

    while (ptr != nullptr)
    {
        cout << ptr->data << "\t";
        ptr = ptr->next;
    }
    
}