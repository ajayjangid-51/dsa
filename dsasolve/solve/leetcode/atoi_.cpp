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
    // string s("-.9.1e8.3-8");
    // string s("   394 838  ");
    string s("-5433287201824770940 8070067");
    deb(s);
    string ans;
    int j = 0;
    while (s[j] == ' ')
    {
        j++;
    }
    s = s.substr(j, s.size());
    j = s.size() - 1;
    while (s[j] == ' ')
    {
        s.pop_back();
        j--;
    }
    int i = 0;
    if (s[0] == '-' or s[0] == '+')
    {
        if (s[0] == '-')
            ans.push_back('-');
        i = 1;
    }

    for (; i < s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
        {
            ans.push_back(s[i]);
        }
        else
        {
            break;
        }
    }
    if (ans.size() == 1 and ans[0] == '-')
    {
        ans.push_back('0');
    }
    else if (ans.size() == 0)
    {
        ans.push_back('0');
    }
    i = ans.size() - 1;
    long long num = 0;
    int m = 1;
    int xx = 0;
    if (s[0] == '-')
        xx = 1;
    for (; i >= xx; i--)
    {
        if (ans[i] == '-')
            break;
        int t = ans[i] - '0';
        deb(s[i]);
        num += ((long long)t * m);
        if (num >= INT_MAX)
        {
            print("😀");
            debline(num);
            if (xx == 1)
            {
                print("👨‍🚒");
                debline(INT_MIN);
            }
            else
            {
                print("🧜‍♀️");
                debline(INT_MAX);
            }
        }
        m *= 10;
        debline(num);
    }
    if (ans[0] == '-')
    {
        num *= -1;
    }
    debline(num);
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