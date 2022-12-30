//🔥💲🍕 Now YAHA pe apn LinkedList meh Loop present hai ya nhi hai Find krna dekhenge, as mtlb apn yeh find krna dekhenge ki given "LinkedList" is "Linear-LinkedList"(mtlb singly-Linear-Linkedlist) or "Looped-LinkedList" or "Circular-LinkedList". 🍕💲🔥
// Whereas "Linear-LinkedList" mtlb jo Linkedlist "linear" ho and actual defination k according boleh toh voh "linkedlist" jiske Last-node k next-link ki value "NULL" ho.
// And "Looped-LinkedList" mtlb voh Linkedlist jiske LastNode k next-pointer ki value "NULL" na ho.

// LinkedList meh loop hona mtlb linkedList ka last-node ka "Null" na hona. mtlb voh kisina kisi "Node" of thie linkedlist ko hi point kr raha hai. as yeh sure hai ki voh LinkedList ka "last-node" hi hoga and and yeh bhi sure hai ki voh agr linkedlist meh loop hai mtlb linkedlist ka last-node "null" nhi hai , then mtlb voh linkedlist meh se kisi Node ko point kr raha hoga, as q ki agr voh kisi orr "node" ko point kr rha hai then mtlb phir voh "node" toh linkedlist ka last-node nhi hoga na.

// thus toh LinkedList meh Loop find out krne ka idea yeh hai ki...
// idea is that on car-race-on-circular-track and if car are moving with diff constant-speed then then surely they will meet atleat one-time or more also., thus toh similary apn bhi 2-pointer lelenge jo ki linkedlist ko traverse krenge at diff-speeds.. and agr linkedList meh loop hoga , then mtlb voh pointers kabhi-kabhi toh milenge.. thus toh jab voh milenge apn loop ko break krdenge and return-1 kr denge which will denote that there is loop in the linkedlist. and in bich meh koi bhi pointer "p" or "q" null hojayehh then apn vaha simply loop ko break kdenge and return 0 krdenge , which will denote that there is no loop in the Linkedlist.

//📔📔Note-point:- And jab Last-Node "Null" na hoke mtlb "first-Node" of the linkedlist ko point kr rha ho then mtlb uss LinkedList meh Loop hai , but uss LinkedList ko apn specially "Circular-LinkedList" boltehh hai.
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

//🔔🔔 Approach of the isLoop-function. 🔔🔔
// as toh intially sbse phle apnko 2-pointers "P" and "q" lene hai, which are pointing to the first-node of LinkedList, as then apnko "p"  ko toh by-one move krna hai and "q" ko by-2 move krna hai. and as jab dono "p" and "q" pointer agr vapis se miltehh hai then sure hai ki there is circular-track mtlb there is a LOOp in linkedlist. and if anyone of the "p" and "q" become Null (whereas "q" will become "Null" first as this is moving fast than "p" ) then mtlb the track is "Linear" mtlb there is no "Loop" in the LinkedList.
bool isLoop(Node *p)
{
    Node *q = p; // as yaha "q" will move with greater speed than "p"-pointer.
    p = p->next;
    q = q->next;
    // q = q->next ? p->next : ;
    q = q ? q->next : q;
    //📔📔Note-point:- as yaha apnko thoda dhyn rkhna hai,, ki q ki value kahi "NULL" toh nhi hogi hai na... as agr "q" NULL hojayega then mtlb yaha "q->next" ka toh koi mtlb hi nhi hoga na( q ki vaha koi Node hi nhi hai then q->next kis cheez ka ), and apna program khamakhaa crash hojayega..
    while (p && q)
    {

        // q = p->next;
        if (q == p)
        {
            cout << "YES, Loop is there" << endl;
            return 1;
        }
        p = p->next;
        q = q->next;
        q = q ? q->next : NULL;
    }
    cout << "NO, Loop is not there" << endl;
    return 0;
}
//🔔🔔 ess function ki time-complexity is O(n) hai, as apn linkedList ko traverse hi toh kr rhe hai.. 🔔🔔

void Display(Node *p);
Node *CreateLL(int p1_size, int arr[]);
int main()
{
    int arr[4] = {2, 8, 10, 15};
    int brr[5] = {4, 7, 12, 14, 20};
    Node *head1 = CreateLL(4, arr);
    // head1->next->next->next = head1->next;
    head1->next->next->next = head1;
    //🔔🔔 as ess "head1->next" ko apnko simply esseh samajna hai ki "head1 ka next aage wala Node". 🔔🔔
    //📔📔Note-point:-  as jaise hi apnne ess LinkedList meh Loop create kiya yeh LinkedList aab Node-with-10-data-value tk hi hai. toh mtlb yeh baat hamesa essliy true hai ki Linkedlist ka Last-node is if not "Null" then sure hai ki uss LinkedList meh "Loop" hai. and as apnne programmtically bhi find krna dekh liya ki linkedlist meh LOOp hai k nhi.
    // Display(head1);
    bool x = isLoop(head1);
    deb(x);
    Node *head2 = CreateLL(5, brr);
    // Display(head2);
    bool y = isLoop(head2);
    deb(y);
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

//🔔🔔 do-while_loop ka use vaha hota hai jaha, mtlb essi kuch process ho ki apnko repetation after after ek step krke phir repetation krna hota hai then vaha apn do-While-LOOP ka use krtehh hai.  🔔🔔
