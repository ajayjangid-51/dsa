//🔥💲🍕 Now apn "Level-Order-Traversing" dekhenge.. 🍕💲🔥
// as "Level-order-Traversing" mtlb traversing the nodes of the tree level-by-level , mtlb intially level-1 , then traversing level-2 , then level-3 and soo..on upto last-level-of-Tree.

// as toh "Level-Order-Traversing" meh apn sbse root-node ko visit krna hai and then printing-its-data , then apn root-node-left-child ko visit krke uska data-print-krenge and then phir root-node-right-child ko visit krke uske data-ko-print-krenge then phir root-node-k-lef-child-k-left-child ko visit krke uska data print krenge and then root-node-k-left-child-right-child ko visit krke uske data-ko print krenge and soo...on...

// as thus toh "Level-order-Traversing" meh apnko "Queue" ka use krna pdta hai , thus toh mtlb apn "Level-Order-Traversing" "Queue" ka use krke krtehh hai.
// thus toh mtlb jaise apnne "Queue" ka use krke "Tree" create kiya thaa , as same usi exact-way meh yaha krenge , as apnki baar apn "node"-create krne k bajayehh "node->data"  print krenge..
//🖼️🖼️🖼️  see pic-1 :- for understanding for "level-order-traversing" via using "Queue" 🖼️🖼️🖼️.
// as toh ess "Procedure" ka idea yeh hai ki apn har nodes ka address store krlenge and then phir unn address-pe-visit krke unke data-ko-print-krdenge. as toh yeh kaam apn "queue" krke bohat acchi tarah and ek-dam sahi krenge.. as like this:-

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void LevelOrderdisplay(Node *root)
{
    /*
    queue<Node *> que;
    Node *p = 0;
    que.push(root); // as yeh apn yaha loop-k-bahar isliy kr rhe hai takki apne loop ki condition bhi maintain and apna loop acche se and easily chale..
    while (!que.empty())
    //👿📔imp-Note-point:- as yeh (!que.empty())-statement meh hamesa apnko ess "Not(!)" ko statement-k-baad-meh-read krna hai , thus toh esseh understanding sahi and easy hogi.
    {
        p = que.front();
        que.pop();
        cout << p->data << " ";
        if (p->left)
        {
            que.push(p->left);
        }
        if (p->right)
        {
            que.push(p->right);
        }
    }
    */

    // or apn esko eseeh bhi likh sktehh hai:-
    /**/
    Node *p = root;
    queue<Node *> que;
    cout << p->data << " ";
    que.push(p);
    while (!que.empty())
    {
        p = que.front();
        que.pop();
        if (p->left)
        {
            cout << p->left->data << " ";
            que.push(p->left);
        }
        if (p->right)
        {
            cout << p->right->data << " ";
            que.push(p->right);
        }
    }
}
//👿📔imp-Note-point:- as toh Overall Tree-ki-Traversing krne ka yehi idea hai ki simply ek pointer-lelo and then uss pointer ko simply Tree k sare nodes pe moves krvatehh raho.

Node *CreateBTree();
int main()
{
    // int height = 2;
    Node *root = CreateBTree();
    LevelOrderdisplay(root);
    return 0;
}

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
        cout << "Enter the left-child" << endl;
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
        cout << "Enter the right-child" << endl;
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
