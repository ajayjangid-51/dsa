//🔥💲  As toh now aab apn "binary-tree" ko implement krenge mtlb "binary-tree" ko code krenge.. 💲🔥
//  as toh apn yaha se continue krenge... as phle apn array , string , matrixces , linked-list , stack and queues padhenge and phir espe aayenge...

//🔥💲 AS NOW aab apn "binary-tree" ki implementation krenge mtlb apn binary-tree ko memory meh allocate krenge. 💲🔥

#include <bits/stdc++.h>
// #include "queue.h"  //🛎️⛑️⛑️🛎️ as yeh user-defined-header-files ko apn esseh include krtehh hai , and ek-baat orr ki yeh "header-file" current-file k same foler meh honi chahiyehh.. 🛎️⛑️⛑️🛎️
using namespace std;

#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)

struct Node
{
    int data;
    Node *left;
    Node *right;
};
/*
struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
};
*/

Node *CreateBTree()
{
    int x = -1;
    queue<Node *> que;
    cout << "Enter the root-node" << endl;
    cin >> x;
    Node *root = new Node;
    root->data = x;
    root->left = 0;
    root->right = 0;
    que.push(root);

    cout << "Okay , Now Input the elements Level-wise from left-to-right as left-child , right-child , left-child-right-child.. and so..on " << endl;
    while (!que.empty())
    {
        Node *p = que.front();
        que.pop();
        Node *temp = 0;
        cout << "Enter the left-child of:- " << p->data << endl; // as apne "p->data" esliy likha hai q ki abhi "p"-pointer is present on the this particular-node and apn ess particular-node meh eske lchild and rchild fill kr rhe hai.
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->left = 0;
            temp->right = 0;
            p->left = temp;

            que.push(temp);
        }
        cout << "Enter the right-child of:- " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->left = 0;
            temp->right = 0;
            p->right = temp;

            que.push(temp);
        }
    }

    return root;
}

void PreOrderdisplay(Node *root)
{
    if (root != 0)
    {
        cout << root->data << " ";
        PreOrderdisplay(root->left);
        PreOrderdisplay(root->right);
    }
}
void InOrderdisplay(Node *root)
{
    if (root != 0)
    {
        InOrderdisplay(root->left);
        cout << root->data << " ";
        InOrderdisplay(root->right);
    }
}

void PostOrderdisplay(Node *root)
{
    if (root != 0)
    {
        PostOrderdisplay(root->left);
        PostOrderdisplay(root->right);
        cout << root->data << " ";
    }
}
//👿📔imp-Note-point:-As toh yeh upar jo bhi "Recursion"-functions apn ne banayeh hai , as yeh apnne phle "Copy" meh "Recursion-tracing-Tree" banake banayehh hai.
//📔📔Note-point:- Thus toh yeh Recursive and Iterative functions for "Traversing" the Treee , apnko simply voh main-concept of finding preorder , indorder and postorder ka dhyn rkhna hai , as mtlb yeh Functions usi k upar based hai and same uss idea pe hi designed hai.
int main()
{
    Node *root = CreateBTree();
    deb(root->data);
    deb(root->left->data);
    deb(root->right->data);
    deb(root->left->left->data);
    deb(root->right->right->data);
    PreOrderdisplay(root);
    cout << endl;
    InOrderdisplay(root);
    cout << endl;
    PostOrderdisplay(root);

    return 0;
}