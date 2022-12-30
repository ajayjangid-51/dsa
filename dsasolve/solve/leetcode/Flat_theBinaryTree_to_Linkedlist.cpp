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
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/* TreeNode *flatten(TreeNode *A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if (!A)
        return 0;
    TreeNode *temp = A->right;
    TreeNode *lchild = A->left;
    A->left = 0;
    A->right = flatten(lchild);
    TreeNode *p = A;
    while (p->right)
    {
        // p->left = 0;
        p = p->right;
    }

    p->right = temp;
    return A;
} */
/* *-------------------------------------------------------------------------------* */
//
stack<TreeNode *> stk;
int i = 0;
TreeNode *fn(TreeNode *root)
{
    TreeNode *node = root;
    while (1)
    {
        i++;
        if (i > 1000)
            break;

        if (node->left)
        {
            stk.push(node->right);
            node->right = node->left;
            node->left = 0;
        }
        if (node->right)
        {
            node = node->right;
            // continue;
        }
        else
        // {
        // if (!node->left and !node->right)
        {

            if (stk.empty())
                break;
            TreeNode *p = stk.top();
            stk.pop();
            while (!p)
            {
                p = stk.top();
                stk.pop();
            }
            node->right = p;
            node = node->right;
            //  return fn(node->right);
        }
    }
    return root;
}
TreeNode *flatten(TreeNode *A)
{
    return fn(A);
}
void preorder(TreeNode *p)
{
    if (i++ > 1000)
        return;
    if (p)
    {
        print(p->val);
        preorder(p->left);
        preorder(p->right);
    }
}
void inorder(TreeNode *p)
{
    if (p)
    {
        inorder(p->left);
        print(p->val);
        inorder(p->right);
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
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(5);
        root->right->left = new TreeNode(9);
        root->right->left->left = new TreeNode(10);
        root->right->left->right = new TreeNode(11);
        root->left->left = new TreeNode(3);
        root->left->left->right = new TreeNode(7);
        root->left->left->right->left = new TreeNode(8);
        root->left->right = new TreeNode(4);
        root->right->right = new TreeNode(6);

        preorder(root);
        nline;
        inorder(root);
        nline;

        TreeNode *rt = flatten(root);
        TreeNode *p = rt;
        int i = 0;

        preorder(rt);
        nline;
        inorder(rt);
    }
    return 0;
}