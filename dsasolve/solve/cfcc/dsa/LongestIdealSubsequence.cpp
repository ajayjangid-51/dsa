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
void solve()
{
    // string s("acfgbd");
    string s("slddedwfmo");
    // string ans("");
    int k = 16;
    vector<pair<int, int>> ans(s.size(), pair<int, int>(0, 1));
    ans[0] = {0, 1};
    for (int i = 1; i < s.size(); i++)
    {
        // if (s[i] - s[i - 1] <= k)
        // {
        //     ans[i].second = max(ans[i].second, ans[i - 1].second + 1);
        // }
        for (int j = i - 1; j >= 0; j--)
        {
            deb(s[i]);
            deb(s[j]);
            linebreak1;

            if (abs(s[i] - s[j]) <= k)
            {
                print("👉");
                ans[i].second = max(ans[i].second, ans[j].second + 1);
            }

            ans[i].first = max(ans[j].second, 1);
        }
        print("😀");
        linebreak1;
    }
    trav(ans)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    nline;
}

int submmittedAnswer(string s, int k)
{
    vector<pair<int, int>> ans(s.size(), pair<int, int>(0, 1));
    ans[0] = {0, 1};
    for (int i = 1; i < s.size(); i++)
    {

        for (int j = i - 1; j >= 0; j--)
        {
            if (abs(s[i] - s[j]) <= k)
                ans[i].second = max(ans[i].second, ans[j].second + 1);

            ans[i].first = max(ans[j].second, 1);
        }
    }
    int anss = INT_MIN;
    for (auto x : ans)
    {
        int tmax = max(x.first, x.second);
        anss = max(anss, tmax);
    }
    return anss;
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