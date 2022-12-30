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
    // string A("1123");
    // string B("0111");
    // string A("1807");
    // string B("7810");
    string A("3978973343647409");
    string B("1890771099992259");
    vector<vector<int>> v(10);
    for (int i = 0; i < A.size(); i++)
    {
        int x = A[i] - '0';
        v[x].push_back(i);
    }
    int a = 0, b = 0;
    for (int i = 0; i < B.size(); i++)
    {
        int x = B[i] - '0';
        if (v[x].size() != 0)
        {
            debline(x);
            debline(i);
            auto it = v[x].begin();
            bool flag = 0;
            for (; it != v[x].end(); it++)
            {
                deb(*it);
                if (*it == i)
                {
                    a++;
                    v[x].erase(it);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                b++;
                v[x].erase(v[x].begin());
            }
        }
    }
    debline(a);
    debline(b);
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