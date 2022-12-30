//🔥💲🍕 Now aab apn Sorted-LinkedList meh element ko its Sorted-Position pe "Insert" krna dekhenge.. 🍕💲🔥
// okay as toh apn simply boleh toh yeh wala kaam apn "Arrays" meh kr chuke hai, whereas apn vaha toh simply from the back-of-array elements ko by-one right-shift krtehh rhe the as if the array-elements is greater than inserting-element and if not greater than apn vaha uss position pe element ko insert kr de rhe thee. as toh LinkedList meh apn esseh from the back-element ko shift nhi kr payenge bcoz apn LinkedList ko sirf from the front-end se hi Traverse kr sktehh hai as mtlb orr koi tarika nhi hai LinkedList ko Traverse krne ka. thus toh apn LinkedList k case meh ess Kaam ko apn LikedList k front-end se Traverse krenge and check it that LinkedList-element is smaller or greater than inserting-element, as if element is smaller then apn next-node pe move hojayenge and if element-is-greater than inserting-element , then apn vaha uss position pe inserting-element ko insert krdenge..

// 🌷🌷 Tip:- as apnko koi kaam programmatically implement krna hai then , always first take an example on the copy and then do the work systemtically , as jo kaam ek-dam systematicaLLY hota hai usko hi apn "code meh implement" kr sktehh hai.🌷🌷

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *last = 0;
void InsertLast(int x);

void SortedInsert(int value)
{
    if (head == 0)
    {
        Node *temp = new Node;
        temp->data = value;
        head = temp;
    }

    else if (value < head->data)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    // else if (value < last->data)
    else
    {

        Node *t = new Node;
        t->data = value;
        // t->next = 0;

        Node *p = head;
        Node *q = 0; // using tail-pointer.
        // while (p->data < value)
        while (p && p->data < value) //👿📔imp-Note-point:- as apn yeh statement-esseh likhteh hai then mtlb apnko phir niche jo apnne else-staetment meh likha hai na voh nhi likhna padega.
        {
            q = p;
            p = p->next;
        }
        t->next = q->next;
        q->next = t;
    }
    // else
    // {
    //     InsertLast(value);
    // }
}
//🔔🔔  AS ess function ki time-complexity is O(n) mtlb as bcoz apn harr baar sorted-position search kr rhe hai 🔔🔔

void Display(Node *head);
int main()
{
    // as toh here phle toh apn Sorted-Linked-List create krenge and now aab apn LinkedList create krne k liyeh "InsertLast"-function ka use krenge..
    InsertLast(3);
    InsertLast(7);
    InsertLast(9);
    InsertLast(15);
    InsertLast(20);
    Display(head);
    SortedInsert(18);
    Display(head);
    SortedInsert(13);
    SortedInsert(23);
    SortedInsert(1);
    Display(head);

    return 0;
}

void InsertLast(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (head == NULL)
    {
        head = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
void Display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
