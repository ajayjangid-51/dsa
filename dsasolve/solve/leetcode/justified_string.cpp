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
string adjust(string s, int k, int sp)
{
    debline(s);
    int cnt = 0; // cnt mtlb extra spaces at the end..
    if (*s.rbegin() == '_')
    {

        sp--;
        s.pop_back();
    }
    deb(s);
    cnt += (k - s.length());
    if (sp == 0)
        return s;
    int x = (cnt / sp);
    int rem = cnt % sp;
    deb(x);
    deb(rem);
    deb(sp);
    vi v(sp, x);
    debline(v.size());
    for (int i = 0; i < rem; i++)
    {
        v[i]++;
    }
    string s1;
    int i = 0;
    deb(i);
    deb(v.size());
    while (i < v.size())
    {

        trav(s)
        {
            if (x == '_')
            {
                string t(" ");
                for (int j = 0; j < v[i]; j++)
                {
                    t.push_back(' ');
                }
                s1 += t;
                i++;
            }
            else
            {
                s1.push_back(x);
            }
        }
    }

    debline(sp);

    debline(cnt);
    nline;
    trav(v) print(x);
    linebreak;
    debline(s1);
    return s1;
}
void solve()
{
    // vs v = {"this", "is", "an", "ate", "a", "example", "of", "tex", "justification."};
    // int k = 16;
    // vs v = {"what", "must", "be", "shall", "be."};
    // int k = 12;
    vs v = {"ytnhgsi", "boqsjrsr", "mtbojbehh", "ezsuor", "gll", "qdrr", "imtpumfu", "mttsbo", "d", "vpfupjr", "xreaml", "inzwta", "omj", "kixyppd", "gimykx"};
    int k = 220;
    vs ans;
    string s;
    string last;
    for (int i = 0; i < v.size(); i++)
    {
        int len = k;
        int sp = 0;
        while (v[i].length() <= len)
        {
            s += v[i];
            if (v[i].length() != len)
            {

                s.push_back('_');
                sp++;
                len -= (v[i].length() + 1);
            }
            else
                len -= (v[i].length());
            i++;
        }
        i--;
        last = s;
        string s1 = adjust(s, k, sp);
        ans.push_back(s1);
        s.clear();
    }
    linebreak;
    debline(last);
    for (auto &x : last)
    {
        if (x == '_')
        {
            x = ' ';
        }
    }
    while (last.size() != k)
    {

        last.push_back(' ');
    }
    if (ans.size() != 0)
    {
        ans.pop_back();
        ans.push_back(last);
    }
    linebreak;
    linebreak;

    trav(ans) print(x);
    linebreak;
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
