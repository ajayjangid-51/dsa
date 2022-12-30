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
void solve()
{
    vi v = {2, 4, 3, 7, 10, 8, 2, 7};
    // vi v = {20, 15, 10, 17};
    // vi v = {114, 55, 95, 131, 77, 111, 141};
    // vi v = {4, 42, 40, 26, 46};
    int B = 16;
    int n = v.size();
    vi sv(v);
    sort(range(sv));
    trav(sv) print(x);
    linebreak;
    int ans = 0;
    int rem = B;
    for (int i = sv.size() - 1; i >= 0; i--)
    {
        if (i == 0)
            break;
        int nextmax = sv[i - 1];
        deb(nextmax);
        int diff = sv[i] - nextmax;
        deb(diff);
        int num = n - i;
        deb(num);
        deb(rem);
        int available = diff * num;
        if (rem >= available)
        {

            rem -= available;
            ans = (sv[i] - diff);
        }
        else
        {
            int d = available - rem;
            rem = 0;
            deb(d);
            int x = (d / num);
            debline(x);
            ans = nextmax + x;
        }
        deb(available);
        deb(rem);

        // rem = rem - (diff * num);
        // deb(rem);
        deb(ans);
        if (rem == 0)
        {
            break;
        }
        linebreak;
    }
    debline(ans);
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