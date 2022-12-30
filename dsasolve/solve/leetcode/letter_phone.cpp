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
vs v;
string s("235");
map<int, string> mp;
string s1;
void fn(int i, char c)
{
    s1.push_back(c);
    if (i == s.size() - 1)
    {
        deb(i);
        v.push_back(s1);
        s1.pop_back();
        return;
    }
    string s2 = mp[int(s[i + 1] - '0')];
    // int x = int(s[i + 1] - '0');
    // deb(x);
    // deb(s2);
    for (int j = 0; j < s2.size(); j++)
    {
        fn(i + 1, s2[j]);
    }
    s1.pop_back();
}
void solve()
{
    mp[0] = "0";
    mp[1] = "1";
    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";
    fn(0, 'a');
    linebreak;
    trav(v) print(x);
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