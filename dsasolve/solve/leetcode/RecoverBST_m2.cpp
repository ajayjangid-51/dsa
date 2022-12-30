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

int n1, n2;
int previ;
bool firsti;
void MorrisinOrderTrav(TreeNode *root)
{
    TreeNode *current, *pre;
    current = root;
    if (!current)
        return;
    while (current)
    {
        int num;
        if (current->left == NULL)
        {
            num = current->val;
            current = current->right;
        }
        else
        {
            pre = current->left;
            while (pre->right and pre->right != current)
            {
                pre = pre->right;
            }
            if (pre->right == 0)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                num = current->val;
                pre->right = NULL;
                current = current->right;
            }
        }
        if (num < previ)
        {
            if (firsti)
            {
                n2 = previ;
                n1 = num;
                firsti = 0;
            }
            else
            {
                n1 = num;
            }
        }
        else
        {
            previ = num;
        }
    }
}
vector<int> recoverTree(TreeNode *A)
{
    previ = -1;
    firsti = 1;
    MorrisinOrderTrav(A);
    vector<int> ans = {n1, n2};
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
        // solve();
        TreeNode *root = new TreeNode(8);
        root->left = new TreeNode(5);
        root->right = new TreeNode(11);
        root->left->left = new TreeNode(1);
        root->left->right = new TreeNode(4);
        root->right->left = new TreeNode(9);
        root->right->right = new TreeNode(13);
        previ = -1;
        firsti = 1;

        recoverTree(root);
        deb(n1);
        deb(n2);
    }
    return 0;
}