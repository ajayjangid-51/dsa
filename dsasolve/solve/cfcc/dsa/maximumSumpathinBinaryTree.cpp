#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
struct TreeNode2
{
    int val;
    int sum;
    TreeNode2 *left;
    TreeNode2 *right;
    TreeNode2 *parent;
    TreeNode2(int x) : val(x), sum(x), left(NULL), right(NULL), parent(NULL) {}
};
void dfs(TreeNode *p)
{
    if (!p)
        return;
    print(p->val);
    dfs(p->left);
    dfs(p->right);
}

TreeNode2 *fn(TreeNode *node)
{
    if (!node)
        return NULL;
    if (!node->left and !node->right)
    {
        return new TreeNode2(node->val);
    }
    TreeNode2 *rt = new TreeNode2(node->val);
    TreeNode2 *left = fn(node->left);
    if (left)
        left->parent = rt;
    rt->left = left;

    TreeNode2 *right = fn(node->right);
    if (right)
        right->parent = rt;
    rt->right = right;
    // int summ1 = rt->sum, summ2 = rt->sum;
    int summ1 = 0, summ2 = 0;
    if (left)
    {
        print(smile2);
        summ1 = rt->sum + left->sum;
    }
    if (right)
    {

        print(smile);
        summ2 = rt->sum + right->sum;
    }
    rt->sum = max(rt->sum, max(summ1, summ2));
    return rt;
}
int ans;
void dfs2(TreeNode2 *p)
{
    if (!p)
        return;
    debline(p->sum);
    int smaller = 0;
    if (p->left and p->right)
        smaller = min(p->left->sum, p->right->sum);
    int summ = p->sum + smaller;
    debline(summ);
    summ = max(p->sum, summ);
    debline(summ);
    ans = max(ans, summ);
    debline(ans);
    dfs2(p->left);
    dfs2(p->right);
}
void solve()
{
    /*  TreeNode *root = new TreeNode(10);
     root->left = new TreeNode(2);
     root->right = new TreeNode(10);
     root->left->left = new TreeNode(20);
     root->left->right = new TreeNode(1);
     root->right->right = new TreeNode(-25);
     root->right->right->left = new TreeNode(3);
     root->right->right->right = new TreeNode(4); */
    TreeNode *root = new TreeNode(-6);
    root->left = new TreeNode(-3);

    dfs(root);
    ans = INT_MIN;

    linebreak1;
    TreeNode2 *root2 = fn(root);
    deb(root2->sum);
    deb(root2->left->sum);
    // deb(root2->sum);
    print("hei");
    dfs2(root2);
    debline(ans);
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