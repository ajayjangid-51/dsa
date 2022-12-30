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
void subString(string str, vs &v)
{
    int n = str.length();
    // Pick starting point
    string s;
    for (int len = 1; len <= n; len++)
    {
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point.
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
                s.push_back(str[k]);

            v.push_back(s);
            s.clear();
        }
    }
}
int solve(string A)
{
    vector<string> v;
    vs ans;
    subString(A, v);
    trav(v)
    {

        if (x.size() >= 3)
        {
            unordered_map<char, int> mp;
            bool flag = 1;
            trav2(x)
            {
                mp[y]++;
                if (mp.size() > 2)
                {
                    mp.erase(y);
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                auto it = mp.begin();
                int cntp = it->second;
                it++;
                int cntq = it->second;
                if ((cntp >= (x.size() / 3)) or (cntq >= (x.size() / 3)))
                {

                    deb("1");
                    // break;
                    return 1;

                    ans.push_back(x);
                }
            }
        }
    }
    linebreak;
    trav(ans) print(x);
    linebreak;
    deb("0");
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
        string A = "aaaqfcij";
        // string A = "abcd";
        solve(A);
    }
    return 0;
}