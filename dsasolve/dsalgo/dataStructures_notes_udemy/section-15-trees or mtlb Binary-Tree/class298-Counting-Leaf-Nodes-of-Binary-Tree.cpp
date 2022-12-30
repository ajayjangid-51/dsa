//🔥💲🍕 As Now YAHA pe apn "Binary-Tree" meh total-no.of "Leaf-Nodes" , "non-leaf-nodes" , and "nodes-with-degree-1" and "nodes-with-degree-2" etc.etc.. find-out krna dekhenge.. 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
int totalLeafNodes(Node *root)
{
    if (root)
    {
        if (root->left == 0 && root->right == 0)
        {
            return totalLeafNodes(root->left) + totalLeafNodes(root->right) + 1;
        }
        return totalLeafNodes(root->left) + totalLeafNodes(root->right);
    }
    return 0;
}
// noti
// Iterative-Version of counting-leaf-Nodes:-
int countLeaves(Node *root)
{
    // Your code here
    int x = 0;
    Node *p = root;
    stack<Node *> stk;
    while (p || !stk.empty())
    {
        if (p)
        {

            stk.push(p);
            p = p->left;
        }
        else
        {

            p = stk.top();
            stk.pop();
            if (!p->right && !p->left)
            {
                x++;
            }
            p = p->right;
        }
    }

    int nodeswithdeg2(Node * root)
    {
        if (root)
        {
            if (root->left && root->right)
            {
                return nodeswithdeg2(root->left) + nodeswithdeg2(root->right) + 1;
            }
            return nodeswithdeg2(root->left) + nodeswithdeg2(root->right);
        }
        return 0;
    }
    int nodeswithdeg1(Node * root)
    {
        if (root)
        {
            if (root->left || root->right)
            {

                if (root->left && root->right)
                {
                    return nodeswithdeg1(root->left) + nodeswithdeg1(root->right);
                }
                else
                {
                    return nodeswithdeg1(root->left) + nodeswithdeg1(root->right) + 1;
                }
            }
            return nodeswithdeg1(root->left) + nodeswithdeg1(root->right);
        }
        return 0;
        // this can also be return as like this:-

        // M2:- using exclusive-or-Operator(XOR-operator):-
        // the condition is == LR' + L'R
        if (root)
        {
            if (root->left ^ root->right)
            {
                return nodeswithdeg1(root->left) + nodeswithdeg1(root->right) + 1;
            }
            return nodeswithdeg1(root->left) + nodeswithdeg1(root->right);
        }
        return 0;
    }

    int nonleafnodesOrnodeswithdeg1and2(Node * root)
    {
        if (root)
        {
            if (root->left || root->right)
            {
                return nonleafnodesOrnodeswithdeg1and2(root->left) + nonleafnodesOrnodeswithdeg1and2(root->right) + 1;
            }
            return nonleafnodesOrnodeswithdeg1and2(root->left) + nonleafnodesOrnodeswithdeg1and2(root->right);
        }
        return 0;
    }
    int main()
    {

        return 0;
    }

    // complete that remaing-height-function.