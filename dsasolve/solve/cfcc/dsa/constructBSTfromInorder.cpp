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
map<int, vector<int>> lmp;
void dfs(TreeNode *node, int level)
{
    if (!node)
        return;
    lmp[level].push_back(node->val);
    if (node->left)
        dfs(node->left, level + 1);
    if (node->right)
        dfs(node->right, level + 1);
}
void solve()
{
    /*   TreeNode *root = new TreeNode(7);
      root->left = new TreeNode(3);
      root->left->right = new TreeNode(8);
      root->left->right->right = new TreeNode(6);
      root->left->right->right->left = new TreeNode(2);
      root->left->right->right->left->right = new TreeNode(1);
      root->left->right->right->left->right->right = new TreeNode(5);
      root->left->right->right->left->right->right->left = new TreeNode(4);
      root->left->right->right->left->right->right->right = new TreeNode(9); */
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(5);
    root->right->left->left = new TreeNode(2);
    root->right->left->right = new TreeNode(4);

    lmp.clear();
    dfs(root, 0);
    trav(lmp)
    {
        print(x.first);
        print("--");
        for (auto x1 : x.second)
            print(x1);
        nline;
    }

    linebreak1;

    long usum = 0;
    long csum = 0;
    for (auto x : lmp)
    {
        if (x.second.size() == 1)
        {
            // print("hi");
            // deb(x.second[0]);
            usum += x.second[0];
            deb(usum);
            print("-"), nline;
        }
        else
        {
            int n = x.second.size();
            usum += x.second[0] + x.second[n - 1];
            for (int i = 1; i < n - 1; i++)
            {
                csum += x.second[i];
            }
        }
    }
    deb(usum);
    deb(csum);
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