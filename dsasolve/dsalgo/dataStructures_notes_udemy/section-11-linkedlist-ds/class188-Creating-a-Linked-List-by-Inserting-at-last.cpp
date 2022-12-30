//🔥💲🍕 as YAHA pe apn Linked-List meh "Append"-function dekhenge.. mtlb voh function dekhenge mtlb create krenge jo ki Linkedlist k end meh element insert krta ho, thus toh mtlb apn ess function ka use krke apni Linked-List bhi phir easily create kr sktehh hai without using the help of "Create-LinkedList"-fn 🍕💲🔥
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)

struct Node
{
    int data;
    Node *next;
};
int NodesInLL(Node *p1);

void AppendInsert(Node *head, int data)
{
    Node *h = new Node;
    h->data = data;
    h->next = 0;
    Node *last = head; // as esseh toh ess statement-ki-jarurat nhi hai, as q ki ess loop k chlne k baad yeh apna "head-pointer" hi last-Node pe point krne lgjayega. and one-more-Note-point ki apnko ess baat se confuse nhi hona hai ki voh Actual "head-pointer" bhi last-Node ko point krne lgjayega , as bcoz q ki yaha yeh "head-pointer" by address or by-reference( mtlb in case of pointer it is not "double-pointer") se function meh passed nhi hai. thus toh mtlb apn ess function- meh "head-pointer" k saat kuch bhi kr sktehh hai , mtlb kuch bhi krtehh hai toh uss Actual "head-pointer" pe kuch farak nhi padega. as like this:-
    /*
    // while(head){
    //     head = head->next;
    // }
    head->next = h;
    
    */
    //    but one-note-point ki agr yeh head-pointer function meh pass nhi hota hai and yeh head-pointer global-pointer hai then phir toh yeh change-update hojayega. and yeh "global-head-pointer" function as a just value pass hota hai then mtlb phir esmeh koi updation nhi hoga. q ki function meh local-paramter ki priroity first hoti hai.
    while (last->next != NULL)
    {
        // deb(last->data);
        last = last->next;
    }
    // deb(last->data);
    last->next = h;
}

//💲🍕  Improvement-in-Append-Function 🍕💲
//🌟🌟🌟
//👿📔Very-imp-Note-point:- as mtlb ki apn yaha AppendInsert function meh har-baar phle last-element ko find krne k liyeh LinkedList ko har baar Traverse kr rhe hai as toh mtlb apne ess Function ki Working-Complexity mtlb time-Complexity is O(n) hai. as then apne pass ek idea hai ki apn ek "last-pointer" rkhtehh hai jo ki hamesa linked-List k last-element(mtlb last-Node) pe point karega. thus toh phir apnko yeh har-baar yeh Traversing nhi krni padegi.
// Okay as toh ess baat meh kuch special cases bhi honge:- jaise:-
// 1. if there is only one-Node in linkeList , then first-pointer and last-pointer both should point on that same Node only.
// 2. if there are no NOde in Linkedlist then , first-pointer and last-pointer both should be "NULL" , and after Creation of new-Node then both the pointers should point on that new-Node( mtlb 1st-Node-of-LinkedList).
// 3. and baki phir toh as it is apne idea k according apnko krna hai.
// 🌟🌟🌟

Node *head2 = 0, *last2 = 0;

// void InsertLast(Node *head, Node *last, int x)
void InsertLast(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;
    // as after creating new-Node we want last-pointer mtlb which is pointing on Last-node-on-actual-linkedlist as but ussseh phle apn voh "Special-Cases" k liyeh dekhenge ki 1st:- is linkedList is empty or 2nd:- is there is only One-Node in linked-LIst. as like this:-
    if (head2 == NULL)
    {
        head2 = last2 = t;
        //👿📔imp-Note-point:- as Always keep the head-pointer and last-pointer as a Global-pointer. but as abbhi toh apn essehhi(non- global-rkh k ) kr rhe hai , but esmeh phir hamesa enko change krne k liyeh enko by address-pass krna hota hai. mtlb "double-pointer" ka use krna hota hai.
    }
    else
    {
        last2->next = t;
        last2 = t;
    }
    // thus toh mtlb apna yeh Function har case meh acche kaam karega , mtlb jab linked-list empty hogi tabhi yeh kaam karega.
}

void Display(Node *head);

int main()
{
    Node *head = new Node;
    head->data = 21;
    Node *n1 = new Node;
    n1->data = 32;
    n1->next = 0;
    head->next = n1;
    AppendInsert(head, 10);
    AppendInsert(head, 12);
    AppendInsert(head, 16);
    cout << "hi hello" << endl;
    Display(head);

    int count = NodesInLL(head);
    deb(count);

    //🔔🔔 as Now Testing "Improved-InsertLast-Function":- 🔔🔔
    // so for this we can do anyone of the thing that , we can Create "head and last-pointers" in global-scope or if we don't create them in global then we have to change the "InsertLast"-fn by double-pointers. so here abhi toh apn "head and last-pointers" ko globally hi create krenge..
    InsertLast(40);
    cout << "hello ji" << endl;
    Display(head2);
    cout << "bye ji" << endl;
    InsertLast(21);
    Display(head2);
    InsertLast(11);
    Display(head2);

    //📔📔Note-point:-  As toh aabse apn yeh "InsertLast" function hi use krenge.. hamesa.
    return 0;
}

int NodesInLL(Node *p1)
{
    int Count = 0;
    while (p1 != 0)
    {
        Count += 1;
        p1 = p1->next;
    }
    return Count;
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

// main-diff between singly-LL , doubly-LL , circular-LL
// as doubly-linked-list meh apn ek-eleement pe khde hoke uske aage and piche wale dono elements ko access kr sktehh hai , and whereas in singly-linked-list apn ek-element pe khde hoke only uske aage wale element ko hi access kr sktehh hai. and ciruclar-linkedlist meh apn last-element-pe khde hoke first-element-of-linkedlist ko access kr sktehh hai.