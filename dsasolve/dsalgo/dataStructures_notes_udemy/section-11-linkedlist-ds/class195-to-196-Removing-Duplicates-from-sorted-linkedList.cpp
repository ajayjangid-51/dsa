//🔥💲🍕 As NOW YAHA pe apn sorted-Linkedlist meh se Duplicate-elements ko delete krna dekhenge.. 🍕💲🔥
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *last = 0;

//🖼️🖼️🖼️  see pic-1 :- for understanding the procedure.. 🖼️🖼️🖼️
// as apnko phle simply 2-pointers "p" and "q" lene hai, whereas "p" is pointer on the head-Node and "q" is pointer on the "Second-Node". and har baar apnko p and q.data ko check krenge as if they are equal then we will delete otherwise we will move both the pointers by one.
void RemoveDuplicates()
{
    Node *p = head, *q = head->next;
    // here "p" is as a tail-pointer of "q". as mtlb actual-baat yeh hai ki apnko present-node ko "p"-pointer se point krna hai.
    while (q)
    {
        if (q->data == p->data)
        {
            p->next = q->next;
            //m1:- here using extra pointer..
            Node *temp = q;
            q = q->next;
            free(temp); //or

            // cout << "hi" << endl;

            // m2:- or we can also do like this , mtlb without using extra pointer.
            /*
            // free(q);
            // q = p->next;
            */
        }
        else
        {
            // cout << "hello" << endl;
            p = q;
            q = q->next;
        }
    }
}
//📔📔Note-point:-  the time-complexity of this function is always O(n) , mtlb there is no maximum and minimum-time.

void InsertLast(int x);
void Display(Node *head);
int main()
{
    InsertLast(10);
    InsertLast(10);
    InsertLast(10);
    InsertLast(30);
    InsertLast(30);
    InsertLast(50);
    InsertLast(60);
    InsertLast(60);
    InsertLast(60);
    InsertLast(80);
    Display(head);
    RemoveDuplicates();
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