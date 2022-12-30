//🔥💲🍕 As Now aab apn "Circular-LinkedList" meh "new-Node" mtlb "new-element" insert krna dekhenge.. 🍕💲🔥
// Now toh as like "Linear_linkedList" yaha "Circular-LinkedList" meh bhi "Insertion" krne k 2-cases ho sktehh hai:-
//  1. "Inserting before "head"-Node
//  2. Inserting at any other given position( except "before-head-Node")
//🖼️🖼️🖼️  see pic-1 For Understanding the positions for "Circular-LinkedList".  🖼️🖼️🖼️

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (int i = start; i < n; i++)
#define foll(i, start, n) for (ll i = start; i < n; i++)
#define trav(a) for (auto x : a)

struct Node
{
    int data;
    Node *next;
};
int CountCLL(Node *p);

void InsertCLL(Node **head, int value, int pos)
{
    //🔔🔔 Considering-Case1:- (mtlb Inserting-before-head-Node) 🔔🔔
    // /*
    if (pos == 0)
    {
        Node *temp = new Node;
        temp->data = value;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = *head;
        }
        temp->next = *head;
        Node *last = *head;

        do
        {
            last = last->next;

            // } while (last != *head); // as ess-statement se toh apna last-pointer "first-Node" pe poch rha tha.. 💡 thus toh mtlb apnko ess baat ka thoda sahi se dhyn rkhna hai.. 💡
        } while (last->next != *head);
        // * /

        // as or apn esseh bhi kr skethh hai mtlb without using this "do-while-LOOP"
        // while (last->next != *head)
        // {
        //     last = last->next;
        // }
        //👿📔imp-Note-point:- This is the main and most important use of "do-while"-LOOp (as mtlb apn "do-while"-LOOP ka use "Circular-linkedList" meh krethh hai.)

        // as toh now aab apna "last-pointer" now Circular-linkedlist k last "node" pe hai.
        last->next = temp;
        // Now also updating-head-pointer... of circular-linkedlist. (as vaseh toh koi actual Logic nhi hai mtlb koi genuine-Reason nhi hai ki apn Circular-LinkedList meh "Head-Node" ko move kare.. thus toh mtlb apn "head"-node ko move nhi krenge.. )
        *head = temp;

        //👿📔imp-Note-point:-thus toh overall apn yeh bol hi sktehh hai ki "inserting-at-after-last-node" or "inserting-before-head-Node" is same thing only... thus toh mtlb yeh "pos==0" Special-case consider krne ki jarurat nhi hai , as apn toh simply pos "zero" ko pos "last" kr denge.. simply. as like this we can do directly..
    }
    /*
    // if (pos == 0)
    // {
    //     pos = CountCLL(*head);
    // }
    */
    //👿📔imp-Note-point:-as ess Case-1(insertin before "first-node") ka time bhi O(n) hai.
    if (pos > 0 && pos <= CountCLL(*head))
    // as ess upar-wali conditio ko apn esseh bhi likh skteh hai , thus toh mtlb aapnko phir aage niche-else-statement ki jarurat nhi hogi.
    // while( p->next && p)
    {

        Node *p = *head;
        fo(i, 0, pos - 1)
        {
            p = p->next;
        }
        Node *temp = new Node;
        temp->data = value;
        temp->next = p->next;
        p->next = temp;
    }
    //👿📔imp-Note-point:- time-analysis for this case-2 is is O(n) for general and for minimum-time(mtlb best-case mtlb after "head"-Node ) is O(1) and for worst-case(means inserting after last-node) is O(n). thus toh mtlb "insertion" meh ek hi condition pe minimum-time mtlb constant-time mtlb O(1)-time lgta hai, and that is inserting at "after-first-Node".
    else
    {
        return;
    }
}

void DisplayCLL(Node *p);
Node *CreateCircularLL(int p1_size, int arr[]);

int main()
{
    int arr[] = {3, 5, 12, 2, 12};
    Node *head = CreateCircularLL(5, arr);
    DisplayCLL(head);
    InsertCLL(&head, 100, 0);
    InsertCLL(&head, 150, 3);
    InsertCLL(&head, 200, 0);
    InsertCLL(&head, 300, 0);
    DisplayCLL(head);
    // cout << head->data << " " << head->next->data << " " << head->next->next->data << " " << head->next->next->next->data << endl;
    return 0;
}

Node *CreateCircularLL(int p1_size, int arr[])
{
    Node *first, *last, *h; // or
    first = new Node;
    first->data = arr[0];
    first->next = first;
    last = first;

    for (int l = 1; l < p1_size; l++)
    {
        h = new Node;
        h->data = arr[l];
        h->next = first;
        last->next = h;
        last = h;
    }
    return first;
}

void DisplayCLL(Node *p)
{
    Node *head = p;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}
int CountCLL(Node *p)
{
    int x = 0;
    Node *head = p;
    do
    {
        x++;
        p = p->next;
    } while (p != head);
    return x;
}