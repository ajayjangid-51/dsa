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
void dfs(TreeNode *node)
{
    if (!node)
        return;
    print(node->val);
    dfs(node->left);
    dfs(node->right);
}
string serialize(TreeNode *root)
{
    queue<TreeNode *> q;
    vector<int> v;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *t = q.front();
        q.pop();
        if (t)
            v.push_back(t->val);
        else
        {
            v.push_back(INT_MIN);
            continue;
        };
        if (t->left)
            q.push(t->left);
        else
            q.push(NULL);
        if (t->right)
            q.push(t->right);
        else
            q.push(NULL);
    }
    linebreak1;
    trav(v) print(x);
    linebreak1;
    string s;
    trav(v)
    {
        if (x == INT_MIN)
            s += "N,";
        else
        {

            s += (to_string(x) + ",");
        }
    }
    print(s);
    return s;
}
void solve()
{
    TreeNode *root = new TreeNode(131);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(553);

    string s = serialize(NULL);
    debline(s);
    /*  vector<int> v;
     string t;
     for (int i = 0; i < s.size(); i++)
     {
         t.clear();
         while (s[i] != ',')
         {
             t.push_back(s[i++]);
         }
         // deb(t);
         if (t == "N")
         {
             v.push_back(INT_MIN);
         }
         else
         {

             int t2 = stoi(t);
             v.push_back(t2);
         }
     }
     linebreak1;
     trav(v) print(x);
     linebreak1; */
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