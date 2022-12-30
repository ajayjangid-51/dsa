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

vi v, vv;
void inorder(TreeNode *node)
{
    if (node)
    {
        inorder(node->left);
        v.push_back(node->val);
        inorder(node->right);
    }
}
void preorderr(TreeNode *node)
{
    if (node)
    {
        vv.push_back(node->val);
        preorderr(node->left);
        preorderr(node->right);
    }
}

int isSymmetric(TreeNode *A)
{
    v.clear(), vv.clear();
    inorder(A);
    // if(v.size()%2 == 0) return 0;/
    int rootindex;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == A->val)
        {
            rootindex = i;
            break;
        }
    }
    trav(v)
    {
        print(x);
    }
    nline;
    vi v1, v2;
    for (int i = 0; i <= rootindex - 1; i++)
    {
        v1.push_back(v[i]);
    }
    for (int i = rootindex + 1; i < v.size(); i++)
    {
        v2.push_back(v[i]);
    }
    reverse(v2.begin(), v2.end());
    int ans = v1 == v2;
    debline(ans);
    v1.clear();
    v2.clear();
    preorderr(A);
    trav(vv)
    {
        print(x);
    }
    nline;

    for (int i = 1; i <= (vv.size() / 2); i++)
    {
        v1.push_back(vv[i]);
    }
    for (int i = ((vv.size() / 2) + 1); i < vv.size(); i++)
    {
        v2.push_back(vv[i]);
    }
    // ans = ans and (v1==v2);
    int ans2 = (v1 == v2);
    debline(ans2);

    return (ans and ans2);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->left->left = new TreeNode(3);
        root->left->right = new TreeNode(4);
        root->right = new TreeNode(2);
        root->right->left = new TreeNode(4);
        root->right->right = new TreeNode(3);

        isSymmetric(root);
    }
    return 0;
}