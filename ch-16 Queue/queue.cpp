#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    // Cousturctor
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    // desturctor
    ~Queue()
    {
        delete[] arr;
    }

    // mathod
    void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is overflow..." << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->count++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
        }
    }

    void dequeue()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << endl
                 << "Queue is underflow..." << endl;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->capacity--;
        }
        else
        {
            this->front++;
        }
    }

    void get_front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Front : " << this->arr[this->front];
        }
    }

    void get_rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Rear : " << this->arr[this->rear];
        }
    }

    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty..." << endl;
        }
        else
        {
            cout << endl;
            for (int i = this->front; i <= this->rear; i++)
            {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

    void isEmpty()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is Empty..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not Empty..." << endl;
        }
    }

    void isFull()
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is Full..." << endl;
        }
        else
        {
            cout << endl
                 << "Queue is not Full..." << endl;
        }
    }

    int size()
    {
        return this->count;
    }
};

int main()
{
    int size;
    cout << "Eneter number of element : ";
    cin >> size;

    Queue queue(size);

    int choice;
    int element;

    do
    {
        cout << endl
             << "Press 1 for enqueue operation" << endl;
        cout << "Press 2 for dequeue operation" << endl;
        cout << "Press 3 for front operation" << endl;
        cout << "Press 4 for rear operation" << endl;
        cout << "Press 5 for display operation" << endl;
        cout << "Press 6 for isEmpty operation" << endl;
        cout << "Press 7 for isFull operation" << endl;
        cout << "Press 8 for size operation" << endl;
        cout << "Press 0 for Exit..." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter your element :";
            cin >> element;
            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.get_front();
            break;

        case 4:
            queue.get_rear();
            break;

        case 5:
            queue.display();
            break;

        case 6:
            queue.isEmpty();
            break;

        case 7:
            queue.isFull();
            break;

        case 8:
            cout << endl
                 << "Queue Length : " << queue.size() << endl;
            break;

        case 0:
            cout << endl
                 << "Exit... " << endl;
            break;

        default:
            cout << endl
                 << "Invalid choice..." << endl;
            break;
        }
    } while (choice != 0);
}
