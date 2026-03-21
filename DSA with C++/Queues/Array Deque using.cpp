#include <iostream>
using namespace std;
#define SIZE 5
int dq[SIZE], front = -1, rear = -1;

bool isEmpty() { return front == -1; }
bool isFull() { return (front == 0 && rear == SIZE - 1) || (front == rear + 1); }

void insertFront(int val)
{
    if (isFull())
    {
        cout << "Deque full\n";
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else if (front == 0)
        front = SIZE - 1;
    else
        front--;
    dq[front] = val;
}

void insertRear(int val)
{
    if (isFull())
    {
        cout << "Deque full\n";
        return;
    }
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % SIZE;
    dq[rear] = val;
}

void deleteFront()
{
    if (isEmpty())
    {
        cout << "Deque empty\n";
        return;
    }
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void deleteRear()
{
    if (isEmpty())
    {
        cout << "Deque empty\n";
        return;
    }
    if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = SIZE - 1;
    else
        rear--;
}

void display()
{
    if (isEmpty())
    {
        cout << "Deque empty\n";
        return;
    }
    int i = front;
    while (true)
    {
        cout << dq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
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

    // Total remaining elemets in array
    cout << endl
         << "Remaining elements are : ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl
         << "\n";

    return 0;
}