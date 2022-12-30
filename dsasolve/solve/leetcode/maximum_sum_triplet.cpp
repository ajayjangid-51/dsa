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
void solve()
{
    // vi A = {2, 5, 3, 1, 4, 9};
    vi A = {1, 2, 3};
    int n = A.size();
    int maxx = INT_MIN;
    for (int i = 0; i <= n - 3; i++)
    {
        for (int j = i + 1; j <= n - 2; j++)
        {
            while (A[j] < A[i] and j < n - 1)
                j++;
            if (j >= n - 1)
                break;
            // sum += A[j];
            for (int k = j + 1; j <= n - 1; k++)
            {
                while (A[k] < A[j] and k < n)
                    k++;
                if (k >= n)
                    break;
                print(A[i]);
                print(A[j]);
                print(A[k]);
                nline;
                int sum = A[i] + A[j] + A[k];
                maxx = max(maxx, sum);
            }
        }
    }
    deb(maxx);
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