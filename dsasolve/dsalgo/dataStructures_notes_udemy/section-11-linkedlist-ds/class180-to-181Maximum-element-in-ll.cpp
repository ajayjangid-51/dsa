// AS NOW YAHA pe apn linked-list meh maximum element find-out krenge..
// as YAHA pe apn linked meh present NOdes mtlb linked k nodes ko count krenge.. by both iterative and REcursive-approach.

// Traversing the Linked-list by using Recursion-concept or mtlb Recursion-Idea:-
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)

struct Node
{
    int data;
    Node *next;
};

Node *CreateLL(int p1_size)
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = 101;
    first->next = 0;
    last = first;

    for (int l = 0; l < p1_size; l++)
    {
        h = new Node;
        h->data = l + 10;
        h->next = 0;
        last->next = h;
        last = h;
    }
    return first;
}

//💲🍕 1.Naive-method of findind-Max which we used to follow in past , but now we follow efficient-method of finding-Max:- 🍕💲
int Maxxx(Node *p1)
{
    int max = 0;
    while (p1 != 0)
    {
        if (p1->data > p1->next->data)
        {
            if (max < p1->data)
            {
                max = p1->data;
                cout << "yes p1 > p2 for p's value is " << p1->data << "and max is " << max << endl;
            }
        }
        else if (p1->data == p1->next->data)
        {
            cout << "yeh p1 = p2" << endl;
            // p1 = p1->next;
            // continue;
        }
        else if (p1->data < p1->next->data)
        {
            if (max < p1->next->data)
            {
                max = p1->next->data;
            }
            else
            {

                cout << "awesome" << endl;
            }
        }
        cout << "okay by1" << endl;
        p1 = p1->next;
        cout << "okay by2" << endl;
    };

    cout << "so the maximum value in the LL is " << max << endl;
    return max;
}

//💲🍕 2.Efficient and very best and simple method of Finding the Max:- 🍕💲
// 1.Iterative-approach:-
int MaxinLL(Node *p)
{
    // int min = INT_MIN; (where INT_MIN = -32768 ) or we can do this also , and actually this will be better:-
    int max = p->data;
    p = p->next;
    while (p != 0)
    {
        if (max < p->data)
            max = p->data;
        p = p->next;
    }
    return max;
}

// as linkedlist ko traverse krne k liyeh apnko sirf simply "head"-pointer chahiyehh.

// 2.Recursive-approach:-
/* Our Naive-approach which we used to follow in past:- but now we have study the efficient and correct tarika of finding-the-Max-Recursively:-
// int RecursiveMax(Node *p1)
// {
//     int max = INT8_MIN;
//     deb(max);
//     if (p1 != 0)
//     {
//         if (p1->data > max)
//         {
//             return RecursiveMax(p1->next, p1->data);
//         }
//         else
//         {
//             return RecursiveMax(p1->next, max);
//         }
//     }
//     else
//     {
//         return max;
//     }
// }
*/

//🖼️🖼️🖼️  see pic-1 :- for-recursive-max-algorithm or mtlb procedure. 🖼️🖼️🖼️
int Rmax(Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return INT_MIN;
    }
    x = Rmax(p->next);
    if (x > p->data)
    {
        return x;
    }
    else
        return p->data;
}

//💲🍕 3.Finding-Min:- 🍕💲
// Iterative-approach:-
int Min(Node *p)
{
    int min = p->data;
    p = p->next;
    while (p)
    {
        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

int main()
{
    Node *firsti = CreateLL(10);
    // cout << RecursiveCount(firsti);
    // cout << Maxxx(firsti) << endl;
    deb(MaxinLL(firsti));
    deb(Rmax(firsti));
    deb(Min(firsti));
    return 0;
}
