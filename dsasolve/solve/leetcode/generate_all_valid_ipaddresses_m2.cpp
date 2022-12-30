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
    string s("25525511135");
    // string s("0100100");
    if (s.size() < 4 or s.size() > 12)
    {
        debline("false");
        return;
    }
    string s1, s2, s3, s4;
    for (int i = 0; i <= 2 and s.size(); i++)
    {
        s1.push_back(s[i]);
        for (int j = i + 1; j <= (i + 3) and j < s.size(); j++)
        {
            s2.push_back(s[j]);

            for (int k = j + 1; k <= (j + 3) and k < s.size(); k++)
            {
                s3.push_back(s[k]);
                for (int l = k + 1; l < s.size(); l++)
                {
                    s4.push_back(s[l]);
                }
                print(s1);
                print(s2);
                print(s3);
                print(s4);
                nline;
                s4.clear();
            }
            s3.clear();
        }
        s2.clear();
    }
    s1.clear();
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