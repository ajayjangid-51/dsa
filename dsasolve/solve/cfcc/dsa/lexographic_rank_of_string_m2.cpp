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
long long facto(long long n)
{
    if (n == 0 or n == 1)
        return 1;
    return (n * facto(n - 1)) % 1000003;
}
void solve()
{
    string s("sadasdsasassasas");

    long long ans = 0;
    for (int i = 0; i < sz(s); i++)
    {
        long long cnt = 0;
        for (int j = i + 1; j < sz(s); j++)
        {
            if (s[j] < s[i])
            {
                // deb(s[j]);
                cnt++;
            }
        }
        deb(cnt);
        long long d_count[52] = {0};
        for (int j = i; j < sz(s); j++)
        {
            if (s[j] >= 'A' and s[j] <= 'Z')
            {
                d_count[int(s[j]) - 65]++;
            }
            else
            {
                d_count[(s[j] - 97) + 26]++;
            }
        }
        nline;
        for (int k = 0; k < 52; k++)
            print(d_count[k]);
        nline;

        long long d_fact = 1;
        for (auto x : d_count)
        {
            d_fact = (d_fact * facto(x)) % 1000003;
        }
        deb(d_fact);
        int tt = sz(s) - (i + 1);
        deb(tt);
        int facttt = facto(tt);
        deb(facttt);
        long long t = cnt * facttt;
        deb(t);
        // t = t % 1000003;
        deb(t);
        // ans = (ans + (((cnt * (facto(sz(s) - (i + 1)))) % 1000003) / (d_fact))) % 1000003;
        ans = ans + (t / d_fact);
        deb(ans);
        linebreak1;
    }
    // debline(ans);
    // return (ans+1)%1000003;
    deb(ans + 1);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        int tt = (8 * facto(15)) / facto(8) * facto(6) * facto(2);
        deb(tt);
        deb((4 * 15 * 7 * 13 * 11 * 3));
    }
    return 0;
}