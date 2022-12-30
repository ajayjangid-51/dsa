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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
map<TreeNode *, TreeNode *> mp1;
vector<int> ans;
map<TreeNode *, bool> visited;

void fn(TreeNode *node, TreeNode *parent)
{
    if (!node)
        return;
    mp1[node] = parent;
    fn(node->left, node);
    fn(node->right, node);
}
TreeNode *targetNode;
void getTargetNode(TreeNode *node, int B)
{
    if (!node)
        return;
    print(node->val), nline;
    if (node->val == B)
    {
        targetNode = node;
        return;
    }
    getTargetNode(node->left, B);
    getTargetNode(node->right, B);
    // TreeNode *left = getTargetNode(node->left, B);
    // TreeNode *left = getTargetNode(node->left, B);
    // if (!left)
    //     return left;
    // else if (!right)
    //     return right;
    // return node;
}
void fn2(TreeNode *node, int dist, int C)
{
    if (!node)
        return;
    if (visited[node])
        return;
    visited[node] = 1;
    if (dist == C)
    {
        ans.push_back(node->val);
    }

    fn2(node->left, dist + 1, C);
    fn2(node->right, dist + 1, C);
    fn2(mp1[node], dist + 1, C);
}
/*
 */

void dfs(TreeNode *node)
{
    if (!node)
        return;
    print(node->val);
    dfs(node->left);
    dfs(node->right);
}
void solve()
{
    TreeNode *root = new TreeNode(17);
    root->left = new TreeNode(7);
    root->left->right = new TreeNode(15);
    root->left->right->right = new TreeNode(4);
    root->left->right->right->left = new TreeNode(5);
    root->left->right->right->left->left = new TreeNode(12);
    root->left->right->right->left->left->right = new TreeNode(16);
    root->left->right->right->left->left->right->left = new TreeNode(8);
    root->left->right->right->left->left->right->right = new TreeNode(6);
    root->left->right->right->left->left->right->left->left = new TreeNode(2);
    root->left->right->right->left->left->right->left->left->right = new TreeNode(1);
    root->left->right->right->right = new TreeNode(13);
    root->left->right->right->right->left = new TreeNode(10);
    root->left->right->right->right->right = new TreeNode(9);
    root->left->right->right->right->right->left = new TreeNode(11);
    root->left->right->right->right->right->right = new TreeNode(14);
    root->left->right->right->right->right->right->right = new TreeNode(18);
    root->left->right->right->right->right->right->right->right = new TreeNode(3);

    int B = 3;
    int C = 4;

    mp1.clear();
    visited.clear();
    targetNode = NULL;
    ans.clear();
    TreeNode *A = root;
    mp1[A] = NULL;
    fn(A->left, A);
    fn(A->right, A);

    trav(mp1)
    {
        print(x.first->val), print("-"), (x.second) ? print(x.second->val) : print("NULL"), nline;
    }
    linebreak1;
    // dfs(A);
    // TreeNode *targetNode getTargetNode(A, B);
    getTargetNode(A, B);
    // deb(mp1[targetNode]);
    fn2(targetNode, 0, C);
    linebreak1;
    trav(ans) print(x);
    linebreak1;
    // return ans;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}