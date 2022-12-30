//🔥💲🍕 as toh Now from the given "preOrder-and-InOrder"-Traversal or from the given "PostOrder-and-InOrder"-traversals se apna exact-particular "tree" generate krna dekhenge..  🍕💲🔥

// as toh sbse phle apnko "inorder"-traversal ko as-it-is likh lena hai. and then phir apnko given- "preOrder" or "PostOrder" se first-element lena hai and usko "inorder" meh serach krna hai, and search krke usko ek-Node create krke usmeh daal dena hai, then again phir given "postOrder" or "preOrder" meh se 2nd-element choose krna hai usko phle first left-node meh search krna hai and agr voh nhi milta toh phir usseh phir right-node meh search krna hai and element milenge pr ek-new-Node create krke usko usmeh daal dena hai. and then uske left-side wale elements ko left-node meh rkhna hai and right-side wale element ko right-node meh rkhna hai(mtlb left-side meh element mila hai toh usseh left-node meh rkhna hai and same baat for right-node ) and so..on upto all "preorder" or "postorder" is scanned.

//** main-idea yeh hai ki preorder meh toh phle root-element aata hai , thus toh jaise a,b,c,d,e elements de rkhe hai then yeh sure hai ki "a" is parent of b,c,d and e. and inorder meh dekhe toh jaise a,b,c,d,e meh jaise element "c" hai toh eska mtlb hai ki "c" "d" and "e" se phle aaya hai mtlb sure "c" "d" and "e" ki left-side meh hi hai or mtlb sure hai ki "d" and "e" , "c" ki right-side meh hi hai.
// So thus toh jaise apn ne "preorder" meh element "a" liya toh aab apnko "inorder" ki help se yeh dekhna hai ki "a" k left-meh kon and "a" k right-meh konse elements hai. and jo elements "a" ki left-side meh hai unko apn apne "a" k left-child meh put krenge and jo elements "a" ki right-side meh hai unko apn apne "a" k right-child meh put krenge. **

// and yehi same tarike se apn "postorder" construction define kr sktehh hai ki jaise apn jaantehh hai ki postorder meh phle left,right and then root aata hai. so toh postorder se construction krne k liyeh apn last se start krenge.. mtlb root-node se hi start krenge. jaise "preorder" meh bhi toh apnne root-node se hi start kiya tha..

//🖼️🖼️🖼️  see pic-1 :- for understanding that how to generate "Tree" from the given-Traversals 🖼️🖼️🖼️
//🖼️🖼️🖼️  see pic-2 :- for some general-analysis and time-Complexities-analysis about the above-procedure of Generating-a-Tree-from given needed "Traversals":-  🖼️🖼️🖼️

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *GenerateTreefromTraversal(int traversal1[], int Inorder[])
{
}
int main()
{

    return 0;
}