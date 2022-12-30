//🔥💲🍕 as now YAHA apn "In-Order" Traversing "Recursively" krna dekhenge.. 🍕💲🔥
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Implementing-InOrder-Traversals (or mtlb Function for PreOrder-Traversals):-
// 🔥🔥🔥🔥

void InOrderdisplay(Node *root)
{
    if (root != 0)
    {
        InOrderdisplay(root->left);
        cout << root->data << " ";
        InOrderdisplay(root->right);
    }
}
// 🔥🔥🔥🔥
int main()
{

    return 0;
}