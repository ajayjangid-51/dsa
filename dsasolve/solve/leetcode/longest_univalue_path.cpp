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
int res = INT_MIN;
int longestUnivaluePath(TreeNode *root)
{
    if (root->left == 0 and root->right == 0)
        return 0;

    int left = -1, lvalue = -1, right = -1, rvalue = -1;
    int ans = 0;
    if (root->left)
    {
        lvalue = root->left->val;
        left = longestUnivaluePath(root->left);
    }
    if (root->right)
    {
        rvalue = root->right->val;
        right = longestUnivaluePath(root->right);
    }
    deb(root->val);
    deb(left);
    deb(lvalue);
    deb(right);
    deb(rvalue);
    deb(ans);
    linebreak;
    if (root->val == lvalue and root->val == rvalue)
    {
        ans = max(left, right) + 1;
        res = max(res, (left + right + 2));
    }
    else if (root->val == lvalue)
    {
        ans = left;
        res = max(res, ans);
    }
    else if (root->val == rvalue)
    {
        ans = right;
        res = max(res, ans);
    }
    else
    {
        // ans = max(left, right);
        ans = 1;
        res = max(res, 0);
    }
    debline(ans);
    return ans;
}
void preorder(TreeNode *p)
{
    if (p)
    {
        print(p->val);
        preorder(p->left);
        preorder(p->right);
    }
}
void solve()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(1);
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(5);
    // preorder(root);
    longestUnivaluePath(root);
    // deb(root->val);
    debline(res);
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

// class Solution {
// public:
//      int dfs(TreeNode* root, int& maxlen){
//         if(!root) return 0;
//         int left = dfs(root->left, maxlen);
//         int right = dfs(root->right, maxlen);
//         if(root->left == 0 or root->left->val != root->val) left = 0;
//         if(root->right == 0 or root->right->val != root->val) right = 0;
//         maxlen = max(maxlen, left + right);
//         if(left == 0 and right == 0) return 1;
//         return max(left, right) + 1;
//     }
//     int longestUnivaluePath(TreeNode* root) {
//         int maxlen = 0;
//         dfs(root, maxlen);
//         return maxlen;

//     }
// };