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
bool check(vi &A, int mid, int &B)
{
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        if (sum > mid)
        {
            sum = A[i];
            cnt++;
        }
    }
    cnt++;
    if (cnt <= B)
        return 1;
    return 0;
}
void solve()
{
    // vi A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vi A = {3, 2, 2, 4, 1, 4};
    int B = 3;
    int i = INT_MIN, j = 0;
    trav(A)
    {
        i = max(i, x);
        j += x;
    }
    deb(i);
    deb(j);
    int ans = INT_MAX;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (check(A, mid, B))
        {
            ans = min(ans, mid);
            j = mid - 1;
        }
        else
            i = mid + 1;
    }
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
        solve();
    }
    return 0;
}