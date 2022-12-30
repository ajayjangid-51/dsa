//🔥💲🍕 As Now aab apn "Circular-LinkedList" meh se Node ko "Delete" krna dekhenge..  🍕💲🔥
// as toh as like as "Linear-LinkedList" yaha "Circular-linkedList" meh bhi "Deletion" k 2-cases hotehh hai:-
// Case-1: Deleting "head-Node" (as ess Case meh apnko "head"-Node ko move krna hota hai. )
// Case-2: Deleting any other Node.
// Case-3: Deleting "Last-Node" ( as yeh Case-2 k same hi hai, mtlb 'case-2 wala code eske liyeh bhi kaam kr hi jayega.)
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define foll(i, start, n) for (ll i = start; i < n; i++)
#define trav(a) for (auto x : a)

struct Node
{
    int data;
    Node *next;
};
int CountCLL(Node *p);

int DeleteinCLL(Node **head, int pos)
{
    int xx = -1;
    if (pos == 1)
    {
        Node *last = *head;
        while (last->next != *head)
            last = last->next;
        if (last == *head)
        {
            xx = last->data;
            free((*head));
            *head = NULL;
            return xx;
        }

        // Node *x = *head; // no-need of this as we are using only the "last"-pointer
        // last->next = x->next;
        // as dono ek hi hai but yeh niche waal jada easily understable hai.
        last->next = (*head)->next;
        xx = (*head)->data;

        free(*head);
        *head = last->next;
        return xx;
    }
    else if (pos > 1 && pos <= CountCLL(*head))
    {
        Node *x = *head;
        /*
        // Node *q = 0; // as yaha "q"-pointer is as a "tail-pointer".
        // fo(i, 0, pos - 1)
        // {
        //     q = x;
        //     x = x->next;
        // }
         xx = x->data;
        q->next = x->next;
        free(x);
        */
        //    As aur ya phir apn bina tailing-pointer k bhi kaam kr sktehh hai: as like this:
        /**/
        Node *q = *head;
        fo(i, 0, pos - 2)
        {
            q = q->next;
        }
        Node *temp = q->next;
        // xx = q->next->data; or
        xx = temp->data;

        // q->next = q->next->next;
        q->next = temp->next;
        free(temp);
        /**/

        return xx;
    }
    return xx;
}
//🔔🔔 as ess function ki time-complexity is O(n) , but its best-case time-complexity is O(1) for the case in which we have to delete "2nd-Node" of the LInkedList 🔔🔔

void DisplayCLL(Node *p);
Node *CreateCircularLL(int p1_size, int arr[]);
int main()
{
    int arr[] = {3, 5, 55, 2, 12};
    Node *head = CreateCircularLL(5, arr);
    DisplayCLL(head);
    DeleteinCLL(&head, 1);
    DisplayCLL(head);
    DeleteinCLL(&head, 2);
    DisplayCLL(head);
    cout << DeleteinCLL(&head, 10) << endl;
    DisplayCLL(head);
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