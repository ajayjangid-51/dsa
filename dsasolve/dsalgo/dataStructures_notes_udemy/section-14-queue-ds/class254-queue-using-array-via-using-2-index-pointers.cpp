//🔥💲🍕 NOw implementing "Queue" using "array" via using 2-index-pointers , so the deqeue-Operation time-complexity is can be reduced from O(n) to O(1).  🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front; // as apn front-index-pointer ko hamesa front-element se phle-wali index pe rkhenge..
    int rear;  //rear-index-pointer ko toh apn rear-element pe hi rkhenge..
    // as apn yeh esliy kr rahe hai , takki apni Queue-Full-condition and Queue-Empty-condition ek dam clear hojayenge.. and mtlb agr apn vase index-pointer nhi krtehh hai toh then toh apn phir Full and Empty-condition clear nhi hogi mtlb exact nhi hogi.
    int *Q;
};
// queue-empty-Condition is that ki

//💲🍕 1.INtialize-Queue 🍕💲
void IntializeQueue(Queue &Q)
{
    cout << "input the size of the Queue that you want to create " << endl;
    cin >> Q.size;
    Q.front = Q.rear = -1;
    Q.Q = new int[Q.size];
}

//💲🍕 2.enqueue-Operation:- 🍕💲
void enqueue(Queue &Q, int value)
{
    if (Q.rear != Q.size - 1)
    {
        Q.rear++;
        Q.Q[Q.rear] = value;
    }
    else
        cout << "Queue-overflow" << endl;
}

//💲🍕 3.dequeue-Operation: 🍕💲
void dequeue(Queue &Q)
{
    if (Q.front != Q.rear)
    {
        Q.front++;
    }
    else
        cout << "Queue is already empty " << endl;
}

//💲🍕 4.frontTop-Operation: 🍕💲
int FrontTop(Queue Q)
{
    if (Q.front != Q.rear)
    {
        return Q.Q[Q.front + 1];
    }
    else
        return -1;
}

//💲🍕 5.IsFull-Operation: 🍕💲
int IsFull(Queue Q)
{
    if (Q.rear == Q.size - 1)
    {
        return 1;
    }
    else
        return -1;
}
//💲🍕 6.IsEmpty-Operation: 🍕💲
int IsEmpty(Queue Q)
{
    if (Q.front == Q.rear)
    {
        return 1;
    }
    else
        return -1;
}

//💲🍕 7.Display-Operation: 🍕💲
void Display(Queue Q)
{
    for (int i = (Q.front + 1); i <= Q.rear; i++)
    {
        cout << Q.Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue Q;
    IntializeQueue(Q);
    enqueue(Q, 34);
    enqueue(Q, 45);
    enqueue(Q, 56);
    cout << " the front-top is " << FrontTop(Q) << endl;
    Display(Q);
    dequeue(Q);
    cout << "the queue is full ? " << IsFull(Q) << endl;
    dequeue(Q);
    cout << "the queue is full ? " << IsFull(Q) << endl;
    //🔔🔔
    // as toh ess array-using-via-2-index-pointers ka yehi "Drawback" hai ki queue-khali hoteh bhi apnko "queue-full" ka message mil raha hai, as toh eska mtlb hai ki apn deleted-elements ka space use nhi kr sktehh hai. toh mtlb apn phir esmeh element bhi insert nhi kr sktehh hai. thus noww aab aage apn yahi "Improvement in Queue-implementation using array via 2-index-pointers " dekhenge..
    🔔🔔
    //🔔🔔 And voh improvements yeh hai ki:
    // improvement-method1:- Resetting-Pointers 🔔🔔
    // improvement-method2:- make it Circular-Queue 🔔🔔

    dequeue(Q);
    dequeue(Q);
    Display(Q);

    return 0;
}