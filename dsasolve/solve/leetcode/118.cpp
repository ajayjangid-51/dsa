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
#define mp make_pair
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
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

int main()
{
    io_faster
    file();
    int n;
    cin >> n;
    vector<vi> v(n);
    deb(v.size());
    v[0].assign(1, 1);
    if (n == 1)
    {

        // return v;
    }

    v[1].assign(2, 1);
    if (n == 2)
    {
        // return v;
    }
    forn(i, 2, n)
    {
        v[i].assign((i + 1), 1);
        // forn(j, 1, i - 1)
        int k = 1;
        forn(j, 0, i - 1)
        {
            v[i][k] = v[i - 1][k - 1] + v[i - 1][k];
            k++;
        }
    }
    trav(v)
    {
        trav2(x) cout << y << ' ';
        cout << endl;
    }

    return 0;
}
