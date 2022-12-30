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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

void solve()
{
    Node n1(1), n2(2), n3(1), n4(3), n5(4), n6(3), n7(1), n8(3), n9(2);
    n1.next = &n2;
    n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n6;
    // n5.next = &n6;
    // n6.next = &n7;
    // n7.next = &n8;
    // n8.next = &n9;
    Node *p = &n1;
    int sz = 0;
    while (p)
    {
        print(p->val);
        sz++;
        p = p->next;
    }
    nline;
    deb(sz);
    int mid = ceil(float(sz) / 2);
    deb(mid);
    int cnt = 1;
    Node *last = NULL;
    Node *crnt = &n1;
    Node *next = n1.next;
    while (cnt < mid)
    {
        print("😀");

        Node *tempNext = next->next;
        crnt->next = last;
        next->next = crnt;
        last = crnt;
        crnt = next;
        next = tempNext;
        cnt++;
    }
    deb(cnt);
    Node *secondStart = next;
    if (sz % 2 != 0)
        crnt = last;
    deb(last->val);
    deb(crnt->val);
    deb(next->val);
    // deb(crnt->next->val);
    Node *firstStart = crnt;
    while (firstStart and secondStart)
    {
        if (firstStart->val != secondStart->val)
            print("flase");
        firstStart = firstStart->next;
        secondStart = secondStart->next;
    }
    deb("true");
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