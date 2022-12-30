//🔥💲🍕 Now apn "Circular-LinkedList" ko Display krna dekhenge... 🍕💲🔥
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

//💲🍕 1.Creating-Circular-LinkedList:- 🍕💲
Node *CreateCircularLL(int p1_size, int arr[])
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = arr[0];
    first->next = first;
    last = first;

    for (int l = 1; l < p1_size; l++)
    {
        h = new Node;
        h->data = arr[l];
        /*
        // if (l == p1_size - 1)
        // {
        //     h->next = first;
        // }
        // else
        // h->next = 0; 
        */
        // or
        h->next = first; // or
        // h->next = last->next; // as ess statement k according apn h.next meh haar-baar "first" hi daal rhe hai.
        last->next = h;
        last = h;
    }
    return first;
}

//💲🍕 Iterative-Version of Display-ciruclar-LL()-function 🍕💲
void DisplayCLL(Node *p)
{
    Node *head = p;
    // while (p->next != head) //👿📔imp-Note-point:- as ess Condition use kre apn Circular-linkedList ko completely Display nhi kr payenge mtlb ek last-element chut jayega.. thus toh eske liyeh apnko phir "do-while"-LOOP ka use krke hi apn "Circular-LinkedList" ko print kr payenge..
    // {
    //     cout << p->data << " ";
    //     p = p->next;
    // }

    //🔔🔔 Using-do-while LOOp instead of Above approach bcoz above-approach is not working..  🔔🔔
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}
//👿📔imp-Note-point:-Thus toh mtlb apn "Circular-LinkedList" ki Traversing "do-while"-LOOP se krtehh hai. 👿📔

//💲🍕 2.Recursive-apporch of writing the DisplaycLL-function 🍕💲
Node *head = 0;
void RDisplayCLL(Node *p)
{
    //📔📔Note-point:- as ess Recursive-approach ko apn "Static"-variable ki help se implement kr sktehh hai, thus toh apn static-variable named as a "flag" lenge. where this "flag" will denote that that "p != head" for which time , means it is for 1st-time or for 2nd-time. as per the first-time apn "flag" ko "zero" rkhenge and "second-time" k liyeh apn "flag" ko "1" rkhenge..
    // as yeh "flag-variable" sari recursive-calls k liyehh ek hi variable hai. as apn jantehh hi hai ki "Static" varialbe kaise kaam krtehh hai.
    static bool flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        RDisplayCLL(p->next);
    }
    else
    {
        cout << endl;
    }
    flag = 0;
}

Node *CreateLL(int p1_size, int arr[]);
void Display(Node *p);

int main()
{
    int arr[] = {2, 8, 10, 15, 3, 45, 100};
    head = CreateCircularLL(7, arr);
    // head->next->next->next->next = head;
    // Display(head);
    DisplayCLL(head);
    RDisplayCLL(head);

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
