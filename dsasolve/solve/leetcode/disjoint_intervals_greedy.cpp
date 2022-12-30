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
bool sortcol(vi &v1, vi &v2)
{
    return v1[1] < v2[1];
}
void solve()
{
    // vvi A = {{1, 4}, {2, 3}, {4, 6}, {8, 9}};
    vvi A = {
        {3, 15},
        {8, 13},
        {5, 13},
        {7, 9},
        {5, 14},
        {2, 6},
        {6, 13},
        {2, 4},
        {3, 11},
    };
    sort(range(A), sortcol);
    trav(A)
    {
        trav2(x) print(y);
        nline;
    }
    int cnt = 1;
    pair<int, int> p = {A[0][0], A[0][1]};
    debpair(p);
    for (int i = 1; i < A.size(); i++)
    {

        if (A[i][0] > p.second)
        {
            cnt++;
            p = {A[i][0], A[i][1]};
            debpair(p);
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