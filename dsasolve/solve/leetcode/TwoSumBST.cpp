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

bool searchBst(int &B, int a, TreeNode *root)
{
    print("😀");
    print(a);
    nline;
    int key = B - a;
    TreeNode *p = root;
    while (p != NULL)
    {
        if (p->val == key and p->val != a)
            return 1;
        else if (p->val < key)
        {
            p = p->right;
        }
        else
        {
            p = p->left;
        }
    }
    return 0;
}

// void Inorder(TreeNode *node, vb &visited, int &B, TreeNode *root, bool &ans)
void Inorder(TreeNode *node, int &B, TreeNode *root, bool &ans)
{
    // if (visited[node->val])
    //     return;
    if (node != 0)
    {
        Inorder(node->left, B, root, ans);
        deb(node->val);
        deb(B - node->val);
        // int yes = searchBst((B - node->val), root);
        int yes = searchBst(B, node->val, root);
        debline(yes);
        if (yes)
        {
            // deb(node->val);
            ans = 1;
        }
        // visited[node->val]
        Inorder(node->right, B, root, ans);
    }
}

int t2Sum(TreeNode *A, int B)
{
    // vb visited(100010, 0);
    bool ans = 0;
    Inorder(A, B, A, ans);
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
        TreeNode *root = new TreeNode(10);
        root->left = new TreeNode(9);
        root->right = new TreeNode(20);
        cout << t2Sum(root, 40) << endl;
    }
    return 0;
}