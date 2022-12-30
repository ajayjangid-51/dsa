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

TreeNode *solve(TreeNode *A, TreeNode *B)
{
    stack<pair<TreeNode *, TreeNode *>> stk;
    TreeNode *p = A, *q = B;
    TreeNode *temp = new TreeNode(0);
    TreeNode *lchild = 0, *rchild = 0;
    while (p or q or !stk.empty())
    {
        if (p or q)
        {
            stk.push({p, q});
            if (p)
                p = p->left;
            if (q)
                q = q->left;
        }
        else
        {
            p = stk.top().first;
            q = stk.top().second;
            int pval = 0, qval = 0;
            if (p)
                pval = p->val;
            if (q)
                qval = q->val;
            TreeNode *t = new TreeNode(pval + qval);
            t->left = lchild;
            t->right = rchild;
            if (c == 'l')
                lchild = t;
            else if (c == 'r')
                rchild = t;
            stk.pop();
            if (p)
                p = p->right;
            if (q)
                q = q->right;
        }
    }
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