//🔥💲🍕 as now YAHA pe apn "Pre-Order"-Traversal ko "Recursively" implement krenge.. 🍕💲🔥
//👿📔imp-Note-point:- As q ki "Tree-Traversals " ko recursions meh implement krna bohat short and easy hota hai.
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Implementing-PostOrder-Traversals (or mtlb Function for PreOrder-Traversals):-
// 🔥🔥🔥🔥

void PreOrderdisplay(Node *root)
{
    if (root != 0)
    {
        cout << root->data << " ";
        PreOrderdisplay(root->left);
        PreOrderdisplay(root->right);
    }
}

//🔔🔔 📔📔 Recursion-function can only easily implemented only first making the tracing-tree as per what we want and Recursion works then jo Recursion-tree banta hai usko dekh kr phir apn easily recursion-Function create easily kr  skteh hai.. toh mtlb before writing the code of Recursion-fn first make "tracing-tree" 🔔🔔
// as like this which is shown in pic1- and pic2:-
//👿📔imp-Note-point:-As toh yeh upar jo bhi "Recursion"-functions apn ne banayeh hai , as yeh apnne phle "Copy" meh "Recursion-tracing-Tree" banake banayehh hai.
// 🔥🔥🔥🔥

int main()
{

    return 0;
}