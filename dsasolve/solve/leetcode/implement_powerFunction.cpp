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
#define debline(x) cout << "๐Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "๐ข" << #x << " = " << x << "________________๐ข " << endl
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
// const int MOD = 1000000007;
int MOD;
int fn(int n, int rn)
{
    if (rn == 0)
        return 1;
    long long t = fn(n, (rn / 2));
    if (rn % 2 == 0)
    {
        return (t % MOD * t % MOD) % MOD;
    }
    else
        return ((n % MOD * t % MOD) % MOD * (t % MOD)) % MOD;
}
int pow(int x, int n, int d)
{
    if (x == 0)
        return 0;
    MOD = d;
    int xx = fn(x, n);
    int bl = 1;
    if (x < 0)
        bl = !bl;
    if (n % 2 == 0)
        bl = !bl;
    if (!bl)
    {
        print("hi");
        debline(xx);
        return xx;
    }
    else
    {
        print("hi1");
        debline(xx);
        return xx;
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
        // int ans = pow(-1, 1, 20);
        int MOD = 64735492;

        int ans = pow(71045970, 41535484, MOD);
        debline(ans);
        debline(MOD + ans);
    }
    return 0;
}