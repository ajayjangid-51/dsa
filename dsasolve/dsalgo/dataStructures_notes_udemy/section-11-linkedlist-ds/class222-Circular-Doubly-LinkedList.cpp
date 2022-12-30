// 🔥💲🍕 As Now aab apn "Circular-Doubly-LinkedList" k bareh meh dekenge.. and apn "Circular-Doubly-linkedlist" create bhi krenge.. 🍕💲🔥

// as "doubly-circular-linkedlist" ko apn esseh bhi define kr sktehh hai ki it is "collection-of-doubly-Nodes" which are connected circularly.

// Application-of-"circular-doubly-linkedlist" is "setting-alarm-in-our-iphone" that we can scroll in forward , backward and circularly also. as toh voh jo apn phone meh dekhtehh hai voh toh frontend hai as phir event-listerner-function ka use krke apn jo apni backend meh linkedlist hai usko manipulate krethh hai, thus toh main toh yeh backend meh "linkelist" wali cheezz hi important hai.. as mtlb apnko backend acche se aana chahiyehh. q ki phir frontend toh apn easily bana hi sktehh hai and phir event-listerner se backend- ko manipulate bhi apn easily kr sktehh hai. as event-listerner meh bhi yehi linkedlist k functions ka use hotehh hai for manipulating the linkedlist.

// As yeh "circular-linkedlist" hi sbse best linkedlist hai , mtlb jo kaam apn unn linkedlist se kr sktehh hai voh kaam apn ess "circular-linkedlist" se bhi kr sktehh hai, but jo kaam apn ess "circular-linkedlist" se kr sktehh hai , voh jaruri nhi hai ki apn unse kr sktehh hai , thus toh mtlb "Circular-LinkedList" is the best "Linkedlist" , mtlb apnko apni applications meh hamesa yehi "circular-linkedslist" use krni chahiyehh.

// Imp-points:-
// 1. as ess "doubly-circular-linkedlist" ko bhi apn same deto "singly-circular-linkedlist" ki tarah hi traverse krtehh hai. (mtlb via using "do-while" only..)
// 2.insertion is also deto-same , except inserting before first-node or after-last-node (as vaha apnko last-node->next ko bhi modify krna hota hai. and there it take constant-time for inserting before 1st-node in doubly-circular-linkedlist as singly-circular-linkedlist meh it take O(n)-time for the same process)
// 3. as ess linkedlist meh apnko last-node pe jaane k liyeh apnko traversing nhi krni hogi , as we can go to it just via Node*p = head.prev.

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

Node *CreateCDll(int arr[], int n)
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
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
    last->next = head;
    head->prev = last;
    return head;
}

void DisplayCDll(Node *head)
{
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}
int CountCDll(Node *head)
{
    int len = 0;
    Node *p = head;
    do
    {
        len++;
        p = p->next;
    } while (p != head);
    return len;
}

void InsertCDLL(Node **head, int pos, int x)
{
    int len = CountCDll(*head);
    deb(len);
    if (pos < 0 || pos > len)
    {
        return;
    }
    if (pos == 0 || pos == len)
    {
        Node *temp = new Node;
        temp->data = x;
        temp->next = *head;
        if (*head)
        {
            temp->prev = (*head)->prev;
            (*head)->prev->next = temp;
            (*head)->prev = temp;
        }
        else
        {
            temp->prev = temp;
            temp->next = temp;
        }
        *head = temp;
    }
    else
    {
        Node *p = *head;
        fo(i, 0, pos - 1)
        {
            p = p->next;
        }
        Node *temp = new Node;
        temp->data = x;
        temp->next = p->next;
        temp->prev = p->next->prev;
        p->next->prev = temp;
        p->next = temp;
    }
}
int DeleteCDLL(Node **head, int pos)
{
    int x = -1;
    int len = CountCDll(*head);
    if (pos < 0 || pos > len)
    {
        return -1;
    }
    if (pos == 1)
    {
        Node *p = *head;
        x = p->data;
        (*head)->prev->next = (*head)->next;

        (*head) = (*head)->next;
        (*head)->next->prev = (*head)->prev;
        free(p);
        return x;
    }
    else
    {
    }
}

void ReverseCDLL(Node **head)
{
}
int main()
{
    int arr[] = {3, 51, 123, 31, 5, 6};
    Node *head = CreateCDll(arr, 6);
    DisplayCDll(head);
    deb(CountCDll(head));
    InsertCDLL(&head, 3, 21);
    DisplayCDll(head);
    return 0;
}
