#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
#define mp make_pair
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define line1 cout << "🛑_______________________________🛑" \
                   << "\n"                                      \
                      "\n"
#define line2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
struct bstNode
{
    int val;
    bstNode *left;
    bstNode *right;
    bstNode(int x) : val(x), left(0), right(0) {}
};
/* struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
    // Node(int x) : val(x), lchild(0), rchild(0) {}
};
Node *root = 0;
void createFromPreorder(vi pre, int n)
{

    // Create root node
    int i = 0;
    root = new Node;
    root->data = pre[i++];
    root->lchild = nullptr;
    root->rchild = nullptr;

    // Iterative steps
    Node *t;
    Node *p = root;
    stack<Node *> stk;

    while (i < n)
    {
        // Left child case
        if (pre[i] < p->data)
        {
            t = new Node;
            t->data = pre[i++];
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            stk.push(p);
            p = t;
        }
        else
        {
            // Right child cases
            if (pre[i] > p->data && pre[i] < stk.empty() ? 32767 : stk.top()->data)
            {
                t = new Node;
                t->data = pre[i++];
                t->lchild = nullptr;
                t->rchild = nullptr;
                p->rchild = t;
                p = t;
            }
            else
            {
                p = stk.top();
                stk.pop();
            }
        }
    }
    // return root;
} */
bstNode *bstFromPreorder(vi preorder)
{
    bstNode *root = new bstNode(preorder[0]);
    stack<bstNode *> stk;
    bstNode *p = root;
    // int i = 1;
    // while (i < preorder.size())
    for (int i = 1; i < preorder.size(); i++)
    {
        // deb(i);
        // deb(preorder[i]);
        // bstNode *temp = new bstNode(preorder[i]);
        // if (preorder[i] == p->val)
        //     continue;

        // if (temp->val < p->val)
        if (preorder[i] < p->val)
        {
            bstNode *temp = new bstNode(preorder[i]);

            p->left = temp;
            // if (preorder[i] != p->val)
            stk.push(p);
            p = temp;
            // i++;
        }
        else
        {
            // if (temp->val < stk.top() or stk.empty())
            // if ((preorder[i] < stk.top()->val) or (stk.empty() == true))
            if (preorder[i] < ((stk.empty()) ? INT_MAX : stk.top()->val))
            {
                bstNode *temp = new bstNode(preorder[i]);

                p->right = temp;
                p = temp;

                // i++;
            }
            else
            {
                // print("😃😃😃😃");
                p = stk.top();
                stk.pop();
                // i = i - 2;
                // debline(i);
                i--;
                // debline(i);
                // free(temp);
            }
        }
    }
    p = 0;

    return root;
};
void inorderTrav(bstNode *root)
{
    if (root != 0)
    {
        // deb("hi");
        inorderTrav(root->left);
        cout << root->val << " ";
        inorderTrav(root->right);
        // return;
    }
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vi preorder = {30, 20, 10, 15, 25, 40, 50, 45};
        // vi preorder = {10, 5, 1, 7, 40, 50};
        // vi preorder = {7, 7, 10, 10, 9, 5, 2, 8};
        vi preorder = {7, 10, 9, 5, 2, 8};
        inorderTrav(bstFromPreorder(preorder));
        // createFromPreorder(preorder, preorder.size());
        // inorderTrav(root);
        // inorderTrav(createFromPreorder(preorder, preorder.size()));
    }
    return 0;
};