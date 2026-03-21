#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;

bool isEmpty() { return front == NULL; }

void insert(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if (front == NULL || val < front->data)
    { // smaller value = higher priority
        temp->next = front;
        front = temp;
    }
    else
    {
        Node *ptr = front;
        while (ptr->next && ptr->next->data <= val)
            ptr = ptr->next;
        temp->next = ptr->next;
        ptr->next = temp;
    }
    cout << val << " inserted\n";
}

void deleteHighest()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    Node *temp = front;
    cout << front->data << " deleted\n";
    front = front->next;
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
    insert(30);
    insert(10);
    insert(20);
    display();
    deleteHighest();
    display();
    return 0;
}