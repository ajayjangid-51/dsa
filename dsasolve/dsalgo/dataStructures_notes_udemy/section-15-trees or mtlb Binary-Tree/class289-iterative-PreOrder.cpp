//🔥💲🍕 As YAHA pe apn "PreOrder"-traversing ko "Iteratively" impelement krna dekhenge... 🍕💲🔥

// 🛎️⛑️⛑️🛎️Imp-baat:-  as apn ne phiche classes meh yeh dekha thaa ki apn jo kaam loop se kr sktehh hai, voh kaam apn "Recursion" se bhi kr sktehh hai, but jo kaam apn "Recursion" se kr sktehh hai voh kaam apn "Loop" se esehi nhi kr skteehh mtlb uss kaam ko krne k liyeh apnko "loop" meh "Stack" ka use krna hota hai. Thus toh mtlb yaha yeh "Tree-Traversals" ko "Iteratively" mtlb "Loop" se implement apn loop meh "Stack" ka use krke krennge.. as "Stack" ka use krne ka yeh logic hai ki jaise apne Recursion meh returning-stage ... 🛎️⛑️⛑️🛎️

// thus now apn "PreOrder" ka mental-Procedure( which is suitable for implemenatation-also:- mtlb that is why it is called algorithm (toh overall algorithm mtlb procedure which can be implement-programmatically not that procedure which cannot-be-impelement-programactically that's why in programming procedure is called "algorithm" bcoz programming meh apn vohi procedure dekhtehh hai jisko apn memory-meh-impelement kr sktehh hai and programmatically-implement kr sktehh hai according toh programming-logic.. )) dekhenge..

// as toh sbse phle apnko ek apna "Stack" le lena hai, then as apne shortcut-method( jo ki actually "algorithm" hi thaa ) k according hi woring ko implement krna hai, as toh jaise apn apne preOrder-shortcut-method k according sbse phle toh root-node ko access kr rhe the, then phir left-node and then phir left-node-k-left-node and soo.on upto left-node's-last-"Null-left-node" and then phir apn "right"-node pe move ho rhe the.. and so on.. thus toh mtlb apnko yehi esehh esi way meh hi implementation krni hai.
// So toh okay apn apni "Iterative-implementation" meh sbse phle root-node ko acces krenge then phir uske left-node and then left-node-k-left-node and..so on upto last-"null-left-node"-of-leftNode and then apn abhi jis left-node pe hai uske "rigth"-node ko access krenge , but now aab baat yeh hai ki apnko uss rightNOde pe jane k liyeh uska address toh chahiyehh na , thus toh esliy apn "Stack" ka use krnge apne "Loop" as in this manner ki jab bhi apnko agr left-is-present then "present"-node k left-node pe jana hai and uska data-print-krna hai and uss "present"-node ka address stk meh push krna hai.   kisi bhi "node" pe jayehh toh uska address apnko "Stack"-meh-Push krdena hai, and agr present-node ka left-is-not-present then apnko uske right-child pe jana hai and uska data-print-krna hai and stk-meh-se uske parent-ka-address pop krna hai and then vapis yehi process contine krna hai until stk-is-empty;
//🖼️🖼️🖼️  see pic-1 :- for visulizing-the-terative-procedure( mtlb algorithm )  🖼️🖼️🖼️
// and as baki process apn apni implementation se easily samajlenge...

// 🩱🩱actual-procedure..🩱🩱
// make "t" point on root , then move on the "left-side" of "t" and push-that-"t"-in-stack and if "left-side"-is-null then pop-out the address and take that in "t" and then move on "t.right"-side , and push that "t.right"-in-stack and repeat until the stack is empty. 🩱 as now question is that ki apn "t" se "right"-side meh kaise move kre..

//🌟🌟🌟  thus toh basically apnko krna kya hai ki apnko har-baar left-child pe move hona hai , and agr left-child nhi hai toh then phir right-child pe move ho jana hai , toh mtlb overall apnko krna kya hai ki apnko ek-pointer lena hai and uss pointer ko hamesa se starting se hi left-node pe move krna hai and uss left-node-ka-data-print-krna hai and and then agr left-node nahi hai then apnko uss pointer "p" ko right-node pe move krna hai and right pe move krne k liyeh apn hamesa visiting-node( as q ki voh bhi kisi toh parent hai na ) ka address apnko stack-meh-store-krlena hai (as stack meh isliy q ki apnko lastest-visited ko hi phle visit krna hai isiliy apn "stack"-ka-use kr rhe hai.) :- 🌟🌟🌟

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
void IterativePreOrdertraversal(Node *root)
{
    /*
    stack<Node *> stk;
    Node *p = root;
    stk.push(p);
    cout << p->data << " ";
    // do
    while (p || !stk.empty())
    {
        if (p->left)
        {
            p = p->left;
            stk.push(p);
            cout << p->data << " ";
        }
        else
        {
            p = stk.top();
            stk.pop(); // as apn abb-curret-parent-k-addres-ko-remove kr rhe hai q ki apn aab right-child pe hai toh mtlb aab apnko eski jarurat nhi hai stack meh.
            if (p->right)
            {
                p = p->right;
                stk.push(p);
                cout << p->data << " ";
            }
            else
            {
                if (!stk.empty())
                {
                    while (!stk.top()->right)
                    {
                        stk.pop();
                    }
                    if (!stk.empty())
                    {
                        p = stk.top()->right;
                        stk.pop();
                        stk.push(p);
                        cout << p->data << " ";
                    }
                    // p = stk.top();

                    // p = stk.top()->right;
                }
                else
                {
                    stk.pop();
                }
            }
        }
    }
    */

    // M2:- (actual's procedure:-)
    // Node *p = root;
    // stack<Node *> stk;
    // cout << p->data << " ";
    // stk.push(p);
    // while (!stk.empty())
    // {
    //     cout << p->data << " ";
    //     stk.push(p);

    //     if (p->left)
    //     {
    //         p = p->left;
    //         stk.push(p);
    //         cout << p->data << " ";
    //     }
    //     else
    //     {
    //         p = stk.top();
    //         stk.pop();
    //         p = p->right;
    //         // cout << cout << p->data << " ";
    //     }
    // }

    // M3:-
    Node *p = root;
    stack<Node *> stk;
    while (p or !stk.empty())
    {
        if (p)
        {
            cout << p->data << " ";
            stk.push(p);
            p = p->left;
        }
        else
        {
            p = stk.top();
            stk.pop();
            p = p->right;
        }
    }
}

void IinOrderTrav(Node *root)
{
    Node *p = root;
    stack<Node *> stk;
    while (p || !stk.empty())
    {
        if (p)
        {
            stk.push(p);
            p = p->left;
            // as mtlb yaha p se aab p->left pe move hogayehh,, as but abhi apn printing nhi krenge..as printing toh jab last-left-node-pe honeg tab krenge.. as jab apn last left-node pe honge then tab vaha yeh last-left-node apne childs k respect meh mid-element hoga and apn esko print krdenge as a left-node and then enke parent print krdenge and then phir parent-node k right-node pe move hojayenge.
        }
        else
        {
            p = stk.top();
            stk.pop();

            cout << p->data << " ";
            p = p->right;
        }
    }
}
//👿📔imp-Note-point:-Time-complexity of these iterative-functions are O(n) , wher "n" is no.of-nodes-in-trees. and explixit-stack( mtlb apna khud wala "Stack")-Size depends on the "height-of-tree"

void IpostOrderTrav(Node *root)
{
    Node *p = root;
    stack<Node *> stk;

    while (p || !stk.empty())
    {
        cout << " hello ji" << endl;
        if (p)
        {
            stk.push(p);
            p = p->left;
        }
        else
        {
            p = stk.top();
            stk.push(p);
            stk.pop();
            // Node *x = stk.top();
            p = p->right;
            cout << stk.top()->data << " ";
            // cout << p->data << " ";
        }
    }
}
Node *CreateBTree();
int main()
{
    Node *root = CreateBTree();
    IterativePreOrdertraversal(root);
    cout << endl;
    IinOrderTrav(root);
    cout << endl;
    IpostOrderTrav(root);

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