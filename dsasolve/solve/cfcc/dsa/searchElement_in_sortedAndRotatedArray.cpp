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
int getPivot(vi &A)
{
    int n = A.size();
    int i = 0, j = n - 1;
    int ans = -1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        deb(mid);
        deb(A[mid]);
        bool left = 0;
        if (A[i] > A[mid])
            left = 1;

        if (left)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
        if (A[mid - 1] > A[mid])
        {
            ans = mid;
            break;
        }
        if (A[mid + 1] < A[mid])
        {
            ans = mid + 1;
            break;
        }
    }

    return ans;
}
int binarySearch(vi &A, int i, int j, int k)
{
    int indx = -1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (A[mid] == k)
            indx = mid;
        if (k < mid)
        {
            j = mid - 1;
        }
        else
            i = mid + 1;
    }
    return indx;
}
void solve()
{
    // vi A = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    vi A = {9, 10, 1, 2, 3, 4, 5, 6, 7, 8};
    // vi A = {3, 5, 1, 2};
    int k = 10;
    int p = getPivot(A);
    deb(p);
    int i = 0, j = p - 1;
    int ans = binarySearch(A, i, j, k);
    i = p, j = A.size() - 1;
    if (ans == -1)
    {
        ans = binarySearch(A, i, j, k);
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