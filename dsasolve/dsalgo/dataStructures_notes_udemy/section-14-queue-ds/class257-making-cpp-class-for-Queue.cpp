//🔥💲🍕 AS toh aab apn Queue-data-strucuture ko "Class" se banayenge:- 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue(int size)
    {
        this.size = size;
        Q = new int[size];
        front = rear = -1;
    };
    enqueue(int value)
    {
        if (rear != size - 1)
        {
            rear++;
            Q[rear] = value;
        }
        else
        {
            cout << " Queue Overflow" << endl;
        }
    };
    dequeue(){

    };
    QueueFront(){};
    IsFull();
    IsEmpty();
    Display();
};
int main()
{
    Queue Q(5);

    return 0;
}