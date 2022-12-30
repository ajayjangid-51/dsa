//🔥💲🍕 As NOW YAHA pe apn Searching in LINKED-list for a given value(or mtlb key) dekhenge.. 🍕💲🔥
//👿📔 ek-imp-baat ki apn Linked-LIst meh "binary-Search" nhi krteh hai, as bcoz "binary-Search" meh apn har-baar middle-element-of-the-list ko access krtehh hai , whereas apn "Linked-List" meh "middle-element" ko directly access nhi kr sktehh hai, as mtlb apnko first-element se hi middle-element tk jana hoga , thus toh mtlb esa krne k liyeh toh apnko phir bohat-jada working krni hogi mtlb apnko bohat jada time lgjayega (as array meh yeh kaam apna constant-time meh hi hojata tha mtlb ek-statement-meh hi ho jata thaa). thus toh isiliy apn "Linked-List" meh "Binary-search" nhi krtehh.
// Thus toh overall mtlb apn LinkedList meh "Linear-Searching" hi krenge..

#include <iostream>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl

struct Node
{
    int data;
    Node *next;
};

void TravLL(Node *p);
//💲🍕 1.Iterative-approach of Linear-Searching 🍕💲
Node *SearchLL(Node *p1, int p2_key)
{
    // int x = -1;
    while (p1)
    {
        // x++;
        if (p2_key == p1->data)
        {
            //return x; // returning index of Searched-Key. or
            // otherwise we can return the address of that node and yeh return-type jada sahi and accha rhega.
            return p1;
        }

        p1 = p1->next;
        // shortcut-point: as if-statement meh jab bhi return ho toh mtlb apnko else-statement likhne ki jarurat nhi hai, as mtlb we can write directly those statements , which we were supposed to write in else-statement.
    }
    return NULL;
}

//💲🍕 2.Recursive-approach of Linear-Searching 🍕💲
Node *Rsearch(Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }

    if (key == p->data)
    {
        return p;
    }

    return Rsearch(p->next, key);
}

//🔥💲🍕 As apn jantehh hi hai ki "Linear-Searcing" meh apn "Linear-Search" ko thodi-kuch-hadd-tk improve kr sktehh hai, toh mtlb apn essi cheez mtlb "Improvement-in-Search-for-LinkedList" dekhenge. and as apn jantehh hi hai ki "improvement" krne ka idea yehi hai ki either follow "Transposition" or follow "Move-to-Head"-idea.  🍕💲🔥
// 1."Transposition" meh apn succuesfull-searched-element ko uske previous-element swaping kr detehh hai. and,
// 2."Move-to-Head" meh apn sucessfull-searched-element ko "head-element" mtlb "head-node" se swaping kr deteehh hai.
// Thus as toh apn LinkedList meh data-ko-move krna avoid krtehh hai , as mtlb apn Nodes-ka-movement krna accept krtehh hai , thus toh phir mtlb yaha apn ess "Improvement-in-Linear-Search" meh apn "Move-to-head"-idea ko follow krenge..

// thus toh esko krne ka apna simple mental-approach toh yeh hai ki apn searched-Node ko uthake first-meh-place krde..
// now esko programmtically sahi se krne k liyeh phle toh apnko "Node-Insertion-in-LInkedList-concept-idea" follow krna hoga , mtlb apnko phle searched-node ki breaking and then accordingly linking also..
// and programming se krne k liyeh apnko phle breaking krne ki jarurat nhi hai , as mtlb apn directly hi new-values assign krdenge..
// p-previous->next = p->next;
// p->next = head; and
// head = p;

/* debug this:-
Node *ImprovedSearch(Node **head, int key)
{

    TravLL(*head);
    Node *p = *head;
    // deb((*p)->data);
    // deb((*p)->next->data);
    Node *q = 0; // as this pointer is to get the previous-Node of succesfull-searched-Node , as this will always
    Node *searchednode = 0;
    while (p)
    {
        if (key == p->data)
        {
            searchednode = p;
            break;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    if (searchednode != NULL)
    {
        // q->next = searchednode->next;

        q->next = p->next;
        p->next = *head;
        *head = p;
        cout << "okay good bye" << endl;
        return p;
    }
    // return searchednode;
    // return searchednode;

    return NULL;

    // 🌷🌷🌷🌷 Tip:- as mtlb jab koi pointer meh koi dusra pointer assign hota hai(jaise p = q) toh uska ek-dam simple and satikk mtlb yeh hota hai ki "q" jisko point kr raha hai , as aab "p" bhi usko hi point kr raha hai.//🌷🌷🌷🌷
}
*/

Node *ImprovedSearch(Node **head, int key)
{

    TravLL(*head);
    /* Test-program to test working-of-double-pointer
    // cout << "Say hello" << endl;
    // deb(*head);
    // Node *p = new Node;
    // deb(p);
    // *head = p;
    // cout << "Say end" << endl;
    */
    Node *p = *head;
    Node *q = 0;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = (*head);
            *head = p;
            return p;
        }
        q = p;
        p = p->next;
    }

    return NULL;
    // Thus toh mtlb apn ess tarah Linear-Search ko improve kr sktehh hai.

    // 🌷🌷🌷🌷 Tip:- as mtlb jab koi pointer meh koi dusra pointer assign hota hai(jaise p = q) toh uska ek-dam simple and satikk mtlb yeh hota hai ki "q" jisko point kr raha hai , as aab "p" bhi usko hi point kr raha hai.//🌷🌷🌷🌷
}

Node *CreateLL(int p1_size);
int main()
{
    Node *head = CreateLL(10);
    TravLL(head);
    cout << endl;
    // deb(SearchLL(head, 121));

    // deb(SearchLL(head, 11));
    Node *x = SearchLL(head, 11);
    Node *y = SearchLL(head, 121);
    if (x)
    {
        cout << "yes , Key is found " << x->data << endl;
    }
    else
    {
        cout << "NO , key is not Found" << endl;
    }
    deb(SearchLL(head, 121));
    deb(SearchLL(head, 11));
    // deb(Rsearch(head, 11));
    deb(ImprovedSearch(&head, 16));
    deb(ImprovedSearch(&head, 11));
    // deb(ImprovedSearch(&head, 11)); // find-here why there is error here...
    deb(ImprovedSearch(&head, 17));
    // deb(SearchLL(head, 11));

    return 0;
}

void TravLL(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
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