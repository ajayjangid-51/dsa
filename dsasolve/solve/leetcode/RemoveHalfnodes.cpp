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
TreeNode *four = 0;

TreeNode *solve(TreeNode *A)
{

    // we construct-tree level-order-wise
    if (!A)
        return 0;

    TreeNode *root = 0;
    if (!A->left and !A->right)
    {
        TreeNode *rt = new TreeNode(A->val);
        return rt;
    }
    queue<TreeNode *> que;
    // que.push(A);
    if (A->left and A->right)
    {
        root = new TreeNode(A->val);
        root->left = A->left;
        root->right = A->right;
        que.push(root);
    }
    else
    {
        TreeNode *t = 0;
        if (A->left)
            t = A->left;
        else
            t = A->right;
        while (1)
        {
            if ((t->left and t->right) or (!t->left and !t->right))
            {
                // debline(t->val);
                root = new TreeNode(t->val);
                root->left = t->left;
                root->right = t->right;
                que.push(root);
                break;
            }
            else
            {
                if (t->left)
                    t = t->left;
                if (t->right)
                    t = t->right;
            }
        }
    }
    // debline(root->val);

    TreeNode *p = 0;
    while (!que.empty())
    {
        p = que.front();
        // print("🖐️");
        // print(p->val);
        // print("🖐️");
        // nline;/
        que.pop();

        if (p->left)
        {
            // print("***left yes **");
            // debline(p->left->val);

            if ((p->left->left and p->left->right) or (!p->left->left and !p->left->right))
            {
                TreeNode *temp = new TreeNode(p->left->val);
                temp->left = p->left->left;
                temp->right = p->left->right;
                // print("😀");
                p->left = temp;
                que.push(temp);
                print("😡");
                print(temp->val);
                nline;
            }
            else
            {
                TreeNode *t = p->left;
                while (1)
                {
                    if ((t->left and t->right) or (!t->left and !t->right))
                    {
                        TreeNode *temp = new TreeNode(t->val);
                        temp->left = t->left;
                        temp->right = t->right;
                        p->left = t;
                        que.push(temp);
                        print("😡");
                        print(temp->val);
                        nline;
                        break;
                    }
                    else
                    {
                        if (t->left)
                            t = t->left;
                        if (t->right)
                            t = t->right;
                    }
                }
            }
        }
        if (p->right)
        {
            // print("**right yes**");
            debline(p->right->val);

            if ((p->right->left and p->right->right) or (!p->right->left and !p->right->right))
            {
                // debline(p->right->val);
                // debline(p->right->left);
                // debline(p->right->right);
                TreeNode *temp = new TreeNode(p->right->val);
                temp->left = p->right->left;
                temp->right = p->right->right;
                p->right = temp;
                print("😡");
                print(temp->val);
                nline;
                // print("🧑‍🚒");
                que.push(temp);
            }
            else
            {
                TreeNode *t = p->right;
                debline(t->val);
                while (1)
                {

                    if ((t->left and t->right) or (!t->left and !t->right))
                    {
                        debline(t->left);
                        debline(t->right);
                        TreeNode *temp = new TreeNode(t->val);
                        temp->left = t->left;
                        temp->right = t->right;
                        p->right = t;
                        que.push(temp);
                        debline("😡");
                        print(temp->val);
                        if (temp->val == 4)
                        {
                            four = temp;
                        }
                        // deb(temp->left->val);
                        // deb(temp->right->val);
                        nline;
                        break;
                    }
                    else
                    {
                        if (t->left)
                        {
                            print("yes left");
                            t = t->left;
                        }
                        if (t->right)
                        {
                            print("yes right");
                            t = t->right;
                            debline(t->val);
                        }
                    }
                }
            }
        }
    }
    return root;
}

void preorder(TreeNode *root)
{
    if (root)
    {
        print(root->val);
        if (root->left)
            print(root->left->val);
        if (root->right)
            print(root->right->val);
        line1;
        /* *-------------------------------------------------------------------------------* */
        preorder(root->left);
        preorder(root->right);
    }
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
        // root->right->right = new TreeNode(6);

        //
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->left->right = new TreeNode(5);
        root->left->right->left = new TreeNode(6);
        root->left->right->right = new TreeNode(7);
        root->right = new TreeNode(3);
        root->right->right = new TreeNode(4);
        root->right->right->left = new TreeNode(8);
        root->right->right->right = new TreeNode(9);
        root->right->right->right->right = new TreeNode(10);
        preorder(root);
        TreeNode *xx = solve(root);
        nline;
        print("hi");
        preorder(xx);
        deb(four->val);
        deb(four->left->val);
        deb(four->right->val);
    }
    return 0;
}