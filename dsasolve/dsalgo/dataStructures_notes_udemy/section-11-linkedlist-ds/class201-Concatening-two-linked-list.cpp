//🔥💲🍕 as Now aab apn 2 or more LinkedList ko concatenate( mtlb joining mtlb appending ) krenge.. mtlb unn 2 or more linkedList ko simply connect krke unki ek single-LinkedList bana lenge.. 🍕💲🔥

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

void Concate(Node *head1, Node *head2)
{
    // Node *x = head1;
    while (head1->next)
    {
        head1 = head1->next;
    }
    head1->next = head2;
    //👿📔imp-Note-point:- as yeh head1->next jo container hai jo "heap-container" meh hai , thus mtlb yeh function se update hojata hai, whereas function se stack-container wale containers update nhi hotehh(jaise yaha head1 and head2 stack-container meh hai isiliy yeh update nhi hotehh). as ess baat ka apnko acche se dhyn rkhna hai q ki esseh "baat" k bina kabhi apnko confusion ho skta hai.
}

Node *CreateLL(int p1_size);
void Display(Node *p);
int main()
{
    Node *head1 = CreateLL(4);
    Display(head1);
    Node *head2 = CreateLL(8);
    Display(head2);
    Concate(head1, head2);
    Display(head1);

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
Node *CreateLL(int p1_size)
{
    Node *first, *last, *h; // or
    // Node* head , *tail , *h
    first = new Node;
    first->data = 10;
    first->next = 0;
    last = first;

    for (int l = 0; l < p1_size; l++)
    {
        h = new Node;
        h->data = l * 10 + l / 5;
        h->next = 0;
        last->next = h;
        last = h;
    }
    return first;
}