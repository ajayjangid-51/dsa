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
bool solve(string A, string B)
{
    int n = A.length(), m = B.length();
    // vvi store(n+ 1, vi(m+1 , 0));
    vvi store(m + 1, vi(n + 1, 0));
    store[0][0] = 1;
    for (int i = 2; i <= m; i++)
    {
        if (B[i - 1] == '*')
        {
            store[i][0] = store[i - 2][0];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (B[i - 1] == '*')
            {
                store[i][j] = store[i - 2][j];
                if (store[i][j])
                    continue;
                if (B[i - 2] == A[j - 1] or B[i - 2] == '.')
                {
                    bool y = store[i][j - 1];
                    store[i][j] = y;
                }
            }
            else if (B[i - 1] == '.' or (B[i - 1] == A[j - 1]))
            {
                store[i][j] = store[i - 1][j - 1];
            }
            else if (B[i - 1] != A[j - 1])
            {
                store[i][j] = 0;
            }
        }
    }
    trav(store)
    {
        trav2(x)
        {
            print(y);
        }
        nline;
    }
    return store[m][n];
}
int isMatch(const string A, const string B)
{
    return solve(A, B);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();isMatch
        isMatch("abcbcd", "a.*c.*d");
    }
    return 0;
}