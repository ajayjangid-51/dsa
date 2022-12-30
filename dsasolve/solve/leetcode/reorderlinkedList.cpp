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
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void solve()
{
    // Node *a1 = new Node(1);
    // Node *a2 = new Node(2);
    // Node *a3 = new Node(3);
    // Node *a4 = new Node(4);
    // Node *a5 = new Node(5);
    Node *a1 = new Node(1);
    Node *a2 = new Node(7);
    Node *a3 = new Node(3);
    Node *a4 = new Node(4);
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    // a4->next = a5;
    int n = 0;
    Node *p = a1;
    while (p)
    {
        n++;
        print(p->data);
        p = p->next;
    }
    nline;
    debline(n);
    linebreak;

    int i = 0;
    int exit = 0;
    Node *current = a1;
    Node *nexti = a1->next;
    while (1)
    {
        if (exit > 100)
            break;
        exit++;
        int j = n - 1 - (i + 1);
        deb(j);
        if (j < i)
        {
            current->next = 0;
            break;
        }
        int t = j - i;
        deb(t);
        nexti = current->next;
        p = current;
        while (t--)
        {
            p = p->next;
        }
        current->next = p->next;
        p->next->next = nexti;
        current = nexti;
        i++;
        linebreak;
    }
    p = a1;
    linebreak;
    while (p)
    {
        if (exit > 200)
            break;
        exit++;
        print(p->data);
        p = p->next;
    }
    linebreak;
    deb(exit);
}

int main()
{

    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}