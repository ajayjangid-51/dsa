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
    // vs v = {"rrrrr", "rrrrg", "rrrrr", "bbbbb"};
    vs v = {"bbrbbb", "brgrbb", "rbbggb", "rggggr", "rrggrb", "grrbrg", "gbbrrg", "grgrbb", "bbbrgr", "bbrrgg", "rggrbg", "rrgggg", "ggbbgb", "grggbb", "rrrbrr", "rrrbrb", "bbbbbb", "rbbbrg", "ggbbbg", "ggbggr", "bggrgb", "bbrrrb", "rbrrbb", "brbgrg", "rbrrrg", "bbrrgg", "rbgrgg"};
    int m = v.size();
    int n = v[0].size();
    deb(m);
    deb(n);
    vector<vector<pii>> pp(3, vector<pair<int, int>>(n, {0, 0}));
    for (int j = 0; j < n; j++)
    {
        int r1 = 0, r2 = 0, g1 = 0, g2 = 0, b1 = 0, b2 = 0;
        for (int i = 0; i < m; i++)
        {
            if (v[i][j] == 'r')
            {
                if (!r1)
                {

                    r1 = i + 1;
                    r2 = r1;
                }
                else
                    r2 = i + 1;
            }
            else if (v[i][j] == 'g')
            {
                if (!g1)
                {

                    g1 = i + 1;
                    g2 = g1;
                }
                else
                    g2 = i + 1;
            }
            else
            {
                if (!b1)
                {

                    b1 = i + 1;
                    b2 = b1;
                }
                else
                    b2 = i + 1;
            }
        }
        pp[0][j] = {r1, r2};
        pp[1][j] = {g1, g2};
        pp[2][j] = {b1, b2};
    }
    linebreak1;
    trav(pp)
    {
        trav2(x) cout << "{" << y.first << "," << y.second << "} ";
        nline;
    }
    linebreak1;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int base1 = 0, base2 = 0, base3 = 0;
        if (pp[0][i].first and pp[2][i].second)
            base1 = abs(pp[0][i].first - pp[2][i].second) + 1; // r-b
        if (pp[0][i].second and pp[2][i].first)
            base1 = max(base1, abs(pp[0][i].second - pp[2][i].first) + 1); // r-b
        if (pp[0][i].first and pp[1][i].second)
            base2 = abs(pp[0][i].first - pp[1][i].second) + 1; // r-g
        if (pp[0][i].second and pp[1][i].first)
            base2 = max(base2, abs(pp[0][i].second - pp[1][i].first) + 1); // r-g
        if (pp[1][i].first and pp[2][i].second)
            base3 = abs(pp[1][i].first - pp[2][i].second) + 1; // g-b
        if (pp[1][i].second and pp[2][i].first)
            base3 = max(base3, abs(pp[1][i].second - pp[2][i].first) + 1); // g-b

        int h1 = 0, h2 = 0, h3 = 0; // h1 is for g , h2 for b , h3 for r
        for (int j = 0; j < n; j++)
        {
            if (pp[1][j].first)
            {
                h1 = max(h1, abs(i - j) + 1);
            }
            if (pp[2][j].first)
            {
                h2 = max(h2, abs(i - j) + 1);
            }
            if (pp[0][j].first)
            {
                h3 = max(h3, abs(i - j) + 1);
            }
        }
        print(base1), print(base2), print(base3), nline;
        print(h1), print(h2), print(h3), nline;
        int a1 = 0, a2 = 0, a3 = 0;
        a1 = ceil((base1 * h1) / (float)2);
        a2 = ceil((base2 * h2) / (float)2);
        a3 = ceil((base3 * h3) / (float)2);
        int maxi = max(a1, max(a2, a3));
        ans = max(ans, maxi);
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