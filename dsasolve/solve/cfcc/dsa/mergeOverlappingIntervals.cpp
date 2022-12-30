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
    Interval() : start(2), end(2) {}
    Interval(int s, int e) : start(s), end(e) {}
};
bool IntervalSort(const Interval &i1, const Interval &i2)
{
    if (i1.start == i2.start)
    {
        return i1.end < i2.end;
    }
    else
    {
        return i1.start < i2.start;
    }
}
void solve()
{
    // Interval i1(1, 3), i2(2, 6), i3(8, 10), i4(15, 18), i5(2, 4), i6(15, 18);
    Interval i1(1, 10), i2(2, 9), i3(3, 8), i4(4, 7), i5(5, 6), i6(6, 6);
    Interval i7(29, 100), i8(100, 100);
    // vector<Interval> v = {i1, i2, i3, i4, i5, i6};
    vector<Interval>
        v = {i7, i8};
    trav(v)
    {
        print(x.start);
        print(x.end);
        nline;
    }
    linebreak;

    // sort the v:-
    sort(v.begin(), v.end(), IntervalSort);
    trav(v)
    {
        print(x.start);
        print(x.end);
        nline;
    }

    // now merge with "n" and "p" index-pointers:-
    linebreak;
    int p = 0, n = 1;
    while (n < v.size())
    {
        if (v[n].start == v[p].start)
        {
            // v.erase(v.begin() + p);
            v[p].start = -1;
            v[p].end = -1;
            p++;
            n++;
        }
        else if (v[n].start <= v[p].end)
        {

            v[n].start = v[p].start;
            if (v[n].end < v[p].end)
            {
                v[n].end = v[p].end;
            }
            // v.erase(v.begin() + p);
            v[p].start = -1;
            v[p].end = -1;
            p++;
            n++;
        }
        else
        {
            deb(p);
            deb(n);
            p++;
            n++;
        }
    }
    linebreak;
    trav(v)
    {
        if (x.start != -1 and x.end != -1)
        {

            print(x.start);

            print(x.end);
            nline;
        }
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