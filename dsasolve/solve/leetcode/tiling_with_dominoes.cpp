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
int t = 1;
int solvi(int A, vector<ll> &store)
{
    // base-cases:-
    if (A == 1)
    {
        // store[A] = 0;
        return 0;
    }
    if (A == 0)
    {
        // store[A] = 1;
        return 1;
    }
    if (A < 0)
        return 0;
    // store-case:-
    if (store[A] != -1)
    {
        deb(A);
        debline(store[A]);
        return (store[A]);
    }

    // int ans = 0;
    // ans = ((solvi(A - 2, store)) * 3) + ((solvi(A - 4, store)) * 2) + ((solvi(A - 6, store)) * 2);
    // int ans = ((solvi(A - 2, store) % MOD) * (3 % MOD)) % MOD;
    int ans = solvi(A - 2, store) * 3;
    ans = ans % MOD;
    int i = 4;
    while (1)
    {
        int tmp = A - i;
        // deb(A);
        // deb(i);
        // deb(tmp);
        i += 2;
        if (tmp < 0)
        {

            // ans += solvi(tmp, store) * 2;
            // print("😀bye");
            break;
        }
        int x = ((solvi(tmp, store) % MOD) * (2 % MOD)) % MOD;
        x %= MOD;
        ans = (ans % MOD + x % MOD) % MOD;
        // ans = ans % MOD;
    }

    store[A] = ans % MOD;
    return ans;
}
int solve(int A)
{
    vector<ll> store(A + 1, -1);
    solvi(A, store);
    linebreak;
    trav(store) print(x);
    nline;
    deb(store[A]);

    return store[A];
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve(50);
        // solve(42);
        // solve(44);
        solve(8);
        // solve(12);
    }
    return 0;
}

#define vi vector<int>
const int MOD = 1000000007;

int t = 1;
int solvi(int A, vi &store)
{
    // base-cases:-
    if (A == 1)
    {
        store[A] = 0;
        return 0;
    }
    if (A == 0)
    {
        return 1;
    }
    if (A < 0)
        return 0;
    // store-case:-
    if (store[A] != -1)
        return store[A];

    int ans = (solvi(A - 2, store) * 3);
    // ans = ans % MOD;

    int i = 4;
    while (1)
    {
        int tmp = A - i;
        i += 2;
        if (tmp < 0)
            break;
        int tt = (solvi(tmp, store) * 2);
        ans = (ans % MOD + tt % MOD) % MOD;
        // ans = ans % MOD;
    }

    store[A] = ans;
    return ans;
}
int Solution::solve(int A)
{
    t = 1;
    vi store(A + 1, -1);
    solvi(A, store);
    return store[A];
}
