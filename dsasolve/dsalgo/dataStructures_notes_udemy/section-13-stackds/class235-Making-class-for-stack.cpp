//🔥💲🍕 NOW apn stack-Class-template banayenge... 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

class LLNode
{
public:
    int data;
    LLNode *next;
};
class Stack
{
private:
    LLNode *top;

public:
    stack() { top == NULL }
    void Push(int value);
    int Pop();
    void Display();
    void StackTop();
    void IsEmpty();
    void IsFull();
};
void Stack::Push(int value)
{
    LLNode *p = new LLNode;
    if (p != NULL)
    {
        p->data = value;
        p->next = top;
        top = p;
    }
    else
        cout << "stack is Full" << endl;
}

// Okay---toh thik hai phle "Stack" wala kaam pura sultatehh hai and phir aage dekhtehh hai... "queues"

void Stack::Pop()
{
}

int main()
{

    return 0;
}