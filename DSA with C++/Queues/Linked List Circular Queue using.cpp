#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;
Node *rear = NULL;

bool isEmpty() { return front == NULL; }

void enqueue(int val)
{
    Node *temp = new Node();
    temp->data = val;
    if (front == NULL)
    {
        front = rear = temp;
        rear->next = front; // circular
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front;
    }
    cout << val << " inserted\n";
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    if (front == rear)
    { // only one node
        cout << front->data << " deleted\n";
        delete front;
        front = rear = NULL;
    }
    else
    {
        Node *temp = front;
        cout << front->data << " deleted\n";
        front = front->next;
        rear->next = front;
        delete temp;
    }
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    Node *temp = front;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}