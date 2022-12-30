//🔥💲🍕 As Now aab apn "Doubly-LinkedList" meh "Node" ko Delete krna dekhenge..  🍕💲🔥
// as "Deletion" k liyeh bhi 2-cases possible hai:-
//  case1:- Deleting the first-node (as esmeh apnko "head"-pointer ko change krna hoga.)
//  case2:- Deleting the Node at any other position.

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

int DeleteinDll(Node **head, int pos)
{
    int x = -1;
    if (pos < 1 || pos > CountDll(*head))
    // checking that index is valid or not. as if it is invalid we will exit-the process.
    {
        return -1;
    }

    // Case1:-
    if (pos == 1)
    {
        /*
        // x = (*head)->data;
        // (*head) = (*head)->next;
        // free((*head)->prev);
        // (*head)->prev = 0;
        */
        // as yeh procedure agr linkedlist meh 1-element hi hoga tab kaam nhi karega thus toh esko bhi consider krne k liyeh apn yeh procedure follow krenge..
        Node *p = *head;
        x = p->data;
        *head = (*head)->next;
        if (*head)
        // here we are takking care that where "head" become to NULL or not. as if it is not-NULL then , we will do this , otherwise we will not do..
        {
            (*head)->prev = 0;
        }
        free(p);
        return x;
    }

    // Case2:-
    else
    {
        Node *p = *head;
        fo(i, 0, pos - 1)
        {
            // bringing pointer-p on the requested-deleted-node.
            p = p->next;
        }
        x = p->data;
        p->prev->next = p->next;
        if (p->next)
        {
            p->next->prev = p->prev;
        }
        free(p);
        return x;
    }
}
//💲🍕 as ess function meh Case-1 ki time-complexity is O(1) mtlb it is constant only.  and for case-2 the time-complexity is O(n) , whereas it for best-case(mtlb minimum-time mtlb deleing-Second-node) the time-complexity is O(1) and for worst-case(mtlb maximum-time mtlb deleting-last-node) the time-complexity is O(n). 🍕💲

Node *CreateDll(int arr[], int n);
void DisplayDll(Node *head);
int main()
{
    int arr[] = {3, 51, 123, 31, 5};
    Node *head = CreateDll(arr, 5);
    DisplayDll(head);
    int x = DeleteinDll(&head, 1);
    cout << x << endl;
    DisplayDll(head);
    DeleteinDll(&head, 4);
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
