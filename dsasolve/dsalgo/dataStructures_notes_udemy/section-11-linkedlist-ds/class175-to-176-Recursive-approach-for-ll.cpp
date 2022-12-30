//🔥💲🍕 Traversing the Linked - list by using "Recursion" or mtlb Recursion - Idea : - 🍕💲🔥
// AS toh simply mtlb ki apn recursive-function likhenge(mtlb banayenge) for Traversing the Linked-list:-
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl

struct Node
{
    int data;
    Node *next;
};

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
void RecursiveDisplay(Node *p1)
{
    //👿📔imp-Note-point:- as Recursion meh (mtlb Recursive-function meh ) base-condition can be for "terminating"-the-Recursive-call or it also can be for "Continuation".
    // as jaise yaha pe yeh ess Recursion meh base-condition is for continuation-of-Recursion-cycle.
    if (p1 != 0)
    {
        cout << p1->data << endl;
        p1 = p1->next;
        RecursiveDisplay(p1);
    }
}

// AS toh Recursive-algorithm or mtlb Recursive-process ki time-complexity is O(n) only (as it is making the recursive-call for "n+1"-times ) , where as space-Complexity is also O(n) , thus toh apn toh iterative-process  mtlb iterative-algorithm hi follow krenge "Traversing-the-LinkedList"
// one-point ki recursive-fn meh recursive-call k baad koi statement likhe huee hai then voh statements toh returning-time(returning-time mtlb function meh jo function-call-statement hoti hai na, voh statement-line jab exectue hojayeh uss time- ko apn returning-time boleth hai and yeh returning-time jo naam hai voh "stack"-k-respect meh diya gaya hai. thus toh jab bhi apnko kuch essa kaam krna ho ki apnko pata hai ki yeh recursive-call apn jo answer chahteh voh calcuate krlega thus toh mtlb apn phir uss recursive-call-statement-line k baad uss answer ko leke aage kaam kr sktehh hai, and yeh wali baat har sub-recursive-call k liyeh bhi valid hai and jo fibonacci apn krtehh hai na voh apn esseh hi krtehh hai. thus toh allover mtlb apnko yeh baat dhyn meh rkhni hai jab bhi apn recursion use krne ki baat karee toh.) pe executin hogi mtlb jab stack-frame just delete or destroy hone wali hogi tab usseh just phle voh kaam hoga, as returning or decending time mtlb jab sari call ho chuki hogi mtlb jitni call honi chahiyeh mtlb jitne stack-frame bani chahiyeh utni sari ban chuki hogi and now aab jo last-stack-frame hai usmeh koi staement hai toh voh run krdo and yeh run krna mtlb ki returning-time pe run krna.  and
// recursive-call k phle koi statement likhi huee hai then then ascending-time pe hogi mtlb
// and ascending pe kuch krna mtlb ki yeh kaam krdo and aage apnkok abhi dusri call bhi krni mtlb dusri-upar-stack-frame-bhi-create krni hai , thus yeh time hota hai ascending time, as toh simply mtlb ki yeh kaam krdo as aage apnko other-stack-create krni hai and decending-time yeh hota hai ki yeh kaam krdo as aage apnko yeh stack-frame delete krni hai.

// toh returning or deceding-time wala kaam stack-frames delete hone k time k time hota hai as per one-by-one stack-frame.

// As yaha ess function ka ki mtlb recursive-approach ki time-complexity and space-complexity both are the order(n) .
// as mtlb recursive-approach meh n-nodes k liyeh n+1 stack-frames create hoti hai as mtlb ki n+1 times function-call hoti hai.

//💲🍕 Now just making Little-Change to above Recursive-Display-function:- 🍕💲
void RecursiveDisplayChng(Node *p)
{
    while (p->next != NULL)
    {
        // cout << "hello ji" << endl;
        // p = p->next;
        RecursiveDisplayChng(p->next);
        // cout << " 1 ";
        // deb(p->data);
        // RecursiveDisplayChng(p);
        // cout << p->data << " ";
    }
}
//👿📔imp-Note-point:- as toh esseh apni Linked-list Reverse-Order meh print hogi. thus toh mtlb apn essi idea se Linked-list-Reversing bhi kr sktehh hai.
// and one-point-more-to-be-noted that: recursive-call k baad koi statement mtlb returning-time pe run hone wali statement mtlb essmeh jo sbse innermost or mtlb sbse-last-ending-recursive-call hogi uska result(mltb uski statement ka result mtlb uske inputed-passed-parameter k according results) sbse phle include hoga or mtlb sbse phle print-hoga. toh mtlb apn yeh baat bhi bohat acchce se and sahi se dhyn rkhni hai.
int main()
{
    Node *firsti = CreateLL(10);
    // RecursiveDisplay(firsti);
    cout << "all good brother" << endl;
    RecursiveDisplayChng(firsti);
    return 0;
}

// as apn ek baat note krenge about "Threading" as Thread ka mtlb hota ki ek particular stack-memory and thread-2 ka mtlb koi ek aur stack-memory. as like this...
// debug-area meh "thread" meh mtlb stack meh 0-index mtlb currently active stack-frame,as mtlb ki abhi control-cursor uss stack-frame pe hai.