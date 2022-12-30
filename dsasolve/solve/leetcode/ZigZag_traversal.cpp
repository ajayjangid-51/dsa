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
bool alt = 0;
int currentlvl = 0;
vi v;
vvi v2;
void fn(TreeNode *node)
{
    queue<pair<TreeNode *, int>> que;
    que.push({node, 0});
    while (!que.empty())
    {
        TreeNode *p = que.front().first;
        int lvl = que.front().second;
        que.pop();
        if (lvl == currentlvl)
        {

            v.push_back(p->val);
            // alt = !alt;
        }
        else
        {
            v2.push_back(v);
            v.clear();
            currentlvl = lvl;
            v.push_back(p->val);
            // alt = !alt;
        }

        // if (alt == 0)
        // {

        //     if (p->right)
        //         que.push({p->right, lvl + 1});
        //     if (p->left)
        //         que.push({p->left, lvl + 1});
        // }
        // else
        // {

        if (p->left)
            que.push({p->left, lvl + 1});
        if (p->right)
            que.push({p->right, lvl + 1});
        // }
    }
}
vector<vector<int>> zigzagLevelOrder(TreeNode *A)
{
    v.clear();
    v2.clear();
    currentlvl = 0;
    alt = 0;
    fn(A);
    v2.push_back(v);
    for (int i = 1; i < v2.size(); i += 2)
    {
        reverse(v2[i].begin(), v2[i].end());
    }
    trav(v2)
    {
        trav2(x) print(y);
        nline;
    }

    return v2;
}
/* *-------------------------------------------------------------------------------* */
// method2 is via using 2-stacks instead of using queue.

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
        root->left->left = new TreeNode(11);
        root->left->right = new TreeNode(21);
        root->right = new TreeNode(20);
        root->right->right = new TreeNode(7);
        root->right->left = new TreeNode(15);
        zigzagLevelOrder(root);
    }
    return 0;
}