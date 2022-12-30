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

    int a = 1, b = 2;
    // a = 2, b = 3;
    // a = 0, b = -1;
    // a = -2147483648, b = -1;
    // a = -1, b = 2;
    a = -1, b = -2147483648;

    long double c = double(a) / double(b);
    deb(c);
    string s = to_string(c);
    deb(s);
    int i = 0;
    for (; i < s.size(); i++)
    {
        if (s[i] == '.')
            break;
    }
    string ss(s.begin(), s.begin() + i + 1);
    if (s[i + 1] == '0')
    {
        ss.pop_back();
        debline(ss);
    }
    else
    {

        if (s[i + 1] == s[i + 2])
        {
            string ans(s.begin(), s.begin() + i + 1);
            ans += "(";
            ans += s[2];
            ans += ")";
            debline(ans);
            // break;
        }
        else
        {
            i++;
            for (; i < s.size(); i++)
            {
                if (s[i] == '0')
                    break;
                ss.push_back(s[i]);
            }
        }
    }
    debline(ss);
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