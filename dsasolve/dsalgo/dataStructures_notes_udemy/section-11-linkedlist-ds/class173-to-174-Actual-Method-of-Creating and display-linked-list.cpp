//🔥💲🍕 Now aab apn "Linked-List" ko "Actual and very-Efficient"-Method se Create krna dekhenge mtlb create krenge and phir "Traversing" bhi krna dekhenge.. 🍕💲🔥

#include <iostream>
using namespace std;

//💲🍕 Formally and Efficiently Creating-Linked-LIst 🍕💲
// as toh now phle apn LInked-list banayege...
// as toh Linked-list create krne k liyeh phle apn the Linked-list banane ka concept dekhenge mtlb voh Effcient-idea dekhenge ki apn ess tarah easily and acurately and formally linked-list ko bana sktehh hai.
//                               Concept of creating Linked-List:
// as toh Linked-list banane k liyeh apnko simply 3-pointers chahiyeh hoteh hai: which are named as per their use:- first(or head)-pointer , last-pointer , helper-pointer(as yeh important hai bcoz eski help se hi linked-list) bana sktehh hai.. and then yeh esseh krenge...

// as sbse phle toh apn "Linked-list-Node" banayenge..
struct Node
{
    int data;
    Node *next;
};
// }* first = 0;

// Node* first = new Node;
// first->  (as apn globally koi structure-container ya strcuture-type pointer allcoate kr rahe then voh apn esseh nhi kr sktehh mtlb apn assignation nhi kr skteh hai as mtlb apn esko kisi function meh krengge..

Node *CreateLinkedList(int p1_size)
{
    Node *first = 0, *last = 0, *h = 0;
    first = new Node;
    first->data = 101;
    first->next = 0;
    last = first; // as last-pointer mtlb pointer-to-last-NOde; ( as toh abhi toh first-NOde hi last-Node hai.)
    // and bas LinkedList-Creation meh apnko bas last-node pe hi najar rkhni hai.

    for (int i = 0; i < p1_size; i++)
    {
        h = new Node;
        h->data = i + 2;
        h->next = NULL;
        last->next = h;
        last = h; // as or apn esseh bhi kr skteh hai..
        // last = last->next;
    }

    return first;
};
// As toh aabse apnko kabhi bhi Linked-list banani hai then voh apn hamesa simply ess CreateLinkedList-fn() se hi banayenge...

// }
int main()
{
    Node *firsti = CreateLinkedList(10);

    //                                "Traversing-Linked-list:-"
    // as toh NOw aab apn Linked-list ki Traversing krenge mtlb linked-list pe ghumenge and toh for traversing apn ek extra-pointer lenge and uss pointer ko ghumayenge for the linked-list.

    // while(p != NUll){

    //      cout << p->data;
    //     int sum;
    //     sum += p->data; ( and many more cheeze.. )
    //     p = p->next;
    // }
    // AS toh apn traversing se kuch bhi bohat sareh kaam kr sktehh hai..
    // as for creating a linked-list apn ek-function banayenge, and that will create linked-list.

    cout << "the value in 1st-node of the linked-list or mtlb the 2-element of the linked-list is " << firsti->data << endl;
    cout << "the value in 2nd-node of the linked-list or mtlb the 2-element of the linked-list is " << firsti->next->data << endl;
    cout << "the value in 3rd-node of the linked-list or mtlb the 2-element of the linked-list is " << firsti->next->next->data << endl;
    cout << firsti->next->next->next->data << endl;
    cout << firsti->next->next->next->next->data << endl;
    // as yeh toh thi simple mtlb more-manually traversing...

    //💲🍕 Traversing-Linked-List:- 🍕💲
    // now aab apn automatic mtlb loop se traversing krenge..
    Node *temp = firsti;
    while (temp != 0)
    // while("condition-for-continuation" and "not-condition-of-termination")
    // or like this also can be..
    // while(temp->next != 0)  // as esseh temp-pointer last-node pe rukjayega and upar-wali se temp-pointer just-beyond-the-last-node.
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    //👿📔imp-Note-point:- as this is the only loop-which is only used for traversing-the-linkedList , as mtlb apnko LinkedList-Traversing krni hai, then apnko traversing esseh hi krtehh hai.
    // and "traversing" se apn bohat sare kaam kr sktehh hai about the linked-list jaise counting-of-nodes , sumation , searching , sorting etc..etc... jo ki apnne phle bhi baat kr chuke hai.

    return 0;
}

// as now aage apn recursive-approach dekhenge of traversing the Linked-list.
