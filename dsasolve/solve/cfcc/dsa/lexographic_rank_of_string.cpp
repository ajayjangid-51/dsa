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
int facto(int n)
{
    if (n == 0 or n == 1)
        return 1;
    return n * facto(n - 1);
}
void solve()
{
    string s("sadasdsasassasas");

    int ans = 0;
    for (int i = 0; i < sz(s); i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < sz(s); j++)
        {
            if (s[j] < s[i])
            {
                // deb(s[j]);
                cnt++;
            }
        }
        int d_count[52] = {0};
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
        // nline;
        // for (int k = 0; k < 52; k++)
        //     print(d_count[k]);
        // nline;

        int d_fact = 1;
        for (auto x : d_count)
        {
            d_fact *= facto(x);
        }
        // deb(d_fact);
        ans = ans + ((cnt * (facto(sz(s) - (i + 1)))) / (d_fact));
        // deb(ans);
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
        // char c = 'A';
        // deb(c);
        // deb(int(c));
        // char d = 'a';
        // deb(d);
        // deb(int(d)); // deb(
    }
    return 0;
}