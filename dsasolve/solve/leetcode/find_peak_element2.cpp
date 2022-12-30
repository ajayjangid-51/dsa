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
vi ans;

pii getmaxincol(vvi &mat, int col)
{
    int maxx = INT_MIN;
    int maxx_index;
    for (int i = 0; i < mat.size(); i++)
    {
        if (maxx < mat[i][col])
        {
            maxx = mat[i][col];
            maxx_index = i;
        }
    }
    return {maxx, maxx_index};
}
void fn(vvi &mat, int start, int end)
{
    if (start == end)
    {
        pii pp = getmaxincol(mat, start);
        ans = {pp.second, start};
        return;
    }
    int mid = (start + end) / 2;
    pii p = getmaxincol(mat, mid);
    if (mid == 0 or mid == mat[0].size() - 1)
    {
        ans = {p.second, mid};
        deb("hi2");
        return;
    }
    if (p.first > mat[p.second][mid - 1] and p.first > mat[p.second][mid + 1])
    {
        deb("hi");
        ans = {p.second, mid};
        // print(v[0]);
        // print(v[1]);
        return;
    }
    else if (p.first < mat[p.second][mid - 1])
    {
        return fn(mat, start, mid - 1);
    }
    else
    {
        return fn(mat, mid + 1, end);
    }
}
void solve()
{
    // vvi mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
    // vvi mat = {{1, 4}, {3, 2}};
    // vvi mat = {{30, 41, 24, 11, 24}, {23, 14, 43, 18, 45}, {44, 42, 5, 39, 41}, {11, 35, 47, 16, 11}, {30, 25, 18, 41, 45}};
    vvi mat = {{10, 30, 40, 50, 20}, {1, 3, 2, 500, 4}};
    for (int i = 0; i < mat.size(); i++)
    {
        mat[i].insert(mat[i].begin(), 1, INT_MIN);
        ;
        mat[i].push_back(INT_MIN);
    }
    trav(mat)
    {
        trav2(x) print(y);
        nline;
    }
    // fn(mat, 0, mat[0].size() - 1);
    // linebreak;
    // trav(ans) print(x);
    // linebreak;
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
