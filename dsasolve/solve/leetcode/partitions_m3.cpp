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
    vi v = {1, 2, 3, 0, 3};
    int n = v.size();
    vi suffix(n);
    int t = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        suffix[i] = t + v[i];
        t = suffix[i];
    }
    int sum = suffix[0];
    sum /= 3;
    deb(sum);
    int p = 0, s = 0;
    vi v1, v2;

    for (int i = 0; i < n; i++)
    {
        p += v[i];
        if (p == sum)
            v1.push_back(i);
        int j = n - 1 - i;
        s += v[j];
        if (s == sum)
            v2.push_back(j);
    }
    trav(v1) print(x);
    nline;
    trav(v2) print(x);
    nline;
    int cnt = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            // if ((suffix[v1[i] + 1] - suffix[v2[j]]) == sum)
            //     cnt++;
            deb(v[v1[i]]);
            deb(v[v2[j]]);
            if (v1[i] < v2[j] - 1)
            {

                if ((suffix[v1[i] + 1] - suffix[v2[j]]) == sum)
                {
                    print(v1[i]);
                    print(v2[j]);

                    cnt++;
                }
            }
        }
    }
    debline(cnt);
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