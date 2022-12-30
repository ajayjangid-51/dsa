//🔥💲🍕 as now aab apn two-LinkedList ko merge krenge, as apn janteeh hi hai ki Merging mtlb two Sorted-LinkedList ko Sorted order meh combine(merge) krna 🍕💲🔥
// as "arrays" meh apnne dekha ki apn ek extra-auxilary "array" ka use krke "merging" kr pa reh hai, but whereas yaha LinkedList meh jaruri nhi hai ki apn extra se ek auxilary-LinkedList le, mtlb apn bina "auxilary-Linkedlist" k bhi Linkedlists ki Merging kr sktehh hai , and auxilaryly-linkedlist leke bhi Merging kr sktehh hai. thus toh apn Without using auxilary Linkedlist Merging krenge..

// thus toh ess kaam ko krne k liyeh sbse phle apn 4-pointers "p", "q" , "third" and "last" lenge whereas "p" will point on first-node of 1st-Linkedlist and "q" will point on first-node of 2nd-linkedlist. and "third"-pointer will point the first-node of the mergerd-LL and "last"-pointer will point on the last-node of merged-LL. as toh yeh third and "last" pointers apni madad krenge for getting the merged-linkedlist.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *MergeLL(Node *first, Node *second)
{
    //🖼️🖼️🖼️  see pic-1 and 2. for understanding the concept of Merging the LinkedLists. 🖼️🖼️🖼️
    Node *third = 0, *last = 0;
    if (first->data > second->data)
    {
        third = last = second;
        // last->next = 0;
        second = second->next;
        last->next = 0; // ( "farak pdta hai " )
    }
    else
    {
        third = last = first;
        // last->next = 0;
        first = first->next;
        last->next = 0;
    }

    while (first && second)
    {
        if (first->data > second->data)
        {
            last->next = second;
            last = second;
            // last->next = 0;
            second = second->next;
            last->next = 0;
        }
        // else if (first->data < second->data)
        else
        {
            last->next = first;
            last = first;
            // last->next = 0;
            first = first->next;
            last->next = 0;
        }
    }
    // while (first)
    // {
    //     last->next = first;
    //     last = first;
    //     first = first->next;
    // }
    // while (second)
    // {
    //     last->next = second;
    //     last = second;
    //     second = second->next;
    // }
    // as or we can also do like this also:-
    if (first)
    {
        last->next = first;
    }
    // if (second)
    else
    {
        last->next = second;
    }
    return third;
}
//🔔🔔 Analysis:- as ess process meh apnko koi extra-linked-list nhi chahiyehh and ess process ki time-complexity is O(n+m). (as merging k liyeh time as esseh (n+m) ki terms meh hi measure krtehh hai.) and apn ek baat bhi janteeh hai ki jab bhi apnko problems meh time-complexity in terms of (n+m) de rkhi then apn sure ho jatehh hai ki apnko ess problem meh "merging" use krni hai. 🔔🔔

Node *CreateLL(int p1_size, int arr[]);
void Display(Node *p);
int main()
{
    int arr[4] = {2, 8, 10, 15};
    int brr[5] = {4, 7, 12, 14, 20};
    Node *head1 = CreateLL(4, arr);
    Display(head1);
    Node *head2 = CreateLL(5, brr);
    Display(head2);
    // cout << "hello ji" << endl;
    Node *merged = MergeLL(head1, head2);
    Display(merged);
    // cout << "bye ji" << endl;

    return 0;
}

void Display(Node *p)
{
    while (p != 0)
    {
        cout << p->data << "  ";
        p = (p->next);
    }
    cout << endl;
}
Node *CreateLL(int p1_size, int arr[])
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = arr[0];
    first->next = 0;
    last = first;

    for (int l = 1; l < p1_size; l++)
    {
        h = new Node;
        h->data = arr[l];
        h->next = 0;
        last->next = h;
        last = h;
    }
    return first;
}
