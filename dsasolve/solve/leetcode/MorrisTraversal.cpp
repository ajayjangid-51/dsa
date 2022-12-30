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
    TreeNode(int x) : val(x), left(0), right(0) {}
};
void MorrisTraversal(TreeNode *root)
{
    TreeNode *current, *pre; // where here "pre" mtlb inorder-Predecessor.
    current = root;
    if (!root)
        return;

    while (current != NULL)
    {

        if (current->left == NULL)
        {
            print(current->val);
            current = current->right;
        }
        else
        {

            pre = current->left;
            while (pre->right != NULL and pre->right != current)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {

                pre->right = current;
                current = current->left;
            }
            else
            {
                print(current->val);
                pre->right = NULL;
                current = current->right;
            }
        }
    }
}

int main()
{
    io_faster
    file();
    int t = 1;
    while (t--)
    {
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);

        MorrisTraversal(root);
    }
    return 0;
}