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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void reverselist(ListNode **head)
{
    // Initialize prev and current pointers
    ListNode *prev = NULL, *curr = *head, *next;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
}

ListNode *addTwoNumbers(ListNode *A, ListNode *B)
{
    int power = 0;
    ListNode *p1 = A, *p2 = B, *prev = 0;
    int sz1 = 0, sz2 = 0;
    while (p1)
    {
        sz1++;
        p1 = p1->next;
    }
    while (p2)
    {
        sz2++;
        p2 = p2->next;
    }
    deb(sz1);
    deb(sz2);
    ListNode *sm = A, *gr = B;
    if (sz1 >= sz2)
    {
        sm = B;
        gr = A;
        p1 = A;
        p2 = B;
    }
    else
    {
        sm = A;
        gr = B;
        p1 = B;
        p2 = A;
    }

    while (p1 or p2)
    {
        int a = 0, b = 0;
        if (p1)
            a = p1->val;
        if (p2)
            b = p2->val;
        int t = a + b;
        debline(t);
        t += power;
        if (t > 9)
        {
            int r = t % 10;
            p1->val = r;
            power = (t / 10) % 10;
        }
        else
        {
            p1->val = t;
            power = 0;
        }
        if (p1)
        {
        }
        if (p1)
        {

            prev = p1;
            p1 = p1->next;
        }
        if (p2)
            p2 = p2->next;
    }
    debline(power);
    if (power != 0)
    {
        sm->val = power;
        prev->next = sm;
        sm->next = 0;
    }
    reverselist(&gr);
    ListNode *p = gr;
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    return 0;
}

void solve()
{
    ListNode *n1 = new ListNode(9);
    ListNode *n2 = new ListNode(9);
    ListNode *n3 = new ListNode(9);
    n1->next = n2;
    n2->next = n3;

    ListNode *m1 = new ListNode(1);
    // ListNode *m2 = new ListNode(9);
    // ListNode *m3 = new ListNode(9);
    // m1->next = m2;
    // m2->next = m3;

    addTwoNumbers(n1, m1);
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