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
#define all(x) x.begin() x.end()
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
    TreeNode(int x) : val(x), left(NULL), right(NULL){};
    TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), left(l), right(r){};
};
int targetNode = 2;
TreeNode *targetNodeAddress = NULL; // notepoint: "pointer" mtlb ki yeh container ka addrewss-store krta hai. aur mtlb "pointer" mtlb ki ussmeh "addressDatatype variable" hai.

map<int, TreeNode *> mp;

void dfs(TreeNode *node, TreeNode *parent)
{
    // notepoint ki agr apnko address se kisi container(ya node) ko acccess krna hai then voh apnko "-> (arrow)" operator se krna hoga.
    // print(node->val);
    mp[node->val] = parent;
    if (node->val == targetNode)
        targetNodeAddress = node;
    if (node->left)
        dfs(node->left, node);
    if (node->right)
        dfs(node->right, node);
}
int c = 2;
map<TreeNode *, bool> mp2;
vi ans;
void dfs2(TreeNode *node, int d)
{
    if (mp2[node])
        return;
    mp2[node] = true;
    if (d == c)
        ans.push_back(node->val);
    if (node->left)
        dfs2(node->left, d + 1);
    if (node->right)
        dfs2(node->right, d + 1);
    if (mp[node->val] and !mp2[mp[node->val]])
        dfs2(mp[node->val], d + 1);
}
void solve()
{
    // here first we will create a Tree..
    // first Creating leafNodes
    TreeNode node4 = TreeNode(4);
    TreeNode node5 = TreeNode(5);
    TreeNode node3 = TreeNode(3);
    TreeNode node2 = TreeNode(2, &node4, &node5);
    TreeNode node1 = TreeNode(1, &node2, &node3);
    dfs(&node1, NULL);
    // deb(targetNodeAddress->val);
    // trav(mp)
    // {
    //     print(x.first);
    //     print("-");
    //     print(x.second);
    //     nline;
    // }
    dfs2(targetNodeAddress, 0);
    // print("ans is  ====");
    trav(ans) print(x);
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