#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

// Push
void push(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    cout << x << " inserted\n";
}

// Pop
void pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow\n";
        return;
    }
    Node *temp = top;
    cout << temp->data << " deleted\n";
    top = top->next;
    delete temp;
}

// Peek
void peek()
{
    if (top == NULL)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Top element: " << top->data << endl;
    }
}

int main()
{
    push(10);
    push(20);

    peek();

    pop();
    peek();
}