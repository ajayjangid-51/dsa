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
vector<vector<int>> verticalOrderTraversal(TreeNode *A)
{
    queue<pair<TreeNode *, int>> que;
    que.push({A, 0});
    vb visited(10000, 0);
    map<int, vi> mp;
    while (!que.empty())
    {
        TreeNode *node = que.front().first;
        if (!node)
        {
            que.pop();
            continue;
        }
        debline(node->val);
        int v = que.front().second;
        que.pop();
        if (!visited[node->val])
            mp[v].push_back(node->val);
        TreeNode *p = node->right;
        int t = v + 1;
        while (p)
        {
            if (visited[p->val])
            {
                p = p->right;
                t++;
                continue;
            }
            visited[p->val] = 1;
            que.push({p, t});
            mp[t].push_back(p->val);
            t++;
            p = p->right;
        }
        p = node->left;
        t = v - 1;
        while (p)
        {
            if (visited[p->val])
            {
                p = p->left;
                t--;
                continue;
            }
            visited[p->val] = 1;
            que.push({p, t});
            mp[t].push_back(p->val);
            t--;
            p = p->left;
        }
    }
    // trav(mp)
    // {
    //     print(x.first);
    //     print(":");
    //     trav2(x.second) print(y);
    //     nline;
    // }
    vvi ans;
    trav(mp)
    {
        vi v;
        trav2(x.second)
        {
            v.push_back(y);
        }
        ans.push_back(v);
    }
    trav(ans)
    {
        trav2(x) print(y);
        nline;
    }

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
        // TreeNode *root = new TreeNode(1);
        // root->left = new TreeNode(2);
        // root->left->left = new TreeNode(4);
        // root->left->right = new TreeNode(5);
        // root->right = new TreeNode(3);

        // TreeNode *root = new TreeNode(5090);
        // root->left = new TreeNode(9560);
        // root->left->left = new TreeNode(3628);
        //
        // TreeNode *root = new TreeNode(8262);
        // root->right = new TreeNode(411);
        //
        TreeNode *root = new TreeNode(2119);
        root->left = new TreeNode(650);
        root->left->right = new TreeNode(5759);
        root->left->right->left = new TreeNode(1325);
        root->left->right->right = new TreeNode(4938);

        verticalOrderTraversal(root);
    }
    return 0;
}