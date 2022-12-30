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
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), left(l), right(r) {}
};

vector<TreeNode *> fn(vector<int> v)
{
    int n = v.size();
    if (n == 1)
    {
        return {new TreeNode(v[0])};
    }
    if (n == 0)
        return {NULL};
    vvi left(n);
    vvi right(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (v[j] < v[i])
                    left[i].push_back(v[j]);
                else
                    right[i].push_back(v[j]);
            }
        }
    }
    vector<vector<TreeNode *>> leftNodes(n);
    vector<vector<TreeNode *>> rightNodes(n);
    for (int i = 0; i < n; i++)
    {
        leftNodes[i] = fn(left[i]);
        rightNodes[i] = fn(right[i]);
    }
    vector<TreeNode *> ans;
    for (int i = 0; i < n; i++)
    {
        trav(leftNodes[i])
        {
            TreeNode *a = new TreeNode(v[i]);
            a->left = x;
            trav2(rightNodes[i])
            {
                TreeNode *a2 = new TreeNode(v[i]);
                a2->left = a->left;
                a2->right = y;
                ans.push_back(a2);
            }
        }
    }
    return ans;
}
void solve()
{
    int n = 3;
    vi v = {1, 2, 3, 4};
    vector<TreeNode *> ans = fn(v);
    deb(ans.size()); // trav(ans)
    // {
    //     print(x->val);
    //     nline;
    // }
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