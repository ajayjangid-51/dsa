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
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *getTreeinInput()
{
}
class Solution
{
public:
    int sum = 0;
    bool ans = 0;
    void dfs(TreeNode *node, int targetSum)
    {
        sum += node->val;
        if (sum == targetSum and (node->left == NULL and node->right == NULL))
        {
            ans = 1;
            return;
        }
        else if (node->left == NULL and node->right == NULL)
        {
            sum -= node->val;
            return;
        }
        if (node->left)
            dfs(node->left, targetSum);
        if (node->right)
            dfs(node->right, targetSum);
        sum -= node->val;
        return;
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        dfs(root, targetSum);
        return ans;

        // dfs(root->right);
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
    // cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}

// Grade7.96 Dates attended or expected graduation2019 – 2023

// sbi.03320@sbi.co.in