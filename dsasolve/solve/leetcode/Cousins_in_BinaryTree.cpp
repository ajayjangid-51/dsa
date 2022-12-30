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

vector<int> v;
int ourlvl = -1;
TreeNode *ourparent = 0;
void bfs(TreeNode *node, int &B)
{
    queue<tuple<TreeNode *, int, TreeNode *>> que;
    que.push({node, 0, 0});
    while (!que.empty())
    {
        TreeNode *p, *parent;
        int lvl;
        tie(p, lvl, parent) = que.front();
        que.pop();
        if (p->val == B)
        {
            ourlvl = lvl;
            ourparent = parent;
        }
        if (lvl == ourlvl)
        {
            debline(p->val);
            if (parent != ourparent)
            {
                v.push_back(p->val);
            }
        }
        if (p->left)
            que.push({p->left, lvl + 1, p});
        if (p->right)
            que.push({p->right, lvl + 1, p});
    }
    nline;
    trav(v) print(x);
    nline;
}

vector<int> solve(TreeNode *A, int B)
{
    v.clear();
    ourlvl = -1;
    ourparent = 0;
    bfs(A, B);

    return v;
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
        root->left = new TreeNode(2);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);
        root->right = new TreeNode(3);
        root->right->left = new TreeNode(6);
        root->right->right = new TreeNode(7);
        solve(root, 5);
    }
    return 0;
}