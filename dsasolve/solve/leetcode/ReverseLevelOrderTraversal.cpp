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

vvi v2;
vi v;
int currentlvl = 0;
void fn(TreeNode *A)
{
    queue<pair<TreeNode *, int>> que;
    que.push({A, 0});
    while (!que.empty())
    {
        TreeNode *p = que.front().first;
        int lvl = que.front().second;
        que.pop();
        if (lvl == currentlvl)
        {
            // debline(p->val);
            v.push_back(p->val);
        }
        else
        {
            // debline(p->val);
            currentlvl = lvl;
            v2.push_back(v);
            deb(v2.size());
            v.clear();
            v.push_back(p->val);
        }
        if (p->left)
            que.push({p->left, lvl + 1});
        if (p->right)
            que.push({p->right, lvl + 1});
    }
}
/* *-------------------------------------------------------------------------------* */
// method2:- first pushing the right-element  and then left-element in level-wise.
vector<int> solve_m2(TreeNode *A)
{
    queue<TreeNode *> que;
    que.push(A);
    vector<int> ans;
    while (!que.empty())
    {
        TreeNode *p = que.front();
        que.pop();
        ans.push_back(p->val);
        if (p->right)
            que.push(p->right);
        if (p->left)
            que.push(p->left);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
vector<int> solve(TreeNode *A)
{
    v.clear();
    v2.clear();
    currentlvl = 0;
    fn(A);
    vi ans;
    v2.push_back(v);
    for (int i = v2.size() - 1; i >= 0; i--)
    {
        trav(v2[i]) ans.push_back(x);
    }
    nline;
    trav(ans)
    {
        print(x);
    }
    nline;

    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        TreeNode *root = new TreeNode(3);
        root->left = new TreeNode(9);
        root->right = new TreeNode(20);
        root->right->left = new TreeNode(15);
        root->right->right = new TreeNode(7);
        solve(root);
    }
    return 0;
}