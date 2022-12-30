//🔥💲🍕 as toh Now aab apn "Doubly-LinkedList" create krna and Display krna dekhenge... 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (int i = start; i < n; i++)
#define foll(i, start, n) for (ll i = start; i < n; i++)
#define trav(a) for (auto x : a)

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

Node *CreateDll(int arr[], int n)
{
    Node *head = new Node;
    Node *last = 0;
    head->prev = 0;
    head->data = arr[0];
    head->next = last;
    last = head;

    fo(i, 1, n)
    {
        Node *temp = new Node;
        temp->data = arr[i];
        temp->next = 0;
        temp->prev = last; // as esko hamesa apnko esseh samajna hai,, ki "last" jisko point kr rha hai , as aab "temp-prev" bhi usko hi point kr rha hai.
        last->next = temp;
        last = temp;
    }
    return head;
}
void DisplayDll(Node *head)
{
    Node *q = 0; // here "q" is tail-pointer , where this is needed for displaying the linkedlist, in reverse-order.
    while (head)
    {
        q = head;
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    while (q)
    {
        cout << q->data << " ";
        q = q->prev;
    }
    cout << endl;
}

void DisplayReverse(Node *head)
{
    while (head->next)
    {
        head = head->next;
    }
    while (head)
    {
        cout << head->data << " ";
        head = head->prev;
    }
    cout << endl;
}

int CountDLL(Node *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}
int main()
{
    int arr[] = {3, 51, 123, 31, 5};
    Node *head = CreateDll(arr, 5);
    DisplayDll(head);
    DisplayReverse(head);
    return 0;
}
