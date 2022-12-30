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
ListNode *midnode(ListNode *head)
{
    ListNode *t = head, *h = head;
    ListNode *prev = 0;
    while (h and h->next)
    {
        prev = t;
        t = t->next;
        h = h->next->next;
    }
    return prev;
}
ListNode *merge(ListNode *A, ListNode *B)
{
    ListNode *curr = new ListNode(-1);
    ListNode *head = curr;
    ListNode *p1 = A, *p2 = B;
    while (p1 and p2)
    {
        if (p1->val <= p2->val)
        {
            curr->next = p1;
            p1 = p1->next;
            curr = curr->next;
        }
        else
        {
            curr->next = p2;
            p2 = p2->next;
            curr = curr->next;
        }
    }
    if (p1)
    {
        curr->next = p1;
    }
    else
    {
        curr->next = p2;
    }
    return head->next;
}
ListNode *fn(ListNode *start)
{
    ListNode *p = start;
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    nline;

    if (!start->next)
    {
        return start;
    }
    ListNode *mid = midnode(start);
    deb(mid->val);
    ListNode *nexti = mid->next;
    mid->next = 0;
    ListNode *head1 = fn(start);
    ListNode *head2 = fn(nexti);
    ListNode *ans = merge(head1, head2);
    return ans;
    // return 0;
}
void solve()
{
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(5);
    ListNode *n3 = new ListNode(4);
    ListNode *n4 = new ListNode(3);
    ListNode *n5 = new ListNode(8);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    ListNode *p = fn(n1);
    linebreak;
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    linebreak;
    // deb(p->val);
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