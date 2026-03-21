#include <iostream>
using namespace std;
#define SIZE 5
int pq[SIZE], n = 0; // n=number of elements

bool isEmpty() { return n == 0; }
bool isFull() { return n == SIZE; }

void insert(int val)
{
    if (isFull())
    {
        cout << "Queue full\n";
        return;
    }
    int i;
    for (i = n - 1; i >= 0 && pq[i] > val; i--)
        pq[i + 1] = pq[i];
    pq[i + 1] = val;
    n++;
    cout << val << " inserted\n";
}

void deleteHighest()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    cout << pq[0] << " deleted\n"; // smallest element (highest priority)
    for (int i = 1; i < n; i++)
        pq[i - 1] = pq[i];
    n--;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue empty\n";
        return;
    }
    for (int i = 0; i < n; i++)
        cout << pq[i] << " ";
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
    // Total remaining elemets in array
    cout << "\nRamining queue elements are : ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << pq[i] << " ";
    }
    cout << endl
         << endl;
    return 0;
}