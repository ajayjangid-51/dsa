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
bool flag = 0;
int fn(vi &A, vvi &store, int i, int j)
{
    if (A.size() == 1)
        return 0;
    if (store[i][j] != -1)
        return store[i][j];
    int first = *A.begin(), end = *A.rbegin();
    int maxx = max(first, end);
    if (flag)
    {
        if (maxx = first)
        {
            fn()
        }
    }
    else
    {

        vi A1(A.begin(), A.end() - 1), A2(A.begin() + 1, A.end());
        flag = 1;
        // trav(A1) print(x);
        // nline;
        // trav(A2) print(x);

        int ans = 0;
        ans = max((end + fn(A1, store, i, j - 1)), (first + fn(A2, store, i + 1, j)));
        store[i][j] = ans;
        return ans;
    }
}
int maxcoin(vector<int> &A)
{
    int n = A.size();
    vvi store(n, vi(n, -1));
    // fn(A);

    return 1;
}
void solve()
{
    vi A = {5, 4, 8, 10};
    maxcoin(A);
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