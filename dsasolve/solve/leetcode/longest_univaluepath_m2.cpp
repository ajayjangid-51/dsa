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
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
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
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int res = 0;
int fn(TreeNode *root)
{
    if (root == 0)
        return 0;
    if (root->left == 0 and root->right == 0)
        return 0;
    int left = fn(root->left);
    int right = fn(root->right);
    deb(root->val);
    deb(left);
    deb(right);
    int ans;
    if ((root->left and root->left->val == root->val) and (root->right and root->right->val == root->val))
    {
        debline(root->val);
        res = max(res, left + right + 2);
        ans = max(left, right) + 1;
        debline(ans);
        linebreak;

        return ans;
    }
    if (root->left and root->left->val == root->val)
    {
        res = max(res, left + 1);
        ans = left + 1;
        deb(ans);
        linebreak;
        return ans;
    }
    if (root->right and root->right->val == root->val)
    {
        res = max(res, right + 1);
        ans = right + 1;
        debline(ans);
        linebreak;
        return ans;
    }
    else
    {
        ans = 0;
        deb(ans);
        linebreak;

        return 0;
    }
}
int longestUnivaluePath()
{
    // res = 0;
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(1);
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(5);
    fn(root);
    debline(res);
    return res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        longestUnivaluePath();
    }
    return 0;
}