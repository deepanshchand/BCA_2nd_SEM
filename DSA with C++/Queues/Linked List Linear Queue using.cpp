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
    temp->next = NULL;
    if (rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
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
    Node *temp = front;
    cout << front->data << " deleted\n";
    front = front->next;
    if (front == NULL)
        rear = NULL;
    delete temp;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    Node *temp = front;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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