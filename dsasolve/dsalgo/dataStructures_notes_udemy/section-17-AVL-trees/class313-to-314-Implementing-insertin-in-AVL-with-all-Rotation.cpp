//🔥💲🍕 As toh now aab apn "LL"-Rotation ko implement krenge... mtlb "LL"-rotation ka Code likhna dekhenge.. mtlb apn "AVL"-Tree meh "insertion" krne ko implement krenge🍕💲🔥

// okay so think about this that how we can implement this "LL"-rotation-algorithm( mtlb procedure)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left;
    int data;
    //👿📔imp-Note-point ki apnko "AVL"-Tree k node meh uss "node" ka "bf (mtlb balance-factor)" rkhna hota hai, thus toh mtlb apn "AVL"-Tree k "node" meh "bf"-container bhi define krenge... takki mtlb apnko har baar alg se "AVL"-Tree k nodes ka "bf" calculate nhi krna hoga, mtlb apn jab "node"-create krenge tabhi uska "bf" assign krdenge usmeh.
    // Thus toh mtlb apn har "node" se Tree ki height "store" krke rkhenge.. takki apn phir easily "bf" nikal sake.. of any-node by just simply subtractiog (node->left->height - node->right->height) which will be the "bf" of that "node". jaise for example, apne pass 3-nodes hai A , B , C. which are linked in this manner:-                         A
    //                              / \
    //                             B   C
    // So, toh mtlb we can find the "bf" of "A" by simply doing like this:-
    //                               (A->left->height - A->right->height)
    // so, toh isilliy apn phir "AVL"-tree k har node meh "height"-container bhi rkhenge.. as like this:-
    int height;

    //🔔🔔 apn ek point notice krenge ki "height-of-node" mtlb uss node se jo "Sub-Tree" define hota hai na uski "height". 🔔🔔
    Node *right;
} *root = 0;

int Nodeheight(Node *p)
{
    int hl, hr;
    hl = p && p->left ? p->left->height : 0;
    hr = p && p->right ? p->right->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
    // see this that how this-fn is working...
}

int balanceFactor(Node *p)
{
    int hl, hr;
    hl = p && p->left ? p->left->height : 0;
    hr = p && p->right ? p->right->height : 0;
    return hl - hr;
    // return (Nodeheight(p->left) - Nodeheight(p->right)); // see this that why we can't do this.. for this "balance-factor"-fn.
}

Node *LLrotation(Node *p)
{
    Node *pl = p->left;
    Node *plr = p->left->right;
    pl->right = p;
    p->left = plr;
    // p->left = p->left->right;
    // p->left->right = p;
    pl->height = Nodeheight(pl);
    p->height = Nodeheight(p);
    //🔔🔔 as plr's height will be remain same only. 🔔🔔
    if (p == root)
    {
        root = pl;
    }

    return pl;
}
Node *LRrotation(Node *p)
{
    Node *pl = p->left;
    Node *plr = p->left->right;
    pl->right = plr->left;
    p->left = plr->right;
    plr->right = p;
    plr->left = pl;
    plr->height = Nodeheight(plr);
    p->height = Nodeheight(p);
    pl->height = Nodeheight(pl);
    if (p == root)
    {
        root = plr;
    }
    return plr;
}
Node *RRrotation(Node *p)
{
    Node *pr = p->right;
    Node *prl = p->right->left;
    p->right = prl;
    pr->left = p;

    pr->height = Nodeheight(pr);
    p->height = Nodeheight(p);
    // prr->height = Nodeheight(prr);
    if (p == root)
        root = pr;
    return pr;
}
Node *RLrotation(Node *p)
{
    Node *pr = p->right;
    Node *prl = p->right->left;
    p->right = prl->left;
    pr->left = prl->right;
    prl->left = p;
    prl->right = pr;

    p->height = Nodeheight(p);
    pr->height = Nodeheight(pr);
    prl->height = Nodeheight(prl);
    if (p == root)
    {
        root = prl;
    }

    // Node *p = 0;
    return prl;
}

// Okay toh now aab apn "AVL"-tree meh "Insertion" ko implement krenge..
//📔📔Note-point:- AS toh jaise ki apn jantehh hi hai ki "AVL" is only "Binary-Search-Tree" but bas farak itna hi hai ki yeh "AVL" balanced-BST hai, thus toh mtlb "insertion" krne ka process toh same hi hoga, but bas ek-additional baat aayegi ki agr insertion krne pe Tree meh koi bhi "node" imbalance hota hai toh apnko uss "node" ko balance bhi krna hota hai, by simply performing out "Rotations", thus toh mtlb apnko "AVL"-Tree k "insertion" k saat-saat Rotation bhi krna ho skta hai.

Node *RInsertinAVL(Node *root, int value)
{
    if (root == 0)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->height = 1; // as mtlb yeh temp-root-as-leaf-node hi hoga, thus toh eske parent-k-respect meh apn left-sub-tree ki height-dekhenge then that will be "1" only, thus toh isiliy apnn 1-assign krdiya.
        //🔔🔔 counting height from "1". 🔔🔔
        temp->left = 0;
        temp->right = 0;
        return temp;
    }
    if (value > root->data)
    {
        root->right = RInsertinAVL(root->right, value);
    }
    else if (value < root->data)
    {
        root->left = RInsertinAVL(root->left, value);
    }

    // root->height = max(height-of-left-subtree - heigth-of-right-subtree)
    root->height = Nodeheight(root);
    //📔📔Note-point:-  as toh ess statement-se tree-k-har node ki height ek-dam sahi se update mtlb assign hojayegi.

    // And now aab apn har-node ka "br" bhi check krenge.. and then phir according apn "Rotation" krenge.. as like this:-
    // int br = Nodeheight(root->left) - Nodeheight(root->right);
    // int br = balanceFactor(root);
    if (balanceFactor(root) == 2)
    {
        if (balanceFactor(root->left) == 1)
        {
            // as toh then we will perform "LL"-rotation:-
            // return LLrotation(root);
            //📔📔Note-point:-  as apn new-updated node return kr rhe hai..
            return LLrotation(root);
        }
        else if (balanceFactor(root->left) == -1)
        {
            // as toh then we will perfrom "LR"-rotation:-
            return LRrotation(root);
        }
    }
    else if (balanceFactor(root) == -2)
    {
        if (balanceFactor(root->right) == 1)
        {
            // then we will perform "RL"-rotation:-
            return RLrotation(root);
        }
        else if (balanceFactor(root->right) == -1)
        {
            // then mtlb we will perfrom "RR"-rotation:-
            return RRrotation(root);
        }
    }

    return root;
    //📔📔Note-point:- as ess recursive-function-ki-main-call ki return-value toh voh root-value hi hogi.
}

int main()
{
    root = new Node;
    root->data = 50;
    root->left = 0;
    root->right = 0;
    // Node *p = RInsertinAVL(root, 100);
    cout << root->data << endl;
    RInsertinAVL(root, 60);
    cout << root->data << endl;
    RInsertinAVL(root, 55);
    // Node *p = RInsertinAVL(root, 200);
    // cout << p->data << endl;
    cout << root->data << endl;

    return 0;
}

//👿📔imp-Note-point:-Trees meh operations "Recursively" kafi easy rheta hai....

//👿📔imp-Note-point:- as toh "height-Balancing" ki jo main hai voh hai ki "height-balance" hone ka mtlb ki mtlb bina-faltu meh "Tree" ki height increased nhi hai mtlb ki abhi bhi kuch links-vacant hai and unn links meh abhi orr nodes aa sktehh hai thus toh mtlb abhi abhi tree ki height jitni minimum ho skti hai utni hai. and "imbalaced"-tree ka mtlb ki ess tree ki jitni minimum-height ho skti hai utni eski hai nhi. thus toh mtlb ess baat aab yeh bol sktehh hai ki apnko Tree ko just simply dekh(mtlb ki agr kuch links-khali hai and pr bina-faltu meh height-increased hai mtlb unn links ko fill krke height-decrease ki ja skti hai then mtlb voh imbalanced-tree hai or ohterwise mtlb links ko fill krne pr height-meh koi change nhi hai then mtlb voh "tree" balanced hai.) ke bhi bata sktehh hai ki yeh "tree" balanced hai ya "imbalanced" hai.

//👿📔imp-Note-point-3:- as q ki apn har baar insertion krne k saat-saat "Rotation" bhi krtehh hai isiliy apne "Tree" meh kisi bhi "node" ka "bf" greater than 2 or less than -2 nhi aata. as mtlb jab bhi "bf" 2 or -2 aata hai apn usko turant hi resolve kr detehh hai.