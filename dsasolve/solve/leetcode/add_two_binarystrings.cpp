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
int btod(string s)
{
    int t = 1;
    int num = 0;
    int i = s.size() - 1;
    for (; i >= 0; i--)
    {
        int digt = s[i] - '0';
        num += digt * t;
        t *= 2;
    }
    debline(num);
    return num;
}
string dtob(int n)
{
    vi v;
    while (n != 0)
    {
        int rem = n % 2;
        v.push_back(rem);
        n /= 2;
    }
    reverse(range(v));
    string s;
    trav(v) s.push_back(char(x + '0'));
    return s;
}
void solve()
{
    string A("111");
    string B("101");
    int num = btod(A) + btod(B);
    string ans = dtob(num);
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
        // string ans = addBinary();
        // debline(ans);
        solve();
    }
    return 0;
}