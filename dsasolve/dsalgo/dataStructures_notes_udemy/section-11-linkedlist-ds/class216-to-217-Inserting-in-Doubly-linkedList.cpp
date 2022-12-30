//🔥💲🍕 As Now aab apn "Doubly-LinkedList" meh "new-Node" Insert krna dekhenge..  🍕💲🔥
// as toh "Insertion" krne k 2-case ho sktehh hai:-
//  1.Inserting-before-1st-Node (as esmeh apnko "head"-pointer change krna hota hai..)
//  2.Inserting-at-any-other-Position.

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

void InsertinDLL(Node **head, int value, int pos)
{
    if (pos < 0 || pos > CountDll(*head))
    {
        return;
    }

    // Case1:-
    if (pos == 0)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->prev = 0;
        temp->next = *head;
        (*head)->prev = temp;
        *head = temp;

        // as here yaha apnne 3-links modify kiyehh hai.
    }

    // Case2:-
    else
    {
        Node *p = *head;
        fo(i, 0, pos - 1)
        {
            p = p->next;
        }
        Node *temp = new Node;
        temp->data = value;
        temp->prev = p;
        temp->next = p->next;
        if (p->next)
        {
            p->next->prev = temp;
        }

        p->next = temp;
        // p->next meh apn phle "P"-container meh hoteh hai and "arrow-operator(->)" se apn voh p-pointer jis container ko point kr rha hai na usspe puch jatehh hai.

        // as yaha ess case meh apn ne "4-links" modify kiyehh hai but for the case jab apnko last-node k baad insertion krna hai then usmeh toh only 3-links hi modify honge .
    }
}
//🔔🔔 Analysis-of-this-Function:- as ess function meh case-1-(mtlb inserting before first-node) ki time-complexity is O(1) mtlb constant hai. and case-2 ki time-complexity is O(n) , whereas min( inserting-after-first-node) is O(1) and maximum(mtlb for worst-case mtlb inserting-after-last-node) is O(n). 🔔🔔

Node *CreateDll(int arr[], int n);
void DisplayDll(Node *head);
int main()
{
    int arr[] = {3, 51, 123, 31, 5};
    Node *head = CreateDll(arr, 5);
    DisplayDll(head);
    InsertinDLL(&head, 202, 0);
    InsertinDLL(&head, 502, 0);
    DisplayDll(head);
    InsertinDLL(&head, 40, 3);
    DisplayDll(head);
    InsertinDLL(&head, 40, -1);
    DisplayDll(head);
    InsertinDLL(&head, 400, 8);
    DisplayDll(head);
    return 0;
}

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
