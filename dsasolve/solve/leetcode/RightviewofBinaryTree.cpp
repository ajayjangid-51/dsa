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
#define line1 cout << "🛑_______________________________🛑" \
                   << "\n"                                      \
                      "\n"
#define line2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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

#define vi vector<int>
vi bfs(TreeNode *root)
{
    vi ans;
    queue<pair<TreeNode *, int>> que;
    que.push({root, 1});
    TreeNode *p = root;
    vector<pair<int, int>> vec;
    while (!que.empty())
    {

        TreeNode *p = que.front().first;
        int lvl = que.front().second;
        vec.push_back({p->val, lvl});
        que.pop();
        if (p->left)
        {

            que.push({p->left, lvl + 1});
        }
        if (p->right)
        {
            que.push({p->right, lvl + 1});
        }
    }
    int current = 1;
    int m;
    trav(vec)
    {
        // print(x.first);
        // print(x.second);
        // nline;
        if (x.second == current)
        {
            m = x.first;
            debline(m);
        }
        else
        {
            ans.push_back(m);
            current = x.second;
        }
    }
    int xx = vec.rbegin()->first;
    ans.push_back(xx);
    // line1;
    // trav(ans) print(x);
    return ans;
}
vector<int> solve(TreeNode *A)
{
    return bfs(A);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(15);
        root->right = new TreeNode(2);
        solve(root);
    }
    return 0;
}