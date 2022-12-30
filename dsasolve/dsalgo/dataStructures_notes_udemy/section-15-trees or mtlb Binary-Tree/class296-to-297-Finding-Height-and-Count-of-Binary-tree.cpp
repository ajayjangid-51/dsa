//🔥💲🍕 As now aab apn "Binary-Tree" ki "height" and "Count(mtlb "no-of-nodes")" find krna dekhenge... 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// int heightofBT(Node *root)
// {
// }

int CountofBT(Node *root)
{
    // M1:-(using "Static"-varialble )
    /*
    static int count = 0; // as yeh static-variable ki jo intialization-statement hoti hai voh sirf ek baar hi run hoti hai.
    if (root != NULL)
    {
        count++;
        CountofBT(root->left);
        CountofBT(root->right);
    }
    return count;
    */

    // M2:-(without using "Static"-variable)  // as agr apn static-varialbe ka use nhi kr rhe then phir apnko return-statement ka use krna hoga for doing that work, as mtlb q ki phir voh-function-call hi variable ki tarah kaam karegi mtlb voh function-uss-value se replace hojayegi.
    // M2:-
    /*
    if (root != NULL)
    {
        return 1 + CountofBT(root->left) + CountofBT(root->right);
    }
    else
    {
        return 0;
    }
    */
    // M3:- working-accordingly in "postOrder"-form(as bcoz "binary-Tree" meh apn most-of-the-kaams "postOrder"-way meh hi krtehh hai:-):-
    int x, y;
    if (root)
    {
        x = CountofBT(root->left);
        y = CountofBT(root->right);
        return 1 + x + y;
        //👿📔imp-Note-point:-as toh yaha apn ekdam important acche se dekhe toh mtlb yaha  root-node-count ho rha hai , and phir left-tree-count ho rha hai and right-tree count ho raha hai. thus toh yehi "Recursion" ki bohat mast baat hai, as mtlb Recursion badi cheez ka result uski choti-choti cheezo se nikalta hai.. jaise yaha left-tree phir sub-left-tree meh break hota hai and then again-sub-left-tree meh break hota hai ..and soo...onn toh mtlb yehi "Recursion" ki bohat mast and bohat powerful cheez hai.

        //📔📔Note-point-2:- as apn yaha dekhe toh yeh kaam apne "postOrder"-way meh kiya hai , mtlb phle left-tree-ka-count find kiya hai , then right-tree-ka-count-find-kiya and then atlast mid-element-ka-count-consider-kiya hai.

        //👿📔imp-Note-point-3:- as toh Recursion-function aseh hi kaam krta hai , mtlb jab bhi kuch esa ho ki jaise yeh f(10) can be found from f(8),f(9) etc.etc. then mtlb it will found the answer of f(10) from f(8) and f(9). thus toh mtlb kabhi bhi esa ho ki jaise like f(10) can be found from f(9) and f(8) and f(9) can be found from f(4) or etc..etc.. then vaha pe apnko bina soche samje "Recursion" ka use krna hai, and yeh jo apn bina-soche-samje "Recursion" ka use kr rhe hai esko "Divide-and-Conquer"-krna bolteh hai or ya simply "Divide-and-Conquer"-statergy lagana boltehh hai. and agr esmeh memoization or tabulatino use kre apn toh phir esko "dynamic-programming"-krna-boltehh hai or mtlb "Dp"-approach lagana boltehh hai.

        //👿📔imp-Note-point-4:- Recursive-call krna mtlb uske andar-jana
        // Recursion-fn meh kya hota hai ki phle going-time meh toh voh ek-daam andar meh jo cheez hoti hai uspeh chala jata hai and then returning-time meh jo sbse-andar-wali-cheez voh leke bahar nikalta hai , and voh cheez voh uske just-upar-wale ko deta hai and voh just-upar-wala esko leke kuch kaam krke vapis dedeta hai and phir voh cheez ek-or-step-upar aajati hai .. and so..on atlast voh cheez aab main-call-k-pass aa jati hai.
        // mtlb intially going-stage meh recursion sbse andar-andar last-point tk jayega( mtlb provided-condition tk jayega ki kab tk or mtlb kaha tk recursive-call krni hai ) and then ek-baar sbse andar end meh puche k sbse-andar-wale se kuch answer leke voh return aayega, and return-aateh time voh bhi result usne liya hai voh uske-upar-wale ko deta rhega , deta-rhega and soo.onn upto vapis-coming-back toh main-call( mtlb main-surface-land jaha se voh andar-jane laga thaa.).
        // thus toh agr apnko yeh essa function implement krna ho then vaha pe apnko sirf simply apnko jis path meh jana hai uss path ka simpy "head" likhna hai. whereas yaha "head" ka mtlb ki uss path meh jane k liyeh jo door hai or mtlb uss path meh enter hone k liyeh jo code-statement hai voh apnko likhi hoti hai. jaise apn ne ess upar wale kaam meh "left-tree" meh jane  k liyeh simply "node-left" likha hai , toh mtlb as like apnko "Recursion"-fn design krna hai. and ek-orr baat ki jaise apnko pata kaise chalega ki apnko ess "path" meh jana hai , thus toh mtlb eske liyeh apnko phle jis cheez pe working krni hai uska apni copy meh sketch banana hoga , then hi kaam voh "sketch" bana payenge.. and "Recursion" ka apnko kab use krna hai toh eske liyeh yehi baat hai ki apnko bas yeh dekhna hai ki kya apn mtlb jis ka result apn nikalna chahtehh hai uska result uske sub-parts se find kiya ja skta hai by adding , subtracing or mtlb anything doing on that sub-parts.
        // jaise for-example apn ne ess kaam(counting nodes ) meh yeh dimag lagaya ki apn tree ka count left-tree-ka-count , and right-tree-ka-count and then mid-element ka coutn krke , and as then left-tree meh vapis se left-tree and right-tree mtlb left-k-andar left, left , left ... upto last last-leat-node etc..etc.. find kr sktehh hai
        // thus toh mtlb jab bhi apnko kuch eseh krna ho ki apnko phle sbse andar jana hai and phir vaha se kaam krna start krna hai , then vaha apn simply "Recursion-fn" ka use krke voh kaam easily and in-very-short-code meh kr sktehh hai. as like jaise apn ne ess topic meh kiya hai ki apnne
        // and "Recursion-fn" ko likhne meh toh apnko simply voh path-ka-head bas specify krna hota hai and baki apna sara easily-automatically ho jata hai. jaise apnne upar-fn meh left-tree ka count krne k liyeh sirf "left-node"-k-liyeh-call-likhi hai. and same thing for "right-node".
    }
    else
    {
        return 0;
    }
}

int CountingNodeswithdeg2(Node *root)
{
    if (root)
    {
        if (root->left && root->right)
        {
            return CountingNodeswithdeg2(root->left) + CountingNodeswithdeg2(root->right) + 1;
        }
        else
        {
            return CountingNodeswithdeg2(root->left) + CountingNodeswithdeg2(root->right);
        }
    }
    return 0;
    /*
    M2:- (justing code-writing-style is changed):-
    */
    // int x, y;
    // if (root)
    // {
    //     x = CountingNodeswithdeg2(root->left);
    //     y = CountingNodeswithdeg2(root->right);
    //     if (root->left && root->right)
    //     {
    //         return x + y + 1;
    //     }
    //     else
    //     {
    //         return x + y;
    //     }
    // }
    // return 0;
}

int SumofTree(Node *root)
{
    if (root)
    {
        return SumofTree(root->left) + SumofTree(root->right) + root->data;
    }
    return 0;
}

int fun(Node *root)
{
    int x, y;
    if (root)
    {
        x = fun(root->left);
        y = fun(root->right);
        if (x > y)
        {
            return x + 1;
        }
        else
        {
            return y + 1;
        }
    }
    return 0;
}

Node *CreateBTree();
int main()
{
    Node *root = CreateBTree();
    cout << CountofBT(root) << endl;
    cout << CountingNodeswithdeg2(root) << endl;
    cout << SumofTree(root) << endl;
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