//🔥💲🍕 As now aab apn "Binary-Search-Tree" meh Searching krna dekhenge.. 🍕💲🔥
// Binary-Search-Tree meh "Searching" krne ka idea(actually it was also an algorithm ) toh apn dekh hi chuke hai... thus toh now aab apn uss algorithm ko implement krenge..
//🔔🔔 apn agr thoda acche se notice kare toh yeh "BST" meh "Searching" krna thoda kuch "Binary-Search" krne jaisa hi hai , mtlb apn har step meh half-of-tree ko skip krde rhe hai , and as like apn jab "Arrays" meh Binary-searcing krtehh thee tab vaha pe hi apn har step-cycle meh "half-of-the-array" skip ho jata thaa, as dono yeh "BST" meh searching and "Binary-searching" ka algorithm ek-dam alg hai but yeh ek-baat hai jo mtlb match kaha rhi hai, thus toh ess baat ki vajah se apn "Binary-search-Tree" meh searching krne ko "BST" meh "Binary-Searching" krna bhi bol sktehh hai, as but in general apn esseh boltehh nhi hai, but mtlb esseh bol sktehh hai. as q yeh pratha ban chuki hai ki "binary-search" mtlb voh algorithm jismeh apn mid-element pe jatehh hai and etc..etc.. isliy apn yaha "BST" meh searching ko "Binary-searching" krna nhi boltehh. 🔔🔔

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;  // left-node ka address
    Node *right; // right-node ka address
};
// Okay toh now we will implement "Searching" on "binary-search-Tree":-
// M1:- Recrusive-version:-

Node *RSearch(Node *root, int key)
{
    if (root)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            return RSearch(root->left, key);
            // mtlb jab bhi apnko recursion se exactly like iteration ki tarah directly node pe jump krna hai then return-statement meh recursive call krtehh hai. (and recursion meh return-statement meh recursive-call hai then eska mtlb ki voh exactly simple-loop hi tarah hi behave krta hai, whereas yaha simple-loop ka mtlb hai ki loop meh koi "stack", "queue" ka use nhi huaa hai.)
        }
        else
        {
            return RSearch(root->right, key);
            //👿📔imp-Note-point:-as agr apnko recursion ko same exactly as simple-loop ki tarah use krna hai then apnko recursion meh har cycle ko end hone k liyeh apnko return-statement meh second-updated-cycle ko call krna hai, and jab recursion ko loop ki tarah se use krna mtlb recursion-meh returning-stage nhi hoga, as mtlb ek recusive-call-puri-khatam hogi tabhi phir new-recursive-call start hogi and yeh kaam apn recursion-function ki return-value meh recursive-call krke kr sktehh hai.  and phir esmeh function ki return value hogi mtlb main fn-call ki jagah jo value hogi, as voh actually just-recursive-called-function ki return-value hogi , as q ki har cycle meh fn-call-statement simply kisi-or fn-call-statement-se-replace ho rhi hoti hai.👿📔
        }
    }
    else
    {

        return NULL;
    }

    //👿📔imp-Note-point:-as ess recursion meh recursive-call k baad meh koi statement-nhi hai , thus toh mtlb yeh exactly as same loop ki tarah hai.
}

// M2:- Iterative-version:-
Node *ISearch(Node *root, int key)
{
    Node *p = root;
    while (p != NULL)
    {
        if (p->data == key)
        {
            // searched = p;
            return p;
        }
        else if (p->data > key)
        {
            p = p->left;
        }
        else
        {
            p = p->right;
        }
    }
    return NULL;
    // Note-point:- jaise ki apn yaha ess ISearch-fn ko dekh sktehh hai , ki yeh ISearch-fn ek simple loop hai, and agr ess ISearch-fn ko apnko recursively implement krna hai then apn simply recursion-meh voh return-staement recursive-call krke yeh kaam simply kr sktehh hai.
}

//🔔🔔 Time-Analysis-of-above-procedure(mtlb above algorithm) or mtlb above-Function:- 🔔🔔
// as toh ess funnction ki time-complexity depend krti hai height-of-tree( which is in actual as a "linked-list" ki jaise hi hai mtlb apn yeh "Searching" meh ek particular List meh hi toh chl k kr rhe hai "🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️", thus toh YAHA tree meh apn ess cheez ko "height" pe depend hona boltehh hai, whereas Linkedlist meh ess baat ko "linkedlist-ki-length" pe depend hona boltehh.).
// thus toh mtlb time-complexity of this procedure is O(h) , whereas "h" is height-of-binary-tree. now yaha pe worst-case and best-case bhi define honge, as height-of-binary-tree can be from log(n)(min-height) to (n)-maximum-height,(where "n" is number-of-nodes in "BST"). and for worst-case(mtlb if key is present at bottom-level-of-tree or key-is-not-present(mtlb for unsuccesfull search ) is O(logn) or O(n) as it depend on the BST that what-height-of-is-that.)
//
Node *CreateBTree();
int main()
{
    Node *BSTroot = CreateBTree();
    // Node *searched = RSearch(BSTroot, 20);
    Node *searched = ISearch(BSTroot, 110);

    cout << searched << endl;

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
    root->left = 0; // or NULL
    root->right = 0;
    que.push(root);

    cout << "Okay , Now Input the elements Level-wise from left-to-right as left-child , right-child , left-child-right-child.. and so..on " << endl;
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