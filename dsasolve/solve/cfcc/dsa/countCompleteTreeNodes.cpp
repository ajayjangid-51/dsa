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
int height(TreeNode *node)
{
    if (!node)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}
long long sum(int n)
{
    long long sumi = 0;
    int i = 0;
    while (n)
    {
        sumi += 1 << i;
        i++;
        n--;
    }
    return sumi;
}
int fn(TreeNode *node)
{
    if (!node->left and !node->right)
        return 1;
    int hl = height(node->left);
    int hr = height(node->right);
    if (hl > hr)
        return 1 + sum(hr) + fn(node->left);
    return 1 + sum(hl) + fn(node->right);
}
void solve()
{
    TreeNode *root = new TreeNode(18);
    root->left = new TreeNode(15);
    root->left->left = new TreeNode(40);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(7);
    root->left->right = new TreeNode(50);
    root->left->right->left = new TreeNode(9);
    root->right = new TreeNode(30);
    root->right->left = new TreeNode(100);
    root->right->right = new TreeNode(40);

    int ans = fn(root);
    deb(ans);
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