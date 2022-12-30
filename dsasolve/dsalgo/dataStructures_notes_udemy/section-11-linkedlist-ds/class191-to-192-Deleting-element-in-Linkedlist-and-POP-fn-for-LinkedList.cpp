//🔥💲🍕 as toh Now YAHA pe apn "LinkedList" meh se  Element(mtlb obivously "Node" ) Delete krna dekhenge 🍕💲🔥
// one-Notepoint ki "Linked-List" meh apnko yeh baat hamesa dhyn rkhni hai ki "Element" mtlb "Node" hi q ki "node" meh "element(mtlb data-value)" present hota hai.

//🔔🔔  Now toh "LinkeList" meh se "element" mtlb "node" ko "Delete" krne ka idea yeh hai ki:-  🔔🔔
// as thus toh linked-list meh apnko linked-list ki size decrease krni ho(mtlb kuch kisi "Nodes" ko delete krne ho) then apn simply phle deleting-node ki dono side se linking hata k uske previos-and-alge-node ki linking kr denge and then usss deleting-node ko delete kr denge..
// as toh now aab apn ess mental-approach ko programatically implement krenge..
// as implementation meh apnko yeh linking-breaking wala kaam nhi krna as apn toh simply directly new-values assigna kr denge..
//🔔🔔 AS toh "Deletion-process" meh 2-baateh ho skti hai ki:-
// 1st. agr apnko "first-node" delete krna ho. (as ess case meh apnko additionally "head-pointer" ko bhi change krna hoga)
// 2nd. "Deleting-the-Node-other-then-first-Node" means deleting a node at a given position ( as ess case meh apnko additionally "head-pointer" ko change nhi krna hoga.)
// 🔔🔔

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = 0, *last = 0;

int NodesInLL(Node *p1);

int Delete(int pos)
{
    // as here we are giving the 1-indexing to the LinkedLIst:-
    // int len = NodesInLL(head);
    int x = -1;
    if (pos < 1)
    {
        return -1;
    }
    else if (pos == 1)
    {
        Node *p = head;
        head = head->next;
        // free(p);  or
        x = p->data;
        delete p;
    }
    // else if (pos > 1 && pos <= len)
    else
    {
        Node *p = head;
        Node *q = 0; // this is tailing-pointer mtlb which always being the tail of P-pointer.
        // for (int i = 0; i < pos - 1; i++)
        for (int i = 0; i < (pos - 1) && p; i++) // as toh by-using this condition we don't want that upar=wali else-if-condition. (!not-workiing rechekc-it :- ohh yes, it is working as we have to use if-statemtn-niche-downwards for that "p" is valid or not.)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {

            // x = p->data;
            x = q->next->data;
            //q->next = p->next; // or mtlb by doing the work just by using only single-one-pointer:-
            q->next = q->next->next;
            // deb(p);
            free(p); // or
            // free(q->next->next); // as this is not possible bcoz in q is already firstly asigned with q->next->next;. thus toh mtlb "Deletion" meh 2-pointers ki jarurat toh padegi hi padegi.
        }
    }
    return x;
}
// as toh ess Delete-function ki time-complexity is O(n).
void Display(Node *head);

//💲🍕 2. POP-Function() , a function which delete the node of the Linkedlist from the back-of-the-linkedlist:- 🍕💲
void PopLL(Node *head)
{
    Node *last = head;
    int count = NodesInLL(head);
    // deb(count);
    int x = 0;
    Node *secondlast = 0;
    while (last->next != NULL)
    {
        // cout << "dick dicki bro" << endl;
        x++;
        if (x == count - 1)
        {
            secondlast = last;
        }
        last = last->next;
        // cout << "2" << endl;
    }
    cout << "ohh hoo brother" << endl;
    secondlast->next = 0;
    free(last); // mtlb yeh last-pointer jisbhi container ko point kr raha hai usko delete or mtlb free krdo, and one-more-note point ki yeh ess baat se indepedent hai ki koi dusra pointer bhi agr uss container ko point kr rha hai tab bhi voh container delete hojayega. and voh pointer by "0" se assign ho jata hai or otherwise voh pointer- dangling ban jata hai.. (as yeh wali baat apn aage dekhenge..)
    last = 0;
    //👿📔imp-Note-point:- as yeh pointer-"p" ki existence toh eske scope pe depend krti hai , mtlb jab yeh fucntion end hoga , tab yeh "p"-pointer , "last"-pointer etc.etc.. sab apne aap hi delete hojayenge... but voh yeh pointer jis heap-memory-container ko point kr rhe hai, voh delete nhi honge.. as unko toh apnko krna padega. and ek-orr important-baat ki jaise apn kisi functio nki return-value koi pointer krtehh hai na , toh mtlb voh pointer return nhi hota, as mtlb uss pointer meh jo value hai(mtlb address) hai voh return hota hai( and baaki aseh commanly toh apn essehi bol deteh hai ki yeh function pointer-return karega, whereas actual mtlb ki yeh function pointer-ki-value return karega and ek=baat or ki jo function ka return-type mtlb function-jo-value-return-karegana uska datatype.) and orr bhi baki sare-variables meh bhi esa hi hota hai jaise koi function "int" return kr raha hai toh mtlb voh int-type-value return kr rha hai , thus toh mtlb usko store krne k liyeh phle apnko ek-uske-return-type-value-k-according ek particular container lena hota hai. and jab function end hota hai toh usmeh jitne bhi stack-containers hai voh sab automaticaly vanish mtlb delete ho jatehh hai.
    // free(NOde)

    //🌟🌟🌟  free(pointer)-statement krne ka mtlb ess pointer meh jo address hai na.. voh address-wala-container ko delete or mtlb vanish krdo.. thus toh mtlb voh-particular-address-wala container vanish hojayega... And yaha voh pointer-container jo ki stack-memory meh  hai.. voh delete nhi hoga , as voh apne scope k according apna-aap hi delete hojayegaa... 🌟🌟🌟
    //🌟🌟🌟  The actual concept of pointer you will understand at linkedlist 🌟🌟🌟
}
void InsertLast(int x);
int main()
{

    InsertLast(3);
    InsertLast(7);
    InsertLast(9);
    InsertLast(15);
    InsertLast(20);
    Display(head);
    Delete(3);
    Display(head);
    Delete(8);
    Display(head);
    cout << Delete(-1) << endl;
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