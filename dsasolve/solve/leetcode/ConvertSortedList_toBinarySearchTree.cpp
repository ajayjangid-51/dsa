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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
pii getMid(vi arr, int startindex, int endindex)
{
    if (endindex < 0 or endindex >= arr.size())
        return {-1, -1};

    float siz = (endindex - startindex) + 1;

    int index = ceil(float(siz) / 2) - 1;
    debline(index);
    return {arr[index], index};
}
TreeNode *sortedListToBST(ListNode *A)
{
    vi arr = {1, 2, 3, 4};
    // while (A)
    // {
    //     deb(A);
    //     arr.push_back(A->val);
    //     A = A->next;
    // }

    // now creating BBST(Balanced-Binary-Search-Tree)
    TreeNode *root = new TreeNode;
    // root->v
    queue<pair<pii, char>> que; // {value, index}
    deb(arr.size());
    que.push({getMid(arr, 0, arr.size() - 1), 'z'});
    // deb(que.front());
    TreeNode *curr = root;

    while (!que.empty())
    {
        pair<pii, char> node = que.front();
        que.pop();
        TreeNode *temp = new TreeNode;
        temp->val = node.first.first;
        temp->left = NULL;
        temp->right = NULL;
        if (node.second == 'z')
        {
            root = temp;
            curr = root;
        }
        else
        {
            if (node.second == 'l')
            {
                curr->left = temp;
                //     curr = temp;
            }
            else
            {
                curr->right = temp;
                curr = temp;
            }
        }

        // left-array of node
        pii leftnode = getMid(arr, 0, node.second - 1);
        if (leftnode.first != -1)
        {

            que.push({leftnode, 'l'});
            // temp->left->val = leftnode.first;
        }
        // right-array of node
        pii rightnode = getMid(arr, node.second + 1, arr.size() - 1);
        if (rightnode.first != -1)
        {

            que.push({rightnode, 'r'});
            // temp->right->val = rightnode.first;
        }
    }

    //     int start = 0,
    //         end = arr.size() - 1;
    // while (start - end + 1 > 0)
    // {
    //     TreeNode *temp = NULL;
    //     temp->val = getMid(arr, start, end);
    //     temp->left->val = getMid(arr, )
    // }
    return root;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        ListNode *A = NULL;
        sortedListToBST(A);
    }
    return 0;
}