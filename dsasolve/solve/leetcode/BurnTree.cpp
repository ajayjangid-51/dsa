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
// #define mp make_pair
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
// maintaining back-edges(or mtlb parent-edges) via "dfs"
// void dfs(){

// }
// maintaining back-edges via "bfs";
// void bfs(){

// }
int maxi = INT_MIN;
vb visited(1000, 0);
map<TreeNode *, TreeNode *> mp;
TreeNode *fnd = 0;
void fn1(TreeNode *node, int h)
{
    if (visited[node->val])
        return;
    visited[node->val] = 1;
    // if (node->left == NULL and node->right == NULL)
    // {
    maxi = max(maxi, h);
    // }

    if (node->left)
        fn1(node->left, h + 1);
    if (node->right)
        fn1(node->right, h + 1);
    if (mp.find(node) != mp.end())
        fn1(mp[node], h + 1);
}

// void fn2(TreeNode *node)
// {
// }
void findi(TreeNode *root, int B)
{
    if (root)
    {
        if (root->val == B)
        {
            fnd = root;
            return;
        }
        findi(root->left, B);
        findi(root->right, B);
    }
}

int solve(TreeNode *A, int B)
{
    // phle toh apn back-edges ko maintain krenge..
    queue<TreeNode *> que;
    que.push(A);
    while (!que.empty())
    {
        TreeNode *p = que.front();
        que.pop();
        if (p->left)
        {
            que.push(p->left);

            mp[p->left] = p;
        }
        if (p->right)
        {
            que.push(p->right);
            mp[p->right] = p;
        }
    }
    // trav(mp)
    // {
    //     print(x.first->val);
    //     print("->");
    //     print(x.second->val);
    //     nline;
    // }
    findi(A, B);
    debline(fnd->val);
    fn1(fnd, 0);
    deb(maxi);
    return 2;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // TreeNode *root = new TreeNode(1);
        // root->left = new TreeNode(2);
        // root->right = new TreeNode(3);
        // root->left->left = new TreeNode(4);
        // root->right->left = new TreeNode(5);
        // root->right->right = new TreeNode(6);
        //
        // TreeNode *root = new TreeNode(12);
        // root->left = new TreeNode(1);
        // root->right = new TreeNode(8);
        // root->left->left = new TreeNode(2);
        // root->left->right = new TreeNode(11);
        // root->right->right = new TreeNode(3);
        //
        TreeNode *root = new TreeNode(9);
        root->left = new TreeNode(5);
        root->left->left = new TreeNode(8);
        root->left->left->left = new TreeNode(4);
        solve(root, 4);
    }
    return 0;
}