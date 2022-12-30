//🔥💲🍕  🍕💲🔥
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
int Countll(Node *head);

Node *FindMid(Node *head)
{
    //💲🍕 M1:- Finding the mid-element by doing traversing for 2-times:- 🍕💲
    /*
    Node *midNode = 0;
    int len = Countll(head);
    // the mid-position will be "ceil-value-of-len/2"
    fo(i, 0, ceil(len / 2))
    {
        head = head->next;
    }
    midNode = head;
    return midNode;
    */

    //💲🍕 M2:- finding the mid-element in only-one-Traversing:- 🍕💲
    /*
    Node *p = 0, *q = 0;
    // here p will move by 1-step and q will move by 2-step.
    p = q = head;
    while (q)
    {

        q = q->next;
        if (q)
        {
            q = q->next;
            // p = p->next;
        }
        if (q)
        {
            p = p->next;
        }
        // else
        // {
        //     break;
        // }
    }
    return p;
    */
    //👿📔imp-Note-point:-as Method1 and Method2 meh working is exactly same , bas farak hai toh Traversing ka , thus mtlb bas apnko Traversing meh thoda jada time lg rha hai in Method1 as compare to Method2 , as q ki method1 meh apn 2-times traversing kr rhe hai and method2 meh apn only 1-time traversing kr rhe hai.

    //💲🍕 M3-Using-Stack:- 🍕💲
    // and then poping-out the values for "floor-value-of-(stack-size/2)"-times
    stack<Node *> stk;
    while (head)
    {
        stk.push(head->next);
        head = head->next;
    }
    int midindex = stk.size() / 2;
    deb(midindex);
    fo(i, 0, midindex + 1)
    {

        stk.pop();
    }
    return stk.top();
    //🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️
    //🌟🌟🌟  as sabhi functions ki time-complexity is O(n)-only bas farak yeh hai ki enn methods meh apn Linkedlist ko kitne times traverse krke mid-element find kr rhe hai jaise , 1st-Method meh apnko 2-times linkedlist ki traversing krni pd rhi hai, whereas 2nd-method meh apnko 1-time-only traversing kr rhe hai , and 3rd-Mehtod meh linkedlist ki toh apn traversing 1-time kr rhe hai , but phirr (n/2)-times apn stack k pop-function bhi run kr rhe hai. :- 🌟🌟🌟
}

void DisplayLL(Node *head);
Node *Createll(int arr[], int size);

int main()
{
    int arr[] = {8, 6, 3, 9, 10, 4, 2, 12};
    Node *head = Createll(arr, 8);
    DisplayLL(head);
    Node *mid = FindMid(head);
    deb(mid->data);

    return 0;
}

void DisplayLL(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int Countll(Node *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *Createll(int arr[], int size)
{
    Node *head = new Node;
    Node *last = 0;
    head->data = arr[0];
    head->next = last;
    last = head;
    fo(i, 1, size)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = 0;
        last->next = temp;
        last = temp;
    }
    return head;
}
