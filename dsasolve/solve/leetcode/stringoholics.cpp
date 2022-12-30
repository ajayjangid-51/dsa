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
ll createlps(string pat)
{
    vi lps(pat.size());
    int len = 0;
    int M = pat.size();

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0)
            {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    // return lps[pat.size() - 1];
    // int M = pat.size();
    ll t1 = lps[M - 1];
    ll t2 = M - t1;
    if (t1 < t2)
        return M;
    else if (t1 % t2 != 0)
        return M;
    else
        return t2;
}
void solve()
{
    vs v = {"a", "ababa", "aba", "abab", "mem", "abcdeef"};
    vi ans;
    for (int i = 0; i < v.size(); i++)
    {
        ll lps = createlps(v[i]);
        deb(lps);
        ll k = 1;
        while (1)
        {
            ll t = (k * (k + 1)) / 2;
            if (lps == 0)
                lps = 1;
            if (t % lps == 0)
            {
                ans.push_back(k);
                break;
            }
            k++;
        }
        // print(k);
    }
    linebreak;
    deb(ans.size());
    trav(ans) print(x);
    linebreak;
    int len = v.size();
    ll anss = 1;
    for (ll i = 0; i < len; i++)
    {
        for (ll j = i + 1; j < len && ans[i] != 1; j++)
        {
            ans[j] = ans[j] / __gcd(ans[j], ans[i]);
        }
        anss = (1ll * ((anss % MOD) * (ans[i] % MOD)) % MOD);
    }
    // return ans % MOD;
    debline(anss % MOD);
    // gcd
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