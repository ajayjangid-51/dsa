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
bool strmatch(string str, string pattern, int n, int m)
{
    if (m == 0)
        return (n == 0);

    bool lookup[n + 1][m + 1];

    memset(lookup, false, sizeof(lookup));

    lookup[0][0] = true;

    for (int j = 1; j <= m; j++)
        if (pattern[j - 1] == '*')
            lookup[0][j] = lookup[0][j - 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // a) We ignore ‘*’ character and move
            //    to next  character in the pattern,
            //     i.e., ‘*’ indicates an empty sequence.
            // b) '*' character matches with ith
            //     character in input
            if (pattern[j - 1] == '*')
                lookup[i][j] = lookup[i][j - 1] || lookup[i - 1][j];

            // Current characters are considered as
            // matching in two cases
            // (a) current character of pattern is '?'
            // (b) characters actually match
            else if (pattern[j - 1] == '?' || str[i - 1] == pattern[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1];

            // If characters don't match
            else
                lookup[i][j] = false;
        }
    }

    return lookup[n][m];
}
int isMatch(const string A, const string B)
{
    return strmatch(A, B, A.size(), B.size());
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
    }
    return 0;
}