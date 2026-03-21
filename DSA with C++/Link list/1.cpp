#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = nullptr; // empty list
    Node *first = new Node();
    first->data = 10;
    first->next = nullptr;
    head = first; // head points to first node

    cout << "First node data: " << head->data << endl;
    return 0;
}