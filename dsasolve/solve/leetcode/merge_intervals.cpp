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

struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

void solve()
{
    Interval i1(1, 2), i2(3, 5), i3(6, 7), i4(8, 11), i5(12, 16);
    Interval i6(9, 10);
    vector<Interval> v = {i1, i2, i4, i5};
    trav(v)
    {
        print(x.start);
        print(x.end);
        nline;
    }
    linebreak;
    linebreak;
    int fst = -1, scnd = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (i6.start >= v[i].start and i6.start <= v[i].end)
        {
            fst = i;
            break;
        }
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (i6.end >= v[i].start and i6.end <= v[i].end)
        {
            scnd = i;
            break;
        }
    }
    deb(fst);
    deb(scnd);
    if (fst != -1 and scnd != -1)
    {
        if (fst == scnd)
        {
            deb("hiiii....");
            trav(v) print(x.start),
                print(x.end),
                nline;
        }

        v.insert(v.begin() + fst, i6);
        v.erase(v.begin() + fst + 1, v.begin() + scnd + 2);
    }

    else if (fst == -1 and scnd == -1)
    {

        int index = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].end < i6.start)
            {
                index = i;
            }
        }
        if (index == -1)
        {
            v.push_back(i6);
        }
        else
        {
            v.insert(v.begin() + index + 1, i6);
        }
    }
    else if (fst == -1)
    {
        v.erase(v.begin());
        v.insert(v.begin(), i6);
    }
    else if (scnd == -1)
    {
        v.pop_back();
        v.push_back(i6);
    }
    trav(v)
    {
        print(x.start);
        print(x.end);
        nline;
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