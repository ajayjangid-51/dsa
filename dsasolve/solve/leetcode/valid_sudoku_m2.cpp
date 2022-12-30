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
int solve()
{
    vs mat = {"53..7....", "6..195...", ".98....6.", "8...6...3", "4..8.3..1", "7...2...6", ".6....28.", "...419..5", "....8..79"};
    unordered_map<string, int> mp;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            // print(mat[i][j]);
            if (mat[i][j] == '.')
                continue;
            int boxnum = (i / 3) * 3 + (j / 3);
            string s1, s2, s3;
            // s1 = "row" + char(i + '0') + char(mat[i][j] + '0');
            s1 = "row";
            s1 += char(i + '0');
            s1 += mat[i][j];
            s2 = "col";
            s2 += char(j + '0');
            s2 += mat[i][j];
            s3 = "box";
            s3 += char(boxnum + '0');
            s3 += mat[i][j];
            deb(s1);
            deb(s2);
            deb(s3);
            if (mp.find(s1) != mp.end())
                return 0;
            if (mp.find(s2) != mp.end())
                return 0;
            if (mp.find(s3) != mp.end())
                return 0;
            mp[s1]++;
            mp[s2]++;
            mp[s3]++;
            linebreak;
        }
    }
    return 1;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        int x = solve();
        debline(x);
    }
    return 0;
}