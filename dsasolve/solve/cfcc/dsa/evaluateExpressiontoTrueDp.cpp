#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
    string A("F|T^T&F");
    vector<bool> v1;
    vector<int> v2;
    for (auto x : A)
    {
        if (x == 'T')
            v1.push_back(1);
        else if (x == 'F')
            v1.push_back(0);
        else if (x == '&')
            v2.push_back(0); // 0 mane and
        else if (x == '|')
            v2.push_back(1); // 1 mane or
        else
            v2.push_back(2); // 2 mane xor
    }

    linebreak1;
    trav(v1) print(x);
    nline;
    trav(v2) print(x);
    nline;
    linebreak1;
    int n1 = v1.size();
    int n2 = v2.size();
    if (n1 != (n2 + 1))
        debline(0);
    vector<vector<int>> dp1(n1, vector<int>(n1, -1));
    vector<vector<int>> dp2(n1, vector<int>(n1, -1));
    for (int j = 0; j < n1; j++)
    {

        for (int i = j; i >= 0; i--)
        {
            if (i == j)
            {
                dp1[i][j] = v1[i];
                dp2[i][j] = !v1[i];
            }
            else
            {
                int i1 = i + 1;
                int j1 = j - (j - i);
                int ans1 = 0, ans2 = 0;
                for (int k = i; k < j; k++)
                {
                    if (v2[k] == 0)
                    {
                        ans1 += dp1[i][j1] * dp1[i1][j];
                        ans2 += dp1[i][j1] * dp2[i1][j];
                        ans2 += dp2[i][j1] * dp1[i1][j];
                        ans2 += dp2[i][j1] * dp2[i1][j];
                    }
                    else if (v2[k] == 1)
                    {
                        ans1 += dp1[i][j1] * dp1[i1][j];
                        ans1 += dp2[i][j1] * dp1[i1][j];
                        ans1 += dp1[i][j1] * dp2[i1][j];

                        ans2 += (dp2[i][j1] * dp2[i1][j]);
                    }
                    else
                    {
                        ans1 += (dp1[i][j1] * dp2[i1][j]);
                        ans1 += (dp2[i][j1] * dp1[i1][j]);
                        ans2 += (dp1[i][j1] * dp1[i1][j]);
                        ans2 += (dp2[i][j1] * dp2[i1][j]);
                    }
                    i1++;
                    j1++;
                }
                dp1[i][j] = ans1;
                dp2[i][j] = ans2;
            }
        }
    }
    // return dp1[0][n1-1];
    trav(dp1)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
    trav(dp2)
    {
        trav2(x) print(y);
        nline;
    }
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