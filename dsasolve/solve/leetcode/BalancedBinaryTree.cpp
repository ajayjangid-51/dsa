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
bool bf;
int treeHeight(TreeNode *p)
{
    int x;
    int y;
    if (p == nullptr)
    {
        return 0;
    }
    x = treeHeight(p->left);
    y = treeHeight(p->right);
    return x > y ? x + 1 : y + 1;
}
int balanceFactor(TreeNode *node)
{
    int hl, hr;
    hl = treeHeight(node->left);
    hr = treeHeight(node->right);
    return (hl - hr);
}

void preOrder(TreeNode *root)
{
    if (root)
    {
        if (bf)
            return;
        preOrder(root->left);
        if (bf)
            return;
        preOrder(root->right);
        int bff = balanceFactor(root);
        debline(root->val);
        debline(bff);
        if (bff > 1 or bff < -1)
        {
            bf = true;
            return;
        }
    }
}
int isBalanced(TreeNode *A)
{
    bf = false;
    preOrder(A);
    print("😀");
    print(bf);
    print("😀");
    nline;
    return !bf;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        TreeNode *A = new TreeNode(1);
        A->right = new TreeNode(2);
        isBalanced(A);
        // solve();
    }
    return 0;
}