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
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x) : data(x), left(0), right(0) {}
};
void IpostOrderTrav(Node *root)
{
    Node *p;
    stack<Node *> stk1, stk2;
    stk1.push(root);
    while (!stk1.empty())
    {
        p = stk1.top();
        stk1.pop();
        stk2.push(p);

        if (p->left)
        {
            stk1.push(p->left);
        }
        if (p->right)
        {
            stk1.push(p->right);
        }
    }
    while (!stk2.empty())
    {
        // print(stk2.top()->data);
        // stk2.pop();
        p = stk2.top();
        stk2.pop();
        print(p->data);
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
        // Node *root = new Node(8);
        // root->left = new Node(3);
        // root->left->left = new Node(6);
        // root->left->left->right = new Node(4);
        // root->left->left->right->left = new Node(2);
        // root->left->right = new Node(9);
        // root->left->right->left = new Node(1);
        // root->right = new Node(5);
        // root->right->left = new Node(7);
        // root->right->right = new Node(2);

        // solve();
        Node *root = NULL;
        root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->right = new Node(7);
        IpostOrderTrav(root);
    }
    return 0;
}