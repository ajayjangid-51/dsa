// as YAHA pe apn linked meh present NOdes mtlb "linkedList-k-nodes" ko count krenge.. by both iterative and REcursive-approach.

// Traversing the Linked-list by using Recursion-concept or mtlb Recursion-Idea:-
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)

struct Node
{
    int data;
    Node *next;
};

Node *CreateLL(int p1_size);

//💲🍕 Couting-the-no.of-NOdes-in-LinkedList:- 🍕💲
// Recursive-approach:-
int RecursiveCount(Node *p1)
{

    if (p1 != 0)
    {
        int sum = 0;
        int allsum = 0;
        sum += 1;
        allsum += p1->data;
        p1 = p1->next;
        // return RecursiveCount(p1) + sum;
        return RecursiveCount(p1) + allsum;
        // return RecursiveCount(p1);
    }
    else
    {
        return 0;
    }
}
// for recursive-approach:-
// time-complexity = O(n)
// space-compelxity = O(n)

// Iteratice-approach
int NodesInLL(Node *p1)
{
    int Count = 0;
    while (p1 != 0)
    {
        Count += 1;
        p1 = p1->next;
    }
    return Count;
}

// for iterative-approach:-
// time-complexity = O(n)
// space-compelxity = O(1)

/* wrong-implementation of RCount:-
// int RecursiveCount(Node* p1){

//     if( p1 != 0){
//         int sum = 0;
//         int allsum = 0;
//         sum += 1;
//         allsum += p1->data;
//         p1= p1->next;
//         // return RecursiveCount(p1) + sum;
//         return RecursiveCount(p1) + allsum;
//         // return RecursiveCount(p1);
//     }
//     else{
//         return 0;
//     }
// }*/

int RCount(Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    return RCount(p->next) + 1;
}

//💲🍕2.Sum-of-Linked-List:- 🍕💲
int SumOfLL(Node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}
// Sum of-LinkedList via recursion:-
int Rsum(Node *p)
{
    // static int sum = 0;
    //📔📔Note-point:-  as here apn koi "static-variable" use nhi krenge.. as q ki yeh chote-chote kaam toh apn esseh hi kr sktehh hai mtlb return-value ki help se kr sktehh hai.
    if (p == 0)
    {
        return 0;
    }
    // while (p)
    // {
    return Rsum(p->next) + p->data;
    // }
}

//👿📔imp-Note-point:- the time-complexities of these function is O(n) only.
// and as toh apnko enn sab kaamo "recursively" and "iteratively" dono tariko se aana chahiyehh, thus toh apn yeh Funtions dono tariko se implement krenge and krna dekhenge..
int main()
{
    Node *head = CreateLL(10);
    // cout << RecursiveCount(firsti);
    // cout << Count(firsti) << endl;
    deb(RecursiveCount(head));
    deb(NodesInLL(head));
    deb(RCount(head));
    deb(SumOfLL(head));
    deb(Rsum(head));
    return 0;
}

// As toh Recursion ka tab use krteh hai jab apnko koi baar-baar krna hota hai, as recursion meh bhi yehi krteh hai apn voh jo kaam baar-baar krna hai voh kaam ek baar apn recursive-fn meh likh leteh hai. and phir ussi kaam ko baar-baar krne k liyeh bas simmply apn recursive-call kr deteh hai as accordingly.
// jaise suppose ki apnko linked-list-Node-counting krni hai by recursively , as toh simply kaise krenge ki apn simply phle recursive-fn meh jo main kaam hota hai voh likh denge in base-condition mtlb

Node *CreateLL(int p1_size)
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = 101;
    first->next = 0;
    last = first;

    for (int l = 1; l < p1_size; l++)
    {
        h = new Node;
        h->data = l + 10;
        // deb(h->data);
        h->next = 0;
        last->next = h;
        last = h;
    }
    return first;
}