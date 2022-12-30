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
#define vi vector<long>
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

int solvi(int n, vi &store)
{
    // base-cases:-
    if (n == 0)
        return 1;
    if (n == 2)
        return 1;
    // store-case:-
    if (store[n] != -1)
        return store[n];
    // recursive-fn:-
    int ans = 0;
    for (int i = 0; i < n; i += 2)
    {
        // int x = (solvi(i, store) % MOD * solvi(n - i - 2, store) % MOD) % MOD;
        int x1 = solvi(i, store);
        x1 = (x1 % MOD + solvi(n - i - 2, store) % MOD) % MOD;
        // int x = (x1 % MOD + x2 % MOD) % MOD;
        // int x = (x1 + x2) % MOD;
        // ans = (ans % MOD + x % MOD) % MOD;/
        // ans = (ans + x1) % MOD;
        ans += x1;
        print("😀1 :-");
        deb(ans);
        ans = ans % MOD;
        print("😀2 :-");
        deb(ans);
    }
    store[n] = ans;
    return ans;
}
int chordCnt(int A)
{
    vi store((2 * A) + 1, -1);
    int ans = solvi(2 * A, store) % MOD;
    debline(ans);
    return 0;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        chordCnt(22);
    }
    return 0;
}
