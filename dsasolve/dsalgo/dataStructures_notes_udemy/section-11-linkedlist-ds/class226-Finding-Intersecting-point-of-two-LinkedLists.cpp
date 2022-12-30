//🔥💲🍕  🍕💲🔥
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)

struct Node
{
    int data;
    Node *next;
};
void DisplayLL(Node *head);
Node *Createll(int arr[], int size);

Node *FindIntersection(Node *head1, Node *head2)
{
    stack<Node *> st1, st2;
    while (head1)
    {

        st1.push(head1->next);
        head1 = head1->next;
    }
    while (head2)
    {

        st2.push(head2->next);
        head2 = head2->next;
    }
    Node *rtn = 0;
    while (st1.top() == st2.top())
    {
        rtn = st1.top();
        st1.pop();
        st2.pop();
    }
    // st1.pop()
    return rtn;
}
int main()
{

    int arr[] = {9, 6, 4, 7, 3, 8};
    int brr[] = {1, 2, 8};
    Node *head1 = Createll(arr, 6);
    Node *head2 = Createll(brr, 3);
    DisplayLL(head1);
    DisplayLL(head2);
    head2->next->next->next = head1->next->next->next;
    DisplayLL(head2);
    //📔📔Note-point:-  as apnko hamesa ek baat dhyn meh rkni hai ki "arrow-pointer" k left-side meh hamesa ek koi pointer hi hoga and right-side meh voh pointer jis container ko point kr rha hai uss container ka koi sub-container hoga. and "arrow-operator(->)" ko apnko hamesa as a jaise-apn-apni-copy-meh-"link"-show-krtehh-hai same vasehi hi read krna hai, as eska actual mtlb yehi hai.

    Node *inscpoint = FindIntersection(head1, head2);
    deb(inscpoint->data);

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
