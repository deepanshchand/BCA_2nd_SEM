#include <iostream>
using namespace std;

#define SIZE 5 // Queue size

int queue[SIZE];
int front = -1, rear = -1;

// Check if queue is empty
bool isEmpty()
{
    return (front == -1 || front > rear);
}

// Check if queue is full
bool isFull()
{
    return (rear == SIZE - 1);
}

// Enqueue operation
void enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue is full! Cannot insert " << value << endl;
        return;
    }
    if (front == -1)
        front = 0; // first element
    rear++;
    queue[rear] = value;
    cout << value << " inserted into queue." << endl;
}

// Dequeue operation
void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty! Cannot delete." << endl;
        return;
    }
    cout << queue[front] << " deleted from queue." << endl;
    front++;
}

// Display queue
void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
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

    enqueue(40);
    enqueue(50);
    enqueue(60); // Queue full
    display();

    // Total remaining elemets in array
    cout << "\nRamining queue elements are : ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl
         << endl;
    return 0;
}