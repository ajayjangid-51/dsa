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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
    int A = 15;
    int len = 1;
    int cnt = 1;
    while (cnt < A)
    {
        len++;
        cnt += (1 << ((len - 1) / 2));
    }
    deb(cnt);
    deb(cnt);
    deb(len);
    int last = cnt - (1 << (len - 1) / 2);
    deb(last);
    int offset = A - last - 1;
    deb(offset);
    int ans = 1;
    ans <<= (len - 1);
    deb(ans);
    ans = ans | (offset << (len / 2));
    debline(ans);
    int ans2 = (ans >> (len / 2));
    if (len % 2)
        ans2 >>= 1;
    int ans3 = 0;
    int j = 0;
    vector<bool> v1;
    while (ans2)
    {
        if (ans2 & 1)
            v1.push_back(1);
        else
            v1.push_back(0);
        // ans3 = ans3 + pow(2, j);
        ans2 >>= 1;
        // j++;
    }
    // int j = 0;
    for (int i = v1.size() - 1; i >= 0; i--)
    {
        if (v1[i])
            ans3 = ans3 + pow(2, j);
        j++;
    }

    deb(ans3);
    ans |= ans3;
    deb(ans);
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