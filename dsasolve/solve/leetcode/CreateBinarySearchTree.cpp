#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define size(x) x.size()

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
struct bstNode
{
    int val;
    bstNode *left;
    bstNode *right;
    bstNode(int val) : val(val), left(NULL), right(0) {}
};
bstNode *CreateBST(vi treeArray)
{
    bstNode *root = new bstNode(treeArray[0]);
    queue<bstNode *> que;
    que.push(root);
    bstNode *temp = 0;
    int i = 1;
    while (!que.empty())
    {
        bstNode *p = que.front();
        que.pop();
        if (treeArray[i] != -1)
        {
            temp = new bstNode(treeArray[i]);
            p->left = temp;
            que.push(temp);
            i++;
        }
        if (treeArray[i] != -1)
        {
            temp = new bstNode(treeArray[i]);
            p->right = temp;
            que.push(temp);
            i++;
        }
    }
    return root;
}
// void insertinBST(bstNode *root, int value)
// {
// }
bstNode *inordePredeccsor(bstNode *node)
{
    if (!node->left)
        return 0;
    else
    {
        bstNode *p = node->left;
        while (p->right)
        {
            p = p->right;
        }
        return p;
    }
}
bstNode *inorderSuccessor(bstNode *node)
{
    if (!node->right)
        return 0;
    else
    {
        bstNode *p = node->right;
        while (p->left)
        {
            p = p->left;
        }
        return p;
    }
}
void deleteinBST(bstNode *root, int value)
{
    if (value == root->val)
    {

        bstNode *pre = inordePredeccsor(root);
        bstNode *suc = inorderSuccessor(root);

        if (pre)
        {
            if (pre == root->left)
            {
                root->val = pre->val;
                root->left = 0;
                // delete (pre);
                free(pre);
            }
            int rt = root->val;
            root->val = pre->val;
            pre->val = rt;
            root->left = 0;
            // deleteinBST(pre, rt);
            deleteinBST(root, pre->val);
            // delete (pre);
        }
        else if (suc)
        {
            if (suc == root->right)
            {
                root->val = suc->val;
                root->right = 0;
                // delete (suc);
                free(suc);
                return;
            }
            else
            {

                int rt = root->val;
                root->val = suc->val;
                suc->val = rt;
                root->right = 0;
                // deleteinBST(suc, rt);
                deleteinBST(root, suc->val);
            }

            // delete (suc);
        }
        // else
        // {
        //     delete (root);
        //     return;
        // }
    }
    if (value > root->val)
    {
        deleteinBST(root->right, value);
    }
    else if (value < root->val)
    {
        deleteinBST(root->left, value);
    }
}

void inOrdertrav(bstNode *root)
{
    if (!root)
        return;
    inOrdertrav(root->left);
    print(root->val);
    inOrdertrav(root->right);
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
        vi treeArray;
        treeArray = {30, 15, 50, 10, 20, 40, 60, -1, -1, -1, -1, -1, -1, -1, -1};
        bstNode *root = CreateBST(treeArray);
        inOrdertrav(root);
        deb(root->right->right->val); // always read as like this.. "root-ka-right-ka-right-ki-value"
        deleteinBST(root, 20);
        inOrdertrav(root);
    }
    return 0;
}