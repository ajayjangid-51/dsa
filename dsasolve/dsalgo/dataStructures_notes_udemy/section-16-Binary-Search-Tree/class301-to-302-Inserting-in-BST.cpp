//🔥💲🍕 AS now aab apn "Binary-Search-Tree" meh "insertion" krna dekhenge , mtlb yeh dekhenge ki apnko "Binary-search-Tree" meh insertion kis tarah se , mtlb kis way meh mtlb kaha and kaise krna hai ki Insertion krne k baad meh bhi voh Tree "Binary-search-tree" hi bana rhe, mtlb "Binary-Search-Tree" ka kuch distruction na ho. 🍕💲🔥

// as yeh "insertion" apn ek simple example leke samajenge..
// steps:-
// step1- search for "key", ki it is already present or not, if it is then do nothing and if it is not , then follow the insertion-procedure.
// step2: as yaha pe apn 2-pointers lenge "p" and "q" whereas "q" is tail-pointer of "p".
//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
//📔📔Note-point:-  as apn galat thee yeh sochne meh ki apnko insertion krne k liyeh nodes-meh-elements ko shift krna hoga.. toh mtlb esa kuch nhi hota hai. as "BST" meh from left-to-right per the width chale then apnko elements increasing order meh milenge.. as q ki voh essi manner meh created hotehh hai.

// Note-point:- insertion meh apn "inserting-element" ko tree k niche(mtlb last-level) meh insert krtehh hai, but thoda sa tarike se. and voh tarika yeh hai ki apn "inserting-element" ko root-node se compare krtehh huyehh leaf-node tk puchtehh hai and then uss leaf-node k left-child meh ya right-child meh insert kr detehh hai.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// M1:-Recursive-version:-
Node *RInsertinBST(Node *root, int value)
{
    //📔📔Note-point:-as apn ess "Recursive-fn" se apni "iterative"-apporach se implement kr rhe hai , as mtlb apn ne apni iterative-approach meh koi explicit(mtlb alg se)-stack nhi liya thaa , thus toh mtlb esss recursion ko toh easily implement kr sktehh hai..
    if (root == NULL)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->left = 0;
        temp->right = 0;
        return temp;
    }
    if (value < root->data)
    {
        root->left = RInsertinBST(root->left, value);
        // as toh mtlb jab root!=NULL , hoga then vaha pe toh root->left meh jis node k liyeh call kr rhe hai usko hi vapis usi meh hi linking kr denge.. and agr other-wise root==NULL hoga, then phir apn voh new-node assigned kr denge..
    }
    else if (value > root->data)
    {
        root->right = RInsertinBST(root->right, value);
    }

    return root;
    /*
    // else
    // {
    //     if (value == root->data)
    //     {
    //         return;
    //     }
    //     else if (value > root->data)
    //     {
    //         return RInsertinBST(root->right, value);
    //     }
    //     else
    //     {
    //         return RInsertinBST(root->left, value);
    //     }
    // }
    // return;
    */
}

// M2:-iterative-version:-
void InsertinBST(Node *root, int value)
{
    Node *p = root, *q = 0;
    while (p != NULL)
    {
        if (value == p->data)
        {
            return;
        }
        else if (value < p->data)
        {
            q = p;
            p = p->left;
        }
        else
        {
            q = p;
            p = p->right;
        }
    }
    Node *temp = new Node;
    temp->data = value;
    temp->left = 0;
    temp->right = 0;
    if (value < q->data)
    {
        q->left = temp;
    }
    else
    {
        q->right = temp;
    }
}
//🔔🔔  as toh yeh "insertion-fn" same-as-mostly-as "searching" ki tarah hi hai.. 🔔🔔
int main()
{

    return 0;
}