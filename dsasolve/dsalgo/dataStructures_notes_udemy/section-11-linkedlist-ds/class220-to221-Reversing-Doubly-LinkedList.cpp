//🔥💲🍕 As Now aab apn "Doubly-LinkedList" KO Reverse krna dekhenge..  🍕💲🔥
// as "Doubly-LinkedList" ko toh apn easily and mtlb aarram se Reverse kr sktehh hai, q ki usmeh already "Reverse-Linking" hoti hi hai.

// as aseh toh apn jantehh hi hai ki apn "Reversing" 2-tarike se kr sktehh hai:-
//  1.Reversing-elements (mtlb swaping the elements)
//  2.Reversing-LInks
//  but apn hamesa method-2:("Reversing-Links") hi use krethh hai.

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (int i = start; i < n; i++)
#define foll(i, start, n) for (ll i = start; i < n; i++)
#define trav(a) for (auto x : a)

struct Node
{
    Node *prev;
    int data;
    Node *next;
};
int CountDll(Node *head);

//🌟🌟🌟  to get the idea to "Solve" the problem always follow the same thing that:- first make a sketch on copy ,of the thing on which we have to do somethig and then also do that work on that "thing" by drawing the sketchs , or writing important-notice-points , remembering-points etc..etc and apnko simply solution mil jayega in very clear steps.. :- 🌟🌟🌟

// As toh "Doubly-linkedList" ko reverse krne ka idea yeh hai ki apnko simply har Node k "prev" and "next" node ko interchange( or mtlb "swap" ) krna hai.
void ReverseDLL(Node **head)
{
    Node *p = *head;
    Node *temp = 0;
    Node *q = 0; // where here "q" is tail-pointer to "p"

    while (p)
    {
        q = p;
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = temp;
    }

    *head = q;
}

Node *CreateDll(int arr[], int n);
void DisplayDll(Node *head);
int main()
{
    int arr[] = {3, 51, 123, 31, 5};
    Node *head = CreateDll(arr, 5);
    DisplayDll(head);
    ReverseDLL(&head);
    DisplayDll(head);

    return 0;
}
//👿📔imp-Note-point:-as now aab bakki programs for the "doubly-linked" are mostly deto-same as "Singly-LinkedLIst".

Node *CreateDll(int arr[], int n)
{
    Node *head = new Node;
    Node *last = 0;
    head->prev = 0;
    head->data = arr[0];
    head->next = last;
    last = head;

    fo(i, 1, n)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = 0;
        temp->prev = last; // as esko hamesa apnko esseh samajna hai,, ki "last" jisko point kr rha hai , as aab "temp-prev" bhi usko hi point kr rha hai.
        last->next = temp;
        last = temp;
    }
    return head;
}
void DisplayDll(Node *head)
{
    Node *q = 0; // here "q" is tail-pointer , where this is needed for displaying the linkedlist, in reverse-order.
    while (head)
    {
        q = head;
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    // while (q)
    // {
    //     cout << q->data << " ";
    //     q = q->prev;
    // }
    // cout << endl;
}

int CountDll(Node *head)
{
    int x = 0;
    while (head)
    {
        x++;
        head = head->next;
    }
    return x;
}
