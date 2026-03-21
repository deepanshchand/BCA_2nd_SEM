#include <iostream>
using namespace std;
#define SIZE 5
int cq[SIZE], front = -1, rear = -1;

bool isEmpty() { return front == -1; }
bool isFull() { return (front == (rear + 1) % SIZE); }

void enqueue(int val)
{
    if (isFull())
    {
        cout << "Queue full\n";
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = val;
    cout << val << " inserted\n";
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    cout << cq[front] << " deleted\n";
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    int i = front;
    while (true)
    {
        cout << cq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();

    // Total remaining elemets in array
    cout << endl
         << "Remaining elements are : ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << cq[i] << " ";
    }
    cout << endl
         << "\n";
    return 0;
}