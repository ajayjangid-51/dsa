#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void solve()
{
    ListNode *v1 = new ListNode(2);
    v1->next = new ListNode(4);
    v1->next->next = new ListNode(3);
    v1->next->next->next = new ListNode(6);

    ListNode *v2 = new ListNode(5);
    v2->next = new ListNode(6);
    v2->next->next = new ListNode(7);

    ListNode *p = v1;
    while (p)
        print(p->val), p = p->next;
    p = v2;
    nline;
    while (p)
        print(p->val), p = p->next;

    nline;
    ListNode *v3 = new ListNode(-1);
    ListNode *p1 = v1, *p2 = v2;
    int carry = 0;
    //   int sum = p1->val+p2->val+carry;
    //     if(sum>9) carry = sum%9 , sum%=9;
    //     v3 = new ListNode(sum);
    p = v3;

    while (p1 and p2)
    {
        int sum = p1->val + p2->val + carry;
        if (sum > 9)
            carry = 1;
        else
            carry = 0;
        // deb(sum);
        // deb(sum % 10);
        p->next = new ListNode(sum % 10);
        p = p->next;
        p1 = p1->next;
        p2 = p2->next;
    }
    while (p1)
    {
        int sum = p1->val + carry;
        if (sum > 9)
            carry = 1;
        else
            carry = 0;
        p->next = new ListNode(sum % 10);
        p = p->next;
        p1 = p1->next;
    }
    while (p2)
    {
        int sum = p2->val + carry;
        if (sum > 9)
            carry = 1;
        else
            carry = 0;

        p->next = new ListNode(sum % 10);
        p = p->next;
        p2 = p2->next;
    }
    p = v3->next;
    while (p)
        print(p->val), p = p->next;
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