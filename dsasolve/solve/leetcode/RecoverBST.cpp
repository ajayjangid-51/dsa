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

bool firsti = 1;
int previ;
int n1, n2;
void Inorder(TreeNode *root)
{
    if (root != 0)
    {
        Inorder(root->left);
        if (root->val < previ)
        {
            if (firsti)
            {

                // n2.first = previ.first;
                // n2.second = i;
                n2 = previ;

                // now for n1.
                // for once:-
                n1 = root->val;
                firsti = 0;
            }
            else
            {
                n1 = root->val;
            }
        }
        else
        {
            previ = root->val;
        }
        // last = i;

        Inorder(root->right);
    }
}
vector<int> recoverTree(TreeNode *A)
{
    firsti = 1;
    previ = -1;
    Inorder(A);
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
        TreeNode *root = new TreeNode(8);
        root->left = new TreeNode(4);
        root->right = new TreeNode(11);
        root->left->left = new TreeNode(1);
        root->left->right = new TreeNode(13);
        root->right->left = new TreeNode(9);
        root->right->right = new TreeNode(7);

        // TreeNode *root = new TreeNode(8);
        // root->left = new TreeNode(5);
        // root->right = new TreeNode(11);
        // root->left->left = new TreeNode(1);
        // root->left->right = new TreeNode(4);
        // root->right->left = new TreeNode(9);
        // root->right->right = new TreeNode(13);

        vi res = recoverTree(root);
        trav(res) print(x);
    }
    return 0;
}