//🔥💲🍕 Implementing Stack using "linked-list" 🍕💲🔥
// AS apn phle yeh dekhenge ki apnko LInked-list meh konsi side se elements ko "insert" krna chaiyeh, as linked-list k 2-ends hoteh hai, and apn Linked-list se Stack bana rahe hai toh mtlb stack meh toh ek-hi side se insertion and deletion ho sktaa hai , as q ki apnko LIFO-discipline follow krna hota hai or ya apn yeh bhi bol sktehh hai ki stack ka other-end toh closed hota hai, thus toh apn only open-ended-side se hi insertion and deletion kr sktehh hai. toh yaha Linked-list k liyeh apn choose krenge ki apn Linked-list meh konsi side se insertion and deletion kare...
// now agr apn linked-list k starting meh har element ko insert krtehh hai toh apnko simply constant-time lagega and agr apn linked-list k ending meh element ko insert krtehh hai then apnko vaha ending meh node create krne k liyeh phle starting-se uss ending-node pe jana hoga and then phir apn yeh new-node create kr payenge.. mtlb apnko O(n)-time lagjayega. thus toh apn voh end-point choose krenge for insertion and deletion jismeh kam "kaam" ho mtlb kam time lgta ho. and voh hai "starting-end"-of-the-linked-list. thus toh "Insertion" krne wale ko Linked-list yeh starting-end as a open-end lagaega and "ending-end" as close-end ki tarah lagega.
// thus toh overall thik hai, apn Linked-list k "starting-end" ko hi as Open-end lenge..

//💲🍕 some-important-Conditions: 🍕💲
// 1.Empty-condition is that "Top == Null"
// 2.Full-condition is that ki stack-using-linked-list toh unlimited-size ka hota hai, but agr heap-full ho jata hai then phir bolteh hai ki stack-is-full toh eske k liyeh condition yeh hai ki:
//  "Node* t = new Node; "
// if(t == NULL), then mtlb stack-is-full q ki apnne new-node banaya but voh bana hi nhi.

// Now aab apn Operations banayenge.. on the "Linked-list-Stack"

#include <bits/stdc++.h>
using namespace std;

struct LinkedlistNode
{
    int data;
    LinkedlistNode *next;
};
struct Stack
{
    // int size;
    LinkedlistNode *top = NULL;
    // LinkedlistNode *node;
};

//💲🍕 LLStackCreate-Function 🍕💲
// void LlStackCreate(Stack &stk)
// {
//     stk.top->next = NULL;
//     // stk.node = NULL;
// }

//💲🍕 1.Push-operation: 🍕💲
void Push(Stack &stk, int value)
{
    // stk.node = new LinkedlistNode;
    LinkedlistNode *t = new LinkedlistNode;
    if (t != NULL)
    {
        t->data = value;
        t->next = stk.top;
        stk.top = t;
    }
    else
        cout << "Stack is Full" << endl;
}

//💲🍕 2.Pop-operation: 🍕💲
int Pop(Stack &stk)
{
    int x = -1;
    if (stk.top != NULL)
    {
        LinkedlistNode *p;
        p = stk.top;
        x = p->data;
        stk.top = p->next;

        free(p);
        return x;
    }
    return x;
}

//💲🍕 3.Peek-operation:- peek-operation is a finding a element at inputed-position.. 🍕💲
int Peek(Stack stk, int position)
{
    int x = -1;
    while (position--)
    {
        x = stk.top->data;
        stk.top = stk.top->next;
    }
    return x;
}
//💲🍕 4.StackTop-operation: 🍕💲
int StackTop(Stack stk)
{
    int x = -1;
    if (stk.top != NULL)
    {
        x = stk.top->data;
    }
    return x;
}
//💲🍕 5.IsEmpty-operation: 🍕💲
bool StackIsEmpty(Stack stk)
{
    if (stk.top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//💲🍕 6.IsFull-operation: 🍕💲
bool StackisFull(Stack stk)
{
    LinkedlistNode *p = new LinkedlistNode;
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//💲🍕  🍕💲
void PrintLlStack(Stack stk)
{
    // LinkedlistNode *p = stk.top;
    while (stk.top != NULL)
    {
        cout << stk.top->data << " ";
        // stk.top = stk.top->next;  (✔️ this-is-also-correct)
        Pop(stk);
    }
}
int main()
{
    Stack stk;
    Push(stk, 21);
    Push(stk, 34);
    //
    cout << "the linked-list stack is " << endl;
    PrintLlStack(stk);
    cout << "all awesome" << endl;

    // cout << endl
    //  << "the popped-value is " << Pop(stk) << endl;
    // cout << "the popped-value is " << Pop(stk) << endl;

    Push(stk, 41);
    PrintLlStack(stk);
    cout << "the value at position-2 in stack is " << Peek(stk, 2);
    cout << "the value at position-3 in stack is " << Peek(stk, 3);
    cout << "the stacktop is " << StackTop(stk) << endl;
    cout << "the stack is empty or not " << StackIsEmpty(stk) << endl;
    cout << "the stack is full or not " << StackisFull(stk) << endl;
    Pop(stk);
    Pop(stk);
    // Pop(stk);
    cout << "now stack is empty or not " << StackIsEmpty(stk) << endl;

    return 0;
}

//👿📔imp-Note-point:-AS toh now aab apne ess stack ko jaha bhi jarurat pade apnko "Stack" ki vaha use kr sktehh hai.