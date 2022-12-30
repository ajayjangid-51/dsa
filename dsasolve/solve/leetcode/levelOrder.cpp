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
#define bstart(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define bend cout << "🛑_______________________________🛑" \
                  << "\n"                                      \
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

vector<vector<int>> levelOrder(TreeNode *A)
{
    vvi res;
    vi inlevelnode;
    queue<TreeNode *> que;
    que.push(A);
    inlevelnode.push_back(A->val);
    int cl = 2, pl = 0;
    map<TreeNode *, int> mp;
    mp[A] = 1;

    while (!que.empty())
    {
        TreeNode *node = que.front();
        que.pop();
        if (mp[node] == pl + 1)
        {
            res.push_back(inlevelnode);
            pl++;
            inlevelnode.erase(range(inlevelnode));
        }

        if (node->left)
        {
            mp[node->left] = mp[node] + 1;
            inlevelnode.push_back(node->left->val);
            que.push(node->left);
        }
        if (node->right)
        {
            mp[node->right] = mp[node] + 1;
            inlevelnode.push_back(node->right->val);
            que.push(node->right);
        }
    }
    return res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        TreeNode A(3);
        TreeNode Al(9), Ar(20), Arl(15), Arr(7);
        A.left = &Al;
        A.right = &Ar;
        Ar.left = &Arl;
        Ar.right = &Arr;
        vvi ans = levelOrder(&A);
        trav(ans)
        {
            trav2(x) cout << y << " ";
            nline;
        }
    }
    return 0;
}