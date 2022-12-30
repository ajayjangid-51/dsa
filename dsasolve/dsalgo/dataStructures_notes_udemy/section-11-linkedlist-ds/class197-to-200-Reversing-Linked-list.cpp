//🔥💲🍕 NOw YAHA pe apn LinkedList ko Reverse krna dekhenge... whereas actual meh reverse krna dekhenge na ki Reverse-display krna dekhenge, mtlb apne LinkedList ka first-node as a last-node ban jayega andn last-node as a first-node banjayenge and like this all the nodes.. jaise 2nd-node 2nd-last-node banjayega.. and soo..on 🍕💲🔥

//🔔🔔 as toh LinkedList ko "Reverse" krne k 2-tariko se or mtlb 2-methods hai:-
//  1st. Reversing-elements or mtlb-with-the-help of Auxiliarly-LinkedList (jaise apnne "arrays" meh bhi kiya tha..)( mtlb node k uske repective-Node k elements(mtlb data) ko interchange krdena , as toh ess method meh LinkedList meh address(mtlb Nodes) ka movement nhi hoga.)
//  2nd. Reversing-Links or mtlb via-using "sliding-pointers" (as ess method meh last-node ko as first-node bana diya jata hai and links ko reverse order meh kr diya jata hai jaise mtlb aab last-node aab second-node- ko point karega and then second-last-node third-last-node ko point karega as like this.. so onn.. )
//🔔🔔  As toh apn mostly "Reversing-Links"-Method prefer krtehh hai, Q ki 🔔🔔
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define foll(i, start, n) for (ll i = start; i < n; i++)

struct Node
{
    int data;
    Node *next;
};
int Count(Node *p);
//💲🍕 M1.Noob method or Reversing-Elements-Method for Reversing the Linked-list:-  🍕💲
// as toh method meh apn sbse phle toh ek "array" of-LinkedList's-size create krenge and then phir linked-list k first-node pe pointer-se-point krenge.. and phir simply linnkedList-Node k data ko apne array meh one-by-one copy krtehh rhenge..

/* approach1:-(naive-approach of following Method1:-)
int i = 0;
int a[10];
void Reversell(Node *p2)
{
    if (p2 != 0)
    {
        Reversell(p2->next);
        a[i++] = p2->data;
    }
}
*/
// approach2:- (Efficient-approach of following Method2:-)
void M1ReverseLL(Node *p)
{
    Node *first = p;

    int a[Count(p)];
    int i = 0;
    while (p)
    {
        a[i++] = p->data;
        p = p->next;
    }
    p = first;
    i--;
    while (p)
    {
        p->data = a[i--];
        p = p->next;
    }
}
//🔔🔔 Analysis-of-this-algorithm(mtlb this Method ) that ki ess alogrithm meh apnko ek extra auxilarly-array chahiyehh and ess function ki always time-complexity is O(n)-only. 🔔🔔

//💲🍕 M2. now aab apn "Reversing-Links" method se Linkedlist ko reverse krenge..  🍕💲
// As toh phle apn "Sliding-Pointers"-concept k bareh meh dekhenge..
// as toh mtlb ess concept k according apnkok phle simply 3-pointers lene hai "p" , "q" and "r", whereas intially "p" is pointing on first-Node of linked list and "q" and "r" are "NULL" , and whereas yaha "q" is tailing-pointing of "p" and "r" is a tailing pointer to "q". and they all we will move by-one-step, in every-cycle until "p" is Null. as like this:-
// r = q;
// q = p;
// p = p->next;
//🖼️🖼️🖼️  see pic-1 :-for understanding that how we can use these 3-pointers ko reversing-the-Links 🖼️🖼️🖼️
// as toh apnko har baar pointers ko slide krke then simply q->next meh "p" assign kr dena hai.
// Node *M2ReverseLL(Node *p)
Node *M2ReverseLL(Node *p)
{
    Node *head = p;
    Node *q = 0, *r = 0;
    while (p)
    {
        r = q;
        q = p;
        // if (p->next == 0)
        // {
        //     head = p;
        //} // as ess if-statement ki jarurat nhi hai,, bcoz niche we have assigned head by q , as we can also use this if-statement-also.. mtlb yeh bhi sahi hai, but niche wali baat jda sufficient hai.
        p = p->next;
        q->next = r;
    }
    head = q;
    return head;
}
//🔔🔔 analayis-of-M2-algorithm , that ki ess mehtod meh apnko koi extra-auxilary-array nhi chahiyehh, mtlb ess function ki space-complexity is O(1)-only and ess function ki time-complexity toh is same as M1- that is O(n).always mtlb not minimum nor maximum.🔔🔔
//🖼️🖼️🖼️  see pic-2 :- for getting the answer that why we prefer "method2" always as Q ki linkedList-Node meh jururi nhi hai ki single-integer data hi hota hai, mtlb bohat sare data hoke and then phir link hoga, toh mtlb phir utne sare data ko swap krna sahi nhi hoga mtlb voh efficeint nhi hoga.  🖼️🖼️🖼️

//💲🍕 "Recursive"-version of M2:- 🍕💲
// as toh ess kaam ko apn "Recursively" krne ka yeh idea hai ki..
Node *hedi = 0;
void M2RecursiveReverseLL(Node *q, Node *p)
{

    if (p)
    {
        M2RecursiveReverseLL(p, p->next);
        p->next = q;
    }
    else
    {
        hedi = q;
    }
}
//🖼️🖼️🖼️  see pic-3. for understanding the Recursive-version :- 🖼️🖼️🖼️

void Display(Node *p);
Node *Create(int a[], int p1_size);
Node *CreateLL(int p1_size);
int main()
{
    /* approach1:- of Method1:-
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    Node *firsti = Create(arr, 7);
    Display(firsti);
    Reversell(firsti);
    Node *revll = Create(a, 7);
    cout << endl;
    Display(revll);
    firsti = revll;
    cout << endl;
    Display(firsti);
    */

    Node *head = CreateLL(5);
    Display(head);
    // M1ReverseLL(head);
    // Display(head);
    // Node *head2 = M2ReverseLL(head);
    // Display(head2)
    // hedi = head;
    deb(hedi);
    M2RecursiveReverseLL(0, head);
    // deb(hedi);
    Display(hedi);

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
int Count(Node *p)
{
    int x = 0;
    while (p != 0)
    {
        x++;
        p = p->next;
    }
    return x;
}

Node *CreateLL(int p1_size)
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = 10;
    first->next = 0;
    last = first;

    for (int l = 0; l < p1_size; l++)
    {
        h = new Node;
        h->data = l * 10 + l / 5;
        h->next = 0;
        last->next = h;
        last = h;
    }
    return first;
}

Node *Create(int a[], int p1_size)
{
    Node *first, *last, *h;
    first = new Node;
    first->data = a[0];
    first->next = 0;
    last = first;

    for (int i = 1; i < p1_size; i++)
    {
        h = new Node;
        h->data = a[i];
        h->next = NULL;
        last->next = h;
        last = h;
    }

    return first;
};