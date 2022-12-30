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
int solve(const vector<int> &A)
{
    int n = A.size();
    vector<vector<int>> store(n, vector<int>(n, -1));
    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        store[i][n - 1] = 2;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 2; j >= 0; j--)
        {
            if (i == j)
                continue; // put "X" in that.
            if (i > j)
                continue;
            int k = j + 1;
            // int jj = A[j];
            // int ii = A[i];
            while (k < n)
            {
                if (A[k] + A[i] == 2 * A[j])
                {
                    // deb(t);
                    store[i][j] = store[j][k] + 1;

                    // deb(i);
                    // deb(j);
                    // debline(store[i][j]);
                    // ii = jj;
                    // jj = A[k];
                    ans = max(ans, store[i][j]);

                    break;
                    // debline(t);
                }
                else
                    store[i][j] = 2;
                ans = max(ans, store[i][j]);
                k++;
            }
        }
    }
    trav(store)
    {
        trav2(x) print(y);
        nline;
    }
    debline(ans);
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vi A = {9, 4, 7, 2, 10};
        // vi A = {3, 6, 9, 12};
        vi A = {100, 10, 8, 300, 6, 1, 4, 2};
        solve(A);
    }
    return 0;
}