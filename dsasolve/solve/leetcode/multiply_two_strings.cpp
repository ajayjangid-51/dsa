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
int ctoint(char c)
{
    int t = c - '0';
    return t;
}
void solve()
{
    string s("4416");
    string s2("-333");
    bool sign = 0; // 0 mtlb +ive sign ans 1 mtlb -ive sign.
    if (s[0] == '-')
    {
        sign = !sign;
        s.erase(0, 1);
        debline(s);
    }
    if (s2[0] == '-')
    {
        sign = !sign;
        s2.erase(0, 1);
        debline(s2);
    }
    vs v(s2.size());
    int k = 0;
    for (int i = s2.size() - 1; i >= 0; i--)
    {
        int t = ctoint(s2[i]);
        int carry = 0;
        for (int j = s.size() - 1; j >= 0; j--)
        {
            int t2 = ctoint(s[j]);
            int t3 = t * t2;
            t3 += carry;
            carry = t3 / 10;
            t3 = t3 % 10;

            v[k].push_back((t3 + '0'));
        }
        v[k].push_back((carry + '0'));
        reverse(range(v[k]));
        debline(v[k]);
        k++;
    }
    k = 0;
    linebreak;
    for (int i = 0, j = s2.size() - 1; i < s2.size(); i++, j--)
    {
        string s1(j, '0'), s2(i, '0');
        v[k] = s1 + v[k] + s2;
        debline(v[k]);
        k++;
    }
    string ans;
    int carryy = 0;
    for (int i = v[0].size() - 1; i >= 0; i--)
    {
        int sum = 0;
        for (int j = 0; j < s2.size(); j++)
        {
            sum += ctoint(v[j][i]);
        }
        sum += carryy;
        carryy = sum / 10;
        sum = sum % 10;
        ans.push_back((sum + '0'));
    }
    if (carryy != 0)
        ans.push_back(carryy + '0');
    reverse(range(ans));
    int i = 0;
    while (ans[i] == '0')
    {
        i++;
    }
    deb(i);
    ans = ans.substr(i, ans.size());
    if (sign)
        ans = "-" + ans;
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