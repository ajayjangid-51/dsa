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
#define debline(x) cout << "๐Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "๐ข" << #x << " = " << x << "________________๐ข " << endl
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
void fn(ListNode *head)
{
    bool flag = 0;
    ListNode *p1 = head, *p2 = head;
    while (p1 and p2 and p2->next)
    {
        p1 = p1->next;
        p2 = p2->next->next;
        if (p1 == p2)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        ListNode *prev = 0;
        p1 = head;
        while (p1)
        {
            if (p1 == p2->next)
            {
                if (prev)
                    prev->next = 0;
                else
                    head = 0;
                break;
            }
            prev = p1;
            p1 = p1->next;
        }
    }
    // return head;
    ListNode *p = head;
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    linebreak;
}
void solve()
{
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(3);
    ListNode *n3 = new ListNode(5);
    n1->next = n2;
    n2->next = n3;
    n3->next = n2;
    fn(n1);
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