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
    // string s("   00083e5.5  ");
    // string s("abc");
    // string s("-01.1-e-10");
    string s(".2");
    debline(s);
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    s = s.substr(i, s.size());
    debline(s);
    i = s.size() - 1;
    while (s[i] == ' ')
    {
        s.pop_back();
        i--;
    }
    debline(s);
    int dotcnt = 0, dotindex = -10, ecnt = 0, eindex = -10;
    for (int j = 0; j < s.size(); j++)
    {
        i = j;

        if (s[i] == '.' or s[i] == 'e' or s[i] == '-' or (s[i] >= '0' and s[i] <= '9'))
        {
            if (s[i] == '.')
            {
                dotcnt++;
                dotindex = i;
            }
            if (s[i] == 'e')
            {
                ecnt++;
                eindex = i;
            }
            else if (s[i] == '-')
            {
                if (i == 0)
                    continue;
                else if (i == eindex + 1)
                    continue;
                else
                {
                    debline("-1");
                    break;
                }
            }
        }
        else
        {
            debline("-1");
            break;
        }
    }
    deb(dotcnt);
    deb(dotindex);
    deb(ecnt);
    deb(eindex);
    if (dotcnt > 1)
        debline("-1");
    if (ecnt > 1)
        debline("-1");
    if (dotindex == s.size() - 1)
        debline("-1");
    if (eindex == 0 or eindex == s.size() - 1)
        debline("-1");
    if (dotindex == eindex + 1 or dotindex == eindex - 1)
        debline("-1");
    if (dotindex != -10 and eindex != -10)
        if (dotindex > eindex)
            debline("-1");
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