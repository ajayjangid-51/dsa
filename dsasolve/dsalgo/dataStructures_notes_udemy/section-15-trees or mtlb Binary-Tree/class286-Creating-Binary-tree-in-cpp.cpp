//🔥💲🍕 Creating "Binary-Tree" via using c++ OOps-styles mtlb apn "c++-classes" ka krke apna Binary-tree-Create function create krenge.  🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};
// Here "Tree" mtlb obviously "Binary-Tree":-
class Tree
{
    // private:
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void CreateTree();
    void PreOrderdisplay(Node *p); // as apn enn functions meh koi parameter nhi lenge.. as mtlb apn enn functions k andar hi voh variable-pointer for root-node banalenge.. as toh overal apna function accha dikhega and easy and smooth to use hoga yeh apna function:- but but apna yeh function recursive-fn hai , thus toh mtlb yeh esmeh parameter lena hi hoga. as toh phir esseh without-parameter se krne k liyeh apnko ek alg-function banana hoga and usmeh phir ess function ko call krna hoga as like this:-
    void preOrder()
    {
        PreOrderdisplay(root);
    }
    void InOrderdisplay(Node *p);
    void PostOrderdisplay(Node *p);
    // void LevelOrderdisplay(Node *p);
    // int height();
};
int main()
{
    Tree t;
    t.CreateTree();
    // Node *rot = t.root;
    t.PreOrderdisplay(t.root);
    cout << endl;
    t.InOrderdisplay(t.root);
    cout << endl;
    t.PostOrderdisplay(t.root);
    cout << endl;
    return 0;
}

void Tree::CreateTree()
{
    int x = -1;
    queue<Node *> que;
    cout << "Enter the root-node" << endl;
    cin >> x;
    root->data = x;
    root->lchild = 0;
    root->rchild = 0;
    que.push(root);

    // cout << "Okay , Now Input the elements Level-wise from left-to-right as left-child , right-child , left-child-right-child.. and so..on " << endl;

    // noti height-iterative-fn
    while (!que.empty())
    {
        Node *p = que.front();
        que.pop();
        Node *temp = 0;
        cout << "Enter the left-child of:- " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->lchild = 0;
            temp->rchild = 0;
            p->lchild = temp;

            que.push(temp);
        }
        cout << "Enter the right-child of:- " << p->data << endl;
        cin >> x;
        if (x != -1)
        {
            temp = new Node;
            temp->data = x;
            temp->lchild = 0;
            temp->rchild = 0;
            p->rchild = temp;

            que.push(temp);
        }
    }
}

void Tree::PreOrderdisplay(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        PreOrderdisplay(p->lchild);
        PreOrderdisplay(p->rchild);
    }
}

void Tree::InOrderdisplay(Node *p)
{
    if (p)
    {
        PreOrderdisplay(p->lchild);
        cout << p->data << " ";
        PreOrderdisplay(p->rchild);
    }
}
void Tree::PostOrderdisplay(Node *p)
{
    if (p)
    {
        PreOrderdisplay(p->lchild);
        PreOrderdisplay(p->rchild);
        cout << p->data << " ";
    }
}
// void Tree::LevelOrderdisplay(Node *p)
// {
// }
// int Tree::height()
// {

//     Node *p = root;
// }
