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
    // string s("125.512.100.abc");
    string s("5.12.0..32");
    vs v;
    int dotcnt = 0;
    string t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            dotcnt++;
            if (t.size() == 0 or t.size() > 3)
            {
                print("✊");
                return;
            }
            deb(t);
            for (int j = 0; j < t.size() - 1; j++)
            {
                if (t[j] == '0')
                {
                    print(__LINE__);
                    nline;
                    return;
                }
                else
                    break;
            }
            v.push_back(t);
            t.clear();
        }
        else
        {
            if (s[i] >= '0' and s[i] <= '9')
            {
                t.push_back(s[i]);
            }
            else
            {
                print(__LINE__);
                nline;
                return;
            }
        }
    }
    v.push_back(t);

    if (v.size() != 4)
    {
        print(__LINE__);
        nline;
        return;
    }
    if (dotcnt > 3)
    {
        print(__LINE__);
        nline;
        return;
    }
    trav(v)
    {
        int i = stoi(x);
        deb(i);
        if (i >= 0 and i <= 255)
            continue;
        else
        {

            print(__LINE__);
            nline;
            return;
        }
    }
    debline("true");
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