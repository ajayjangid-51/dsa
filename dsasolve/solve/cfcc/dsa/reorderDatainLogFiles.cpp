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
bool fn(const string &s1, const string &s2)
{
    string s10, s11, s20, s21;
    for (int i = 0; i < sizeof(s1); i++)
        if (s1[i] == '-')
        {
            s10 = s1.substr(0, i);
            s11 = s1.substr(i + 1);
            break;
        }
    for (int i = 0; i < sizeof(s2); i++)
        if (s2[i] == '-')
        {
            s20 = s2.substr(0, i);
            s21 = s2.substr(i + 1);
            break;
        }
    deb(s1);
    deb(s2);
    deb(s10);
    deb(s11);
    deb(s20);
    deb(s21);
    if (s11 != s21)
    {
        return s11 < s21;
    }
    else
    {
        return s10 < s20;
    }
    linebreak1;
    return 1;
}
void solve()
{
    vector<string> v1 = {"dig1-8-1-5-1", "let1-art-can", "dig2-3-6", "let2-own-kit-dig", "let3-art-zero"};
    // vector<string> v = {"qv4-tbojcv-yd", "uh9-lmtdpiunu", "ta9-5-3-5-5-1", "hn2-yawf-jw-zkw", "nc7-hdly-hrht", "ja7-6-5-7-0-8-4", "ld1-le-cmt-t-z", "hu2-wfkpj-jv", "iy0-hujr-wmrg-ca", "ia7-y-l-bnaz", "nr1-7-1-7-0-4", "gx0-sm-by-wd-ea"};
    nline;
    vs v = v1;
    sort(v.begin(), v.end(), fn);
    linebreak1;

    trav(v) print(x);
    nline;

    vs ans;
    trav(v)
    {
        string s = x;
        for (int i = 0; i < sizeof(x); i++)
        {
            if (x[i] == '-')
            {
                if (x[i + 1] >= '0' and x[i + 1] <= '9')
                {
                    break;
                }
                else
                {
                    ans.push_back(x);
                    break;
                }
            }
        }
    }
    linebreak1;
    linebreak1;

    trav(v1)
    {
        for (int i = 0; i < sizeof(x); i++)
        {
            if (x[i] == '-')
            {
                if (x[i + 1] >= '0' and x[i + 1] <= '9')
                {
                    ans.push_back(x);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
    }

    trav(ans)
    {
        print(x);
    }
    linebreak1;

    // linebreak1;
    // vs v1 = {"13", "abc"};
    // sort(v1.begin(), v1.end());
    // trav(v1) print(x);
    // linebreak1;
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