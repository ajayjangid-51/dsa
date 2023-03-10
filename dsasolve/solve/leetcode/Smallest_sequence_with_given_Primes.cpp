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

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int i, j, k;

int solve(int D, int A, int B, int C, vi &store)
{
    if (D == 1)
    {
        pii p1, p2, p3;
        p1 = {i * A, 1};
        p2 = {j * B, 2};
        p3 = {k * C, 3};
        pii ret = min(p1, min(p2, p3));
        if (ret.second == 1)
        {
            i = ret.first;
        }
        else if (ret.second == 2)
        {
            j = ret.first;
        }
        else
            k = ret.first;
        store[1] = ret.first;
        return ret.first;
    }
    solve(D - 1, A, B, C, store);
    pii p1, p2, p3;
    p1 = {i * A, 1};
    p2 = {j * B, 2};
    p3 = {k * C, 3};
    pii ret = min(p1, min(p2, p3));
    if (ret.second == 1)
    {
        i = ret.first;
    }

    else if (ret.second == 2)
    {
        j = ret.first;
    }
    else
        k = ret.first;
    store[D] = ret.first;
    return ret.first;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        i = j = k = 1;
        int A, B, C, D;
        A = 2, B = 5, C = 7, D = 8;
        vi store(D + 1);
        solve(D, A, B, C, store);
        trav(store)
        {
            print(x);
        }
        linebreak;

        // solve();
    }
    return 0;
}