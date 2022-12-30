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

ListNode *deleteDuplicates(ListNode *A)
{
    ListNode *prev = new ListNode(-1);
    ListNode *res = prev;
    ListNode *p = A;
    while (p)
    {
        deb(p->val);
        if ((p->next != 0) and (p->next->val == p->val))
        {
            ListNode *p1 = p;
            int vali = p->val;
            while (p1->next and p1->next->val == vali)
            {
                ListNode *tmp = p1;
                deb(tmp->val);
                p1 = p1->next;
                free(tmp);
            }
            p = p1->next;
            deb(p1->val);
            free(p1);
        }
        else
        {
            print("😀");
            nline;
            prev->next = p;
            debline(p->val);
            debline(prev->next->val);
            prev = p;
            p = p->next;
        }
        linebreak;
    }
    prev->next = 0;
    return res->next;
}
void solve()
{
    ListNode *a1 = new ListNode(1);
    ListNode *a2 = new ListNode(1);
    a1->next = a2;
    ListNode *a3 = new ListNode(1);
    a2->next = a3;
    ListNode *a4 = new ListNode(2);
    a3->next = a4;
    ListNode *a5 = new ListNode(2);
    a4->next = a5;
    ListNode *a6 = new ListNode(2);
    a5->next = a6;
    ListNode *a7 = new ListNode(2);
    a6->next = a7;
    ListNode *a8 = new ListNode(2);
    a7->next = a8;
    ListNode *a9 = new ListNode(2);
    a8->next = a9;
    ListNode *a10 = new ListNode(3);
    a9->next = a10;
    ListNode *a11 = new ListNode(3);
    a10->next = a11;
    ListNode *a12 = new ListNode(5);
    a11->next = a12;
    ListNode *a13 = new ListNode(5);
    a12->next = a13;
    ListNode *a14 = new ListNode(6);
    a13->next = a14;
    ListNode *a15 = new ListNode(7);
    a14->next = a15;
    ListNode *a16 = new ListNode(7);
    a15->next = a16;

    ListNode *p = a1;
    while (p)
    {
        print(p->val);
        p = p->next;
    }
    nline;
    linebreak;
    p = deleteDuplicates(a1);
    deb(p);
    while (p)
    {
        print(p->val);
        p = p->next;
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
        solve();
    }
    return 0;
}

/* 

ListNode *Solution::deleteDuplicates(ListNode *A)
{
    ListNode *prev = new ListNode(-1);
    ListNode *res = prev;

    ListNode *p = A;
    while (p)
    {
        if (p->next and p->next->val == p->val)
        {
            ListNode *p1 = p;
            int vali = p->val;
            while (p1->next and p1->next->val == vali)
            {
                ListNode *tmp = p1;
                p1 = p1->next;
                free(tmp);
            }
            p = p1->next;
            free(p1);
        }
        else
        {
            prev->next = p;
            prev = p;
            p = p->next;
        }
    }
    prev->next = 0;
    return res->next;
}

* /