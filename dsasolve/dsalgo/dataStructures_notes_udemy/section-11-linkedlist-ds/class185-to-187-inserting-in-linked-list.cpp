//🔥💲🍕 AS Now aab apn pre mtlb phle se present "LinkedList" meh new-element(mtlb new-Node) "INSERT" krna dekhenge..  🍕💲🔥
// 👿 IMP-topic, as mtlb apnko Linked-list k bich meh kahi element(mtlb "node") insert krna aana chahiyehh. 👿
// Inserting in LINKED-list at a given index with a particular given value(or mtlb key)

// as toh "LinkedList" meh "insertion" krne ka idea yeh hai ki:-
// // as for inserting the element in between the linked-list k liyeh apn phle toh jaha jis node k baad apnko insert krna hai uss node ki uske agle wale node ki linking ko break krenge and then simply apna ek "Node" create krke usko previous and next NOde se linking krdenge.. toh as like this easily apn linked-list meh inbetween elements meh insert kr skteh hai.

// Okay toh noww aab apn ess approach ko programatically implement krenge.. as toh programming-implementation meh as per the above-approach apnko agl se phle koi breaking nhi krni hoti , as apnko toh simply directly new-updated-values assign krni hoti hai.

//📔📔Note-point:-  As now yaha apn phle note krenge.. ki "Insertion" krne se phle 3-important baateh hoti hai:
// 1st, ki apnko konsi index(or mtlb konsi position) pe insert krna hai. and 2nd, ki jo requested-insertion hai jo before-the-first-element-of-linked-list hai (as bcoz yeh alg case ho jata hai q ki apnko esmeh "head"-pointer ko bhi change krna hota hai.) and 3rd, ki apnko requested-insertion after the first-element mtlb at the index other than "0" pe insertino krna hai , (as yeh 2nd-case hai ki apnko ess case meh "head-pointer" of the Linkedlist ko change nhi krna hota hai.).

// one-more-Note-Point ki apn Linkedlist ki indexing ess tarah se krtehh hai..:-
// as apn nodes ko by 1 se count krtehh hai and positions ko "zero" se count krtehh hai , thus toh phir jaise "insert-at-zero-index" mtlb apnko first-node-k-phle insert krna hai and , jaise "insert-at-5-index" mtlb apnko 5th-node k aage insert krna hai..
//🖼️🖼️🖼️  see pic-1 For naming the Indexing:- 🖼️🖼️🖼️

// Case-1:- iNSERTING before first-node of the Linkedlist:-
// as eske liyeh sbse phle toh apn phle "Node" Create krenge and then usmeh simply requested-data insert krdenge.. then phir initialize its next-pointer to point on the first-node and then setup the first-pointer ko point on this newly-created node.

// Case-2:- iNSERTING at the position "x" of the LinkedList (suppose here x = 4):-
// here position is 4 , whereas it means that apnko after the 4th-node of linked-list insert krna hai.
// as eske liyeh bhi apn sbse phle toh "Node" create krenge and then usko requested-value se initialize krenge. as then apnko position-4 wale node k next-pointer ko ess new-Node se link krna hai and ess new-Node ko position-4 wale node k next-pointer jisko point kr raha hai ussseh point krna hai.
#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)

struct Node
{
    int data;
    Node *next;
};

int Count(Node *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}

//💲🍕 Case1:- 🍕💲
void Insertatfirst(Node **head, int value)
{
    Node *temp = new Node;
    temp->data = value;
    temp->next = *head;
    *head = temp;
}
// the Time-Complexity of this Function is O(1).

//💲🍕 2.Case2:- 🍕💲
void Insertatx(Node **head, int pos, int value)
{

    // as toh first we will get the pos-th Node, by doing this:-
    Node *posithNode = *head;
    fo(i, 0, (pos - 1)) // apnko loop (pos-1)-times hi chalana hota hai...
    {
        posithNode = posithNode->next;
    }
    Node *temp = new Node;
    temp->data = value;
    temp->next = posithNode->next;
    posithNode->next = temp;

    //📔📔Note-point:- pointer-which-are-used-for-accesing-node is simply called as "pointer" and pointer which are used for holding addresses are called "link"
}
// the Time-Complexity of this Function is O(n).
// whereas minimum-time is O(1) and maximum-time is O(n).\

//👿📔imp-Note-point:- checking whether this function works for inserting after first-node and also after last-node. (yes it is working..)

//🔥💲🍕 Combined-Function of Case1 and Case2 🍕💲🔥

void Insert(Node **head, int pos, int value)
{
    int length = Count(*head);
    if (pos < 0 || pos > length)
    {
        return;
    }
    else if (pos == 0)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->next = *head;
        *head = temp;
    }
    else if (pos > 0)
    {
        Node *posithNode = *head;
        for (int i = 0; i < (pos - 1); i++) // apnko loop (pos-1)-times hi chalana hota hai...
        {
            posithNode = posithNode->next;
        }

        Node *temp = new Node;
        temp->data = value;
        temp->next = posithNode->next;
        posithNode->next = temp;
    }
}
//👿📔imp-Note-point:- As toh apn ess "Insert"-fn ka use apni Linked-List Create krne k liyeh bhi kr sktehh hai as bas apnko insertion-creteria ka dhyn rkna hai... mtlb apn valid-index toh insert kr rhe hai na as per Creation of Linkedlist.

Node *CreateLL(int p1_size);
void TravLL(Node *p);
int main()
{
    Node *head = CreateLL(10);
    TravLL(head);
    // Insertatfirst(&head, 21);
    // TravLL(head);
    // Insertatx(&head, 4, 50);
    // TravLL(head);

    // Insertatx(&head, 1, 50);
    // TravLL(head);
    // Insertatx(&head, 15, 100);
    // TravLL(head);
    Insert(&head, 0, 200);
    TravLL(head);
    Insert(&head, 15, 500);
    TravLL(head);

    return 0;
}

void TravLL(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

Node *CreateLL(int p1_size)
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = 101;
    first->next = 0;
    last = first;

    for (int l = 0; l < p1_size; l++)
    {
        h = new Node;
        h->data = l + 10;
        h->next = 0;
        last->next = h;
        last = h;
    }
    return first;
}