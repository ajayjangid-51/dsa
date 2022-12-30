//🔥💲🍕 Now aab apn "Queue"-data-strucuture ko Linked-list se implement krenge.. 🍕💲🔥
//🔔🔔 As linked-list se implement krne meh as like as "array" ki koi lafdaa nhi hai. 🔔🔔

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;

    Node *next = NULL;
};
struct Queue
{
    Node *rear = NULL;
    Node *front = NULL;
};

void enqueue(Queue Q, int value)
{
    Node *t = new Node;
    if (t != NULL)
    {
        t->data = value;
        t->next = Q.rear;
        Q.rear = t;
    }
    else
        cout << "Queue is Full" << endl;
}

main()
{
    // Node n;
    IntializeQueue(21);

    return 0;
}