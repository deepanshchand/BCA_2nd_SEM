#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *front = NULL;
Node *rear = NULL;

bool isEmpty() { return front == NULL; }

void insertFront(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->prev = NULL;
    temp->next = front;
    if (isEmpty())
    {
        front = rear = temp;
    }
    else
    {
        front->prev = temp;
        front = temp;
    }
}

void insertRear(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = rear;
    if (isEmpty())
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void deleteFront()
{
    if (isEmpty())
    {
        cout << "Deque empty\n";
        return;
    }
    Node *temp = front;
    cout << front->data << " deleted\n";
    front = front->next;
    if (front)
        front->prev = NULL;
    else
        rear = NULL;
    delete temp;
}

void deleteRear()
{
    if (isEmpty())
    {
        cout << "Deque empty\n";
        return;
    }
    Node *temp = rear;
    cout << rear->data << " deleted\n";
    rear = rear->prev;
    if (rear)
        rear->next = NULL;
    else
        front = NULL;
    delete temp;
}

void display()
{
    if (isEmpty())
    {
        cout << "Deque empty\n";
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
    insertRear(10);
    insertRear(20);
    insertFront(5);
    display();
    deleteFront();
    display();
    deleteRear();
    display();
    return 0;
}