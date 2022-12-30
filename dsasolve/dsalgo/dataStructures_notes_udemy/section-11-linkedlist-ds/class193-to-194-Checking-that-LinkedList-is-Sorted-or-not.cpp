//🔥💲🍕 As NOw aab apn LinkedList ko check krenge that it is sorted or not:-  🍕💲🔥
// as yeh waal kaam toh apnne "arrays" meh bhi kiya hai, and yeh kaam krne ka concept toh LinkedList meh same hi hai that , we will check linewise that present-element is smaller than its successive-element.

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)

struct Node
{
    int data;
    Node *next;
};

bool CheckSorted(Node *head)
{
    while (head)
    {
        if (head->next && head->data > head->next->data)
        // if (head->data > head->next->data && head->next)
        //👿📔imp-Note-point:- as if-statement meh condition meh statements ka farak-pdata hai. toh mtlb apnko ess baat ka dhyn rkhna hai.
        {
            cout << "No, LinkedLIst is not Sorted" << endl;
            return 0;
        }

        head = head->next;
    }
    cout << "Yes , LinkedList is sorted" << endl;
    return 1;
}

// or we can also do like this:-
bool M2CheckSorted(Node *head)
{
    int x = INT_MIN;
    while (head)
    {
        if (head->data > x)
        {
            x = head->data;
            head = head->next;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 1;
}
Node *CreateLL(int p1_size);
void Display(Node *head);
int main()
{
    Node *head = CreateLL(5);
    Display(head);
    bool x = CheckSorted(head);
    // deb(CheckSorted(head));
    deb(x);
    deb(M2CheckSorted(head));

    return 0;
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