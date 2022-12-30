//🔥💲🍕 As toh NOW apn "Queue" ko implement kregne using "array" via taking only 1-index-pointer(mtlb rear-index-pointer ) 🍕💲🔥
// mtlb taking only 1-index-pointer and that is rear-element-pointer:-
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int rear;
    int *Q;
};
void IntializeQueue(Queue *Qe)
{
    cout << "input the size of queue that you wanted to create" << endl;
    cin >> Qe->size;
    Qe->Q = new int[Qe->size];
    Qe->rear = -1;
}
//💲🍕 1.Enqueue-Operation: mtlb apn inputed-value ko queue meh insert krna from the rear-side.(as rear-side mtlb inserting-side of queue. as q ki mtlb queue meh 2-side hoti hai na isiliy..) 🍕💲
void enqueue(Queue &Q, int value)
{
    // as insertion meh apnko yeh dhyn rkhna hota hai ki container khali toh hai na... , toh apn phle check krenge ki container khali toh hai na.. mtlb bhara huaa toh nhi hai..na.
    if (Q.rear != (Q.size - 1))
    {
        Q.rear++;
        Q.Q[Q.rear] = value;
        cout << value << " is succesfully enqueued " << endl;
    }
    else
    {
        cout << "Sorry , Queue overflow" << endl;
    }
}

//💲🍕 2."dequeue"-Operation: 🍕💲
int dequeue(Queue &Q)
{
    int x = -1;
    if (Q.rear != -1)
    {
        x = Q.Q[0];
        int i = 0, length = Q.rear;
        Q.rear--;
        while (length--)
        {

            Q.Q[i] = Q.Q[i + 1];
            i++;
        }
        cout << x << " is succesfully dequeued " << endl;
    }
    else
    {
        cout << "Sorry Q is already Empty " << endl;
    }
    return x;
}

//💲🍕 3.DisplayQueue-Operation: 🍕💲
void DisplayQueue(Queue Q)
{
    int i = 0, length = Q.rear + 1;
    while (length--)
    {
        cout << Q.Q[i++] << " ";
    }
    cout << endl;
}

//💲🍕 4.IsFull-Operation: 🍕💲
int IsFull(Queue Q)
{
    int x = -1;
    if (Q.rear = Q.size - 1)
    {
        x = 1;
        return x;
    }
    else
        return -1;
}

//💲🍕 5.IsEmpty()-Operation: 🍕💲
int IsEmpty(Queue Q)
{
    int x = -1;
    if (Q.rear == -1)
    {
        x = 1;
        return x;
    }
    else
        return x;
}

//💲🍕 6.Queue-First-Operation (mtlb yeh operation apne Queue ka jo front and Rear-element hai voh retunr krta hai.) 🍕💲
int First(Queue Q)
{
    if (Q.rear > -1)
        return Q.Q[0];
    else
        return -1;
}

//💲🍕 7.Queue-Rear-Operation: 🍕💲
int Rear(Queue Q)
{
    if (Q.rear > -1)
        return Q.Q[Q.rear];
    else
        return -1;
}
int main()
{
    Queue Qe;
    IntializeQueue(&Qe);
    enqueue(Qe, 5);
    enqueue(Qe, 6);
    enqueue(Qe, 11);
    enqueue(Qe, 21);
    // enqueue(Qe, 32);
    DisplayQueue(Qe);
    dequeue(Qe);
    dequeue(Qe);
    DisplayQueue(Qe);

    dequeue(Qe);
    dequeue(Qe);
    // dequeue(Qe);
    enqueue(Qe, 32);
    dequeue(Qe);

    DisplayQueue(Qe);
    cout << "is empty? " << IsEmpty(Qe) << endl;
    cout << First(Qe) << endl;
    cout << Rear(Qe) << endl;

    return 0;
}

//👿📔imp-Note-point:-As apna yeh Queue kafi acche se and kafi sahi se kaam kr raha hai, but esmeh ek hi problem hai(as mtlb problem nhi hai yeh kuch "kami" hai,) and voh kami hai ki ess Queue( which is implemented using "array" via taking only rear-pointer ) meh yeh dequeue-operation ki time-taken O(n) hai , and baki sabhi operations ki time-taken toh O(1) mtlb "constant" hi hai. thus toh bas ess Queue-implementation k saat yehi baat hai. thus toh now aab aage apn Queue ko implement using array hi but , apki baar apn fron and rear-index-pointers use krenge.. as toh eske use krne se apne jo sare operations honge voh O(1) mtlb "constant"-time meh hone lg jayenge...