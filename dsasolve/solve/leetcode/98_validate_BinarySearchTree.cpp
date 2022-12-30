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
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
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
    TreeNode() {}
    TreeNode(int _val) : val(_val) {}
    TreeNode(int _val, TreeNode *left, TreeNode *right) : val(_val), left(left), right(right) {}
};

class Solution
{
public:
    bool ans = 0;
    vector<int> v;

    void InOrderTrav(TreeNode *node)
    {
        if (node == nullptr)
            return;
        InOrderTrav(node->left);
        v.push_back(node->val);
        InOrderTrav(node->right);
    }
    void util()
    {

        vector<int> vv = v;
        sort(range(vv));
        for (int i = 0; i < vv.size(); i++)
        {
            if (i + 1 != vv.size())
                if (vv[i] == vv[i + 1])
                {
                    ans = 0;
                    return;
                }
        }
        if (vv == v)
            ans = 1;
    }
    bool isValidBST(TreeNode *root)
    {
        // 🤜Method1:-(via inOrderTraversal:-)
        InOrderTrav(root);
        util();
        return ans;
    }
};

void Solve()
{
}

int main()
{
    io_faster
    file();
    int t = 1;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}