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
struct RandomListNode
{
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

void solve()
{
    RandomListNode A1(1);
    RandomListNode A2(2);
    RandomListNode A3(3);
    A1.next = &A2;
    A1.random = &A3;
    A2.next = &A3;
    A2.random = &A1;
    A3.random = &A1;

    map<int, tuple<int, RandomListNode *, RandomListNode *>>
        mp;
    int i = 0;
    RandomListNode *p = &A1;
    while (p)
        s
        {
            debline(p->label);
            mp[i] = make_tuple(p->label, p->next, p->random);
            p = p->next;
            i++;
        }
    debline(mp.size());
    trav(mp)
    {
        print(x.first);
        print(get<0>(x.second));
        if (get<1>(x.second))
            print(get<1>(x.second)->label);
        else
            print("NULL");
        if (get<2>(x.second))
            print(get<2>(x.second)->label);
        nline;
    }
    RandomListNode *ans = NULL;

    RandomListNode *p1 = new RandomListNode(get<0>(mp[0]));
    p1->next = get<1>(mp[0]);
    p1->random = get<2>(mp[0]);
    ans = p1;
    p = ans;
    for (int i = 1; i < mp.size(); i++)
    {
        p1 = new RandomListNode(get<0>(mp[i]));
        p1->next = get<1>(mp[i]);
        p1->random = get<2>(mp[i]);
        p->next = p1;
        p = p1;
    }
    // return ans;
    p = ans;
    while (p)
    {
        p->random = ;
        p = p->next;
    }
    while (ans)
    {
        deb(ans->label);
        ans = ans->next;
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