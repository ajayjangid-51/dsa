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
    map<string, int> mp;
    mp["I"] = 1;
    mp["II"] = 2;
    mp["III"] = 3;
    mp["IV"] = 4;
    mp["V"] = 5;
    mp["VI"] = 6;
    mp["VII"] = 7;
    mp["VIII"] = 8;
    mp["IX"] = 9;
    mp["X"] = 10;
    mp["XX"] = 20;
    mp["XXX"] = 30;
    mp["XL"] = 40;
    mp["L"] = 50;
    mp["LX"] = 60;
    mp["LXX"] = 70;
    mp["LXXX"] = 80;
    mp["XC"] = 90;
    mp["C"] = 100;
    mp["CC"] = 200;
    mp["CCC"] = 300;
    mp["CD"] = 400;
    mp["D"] = 500;
    mp["DC"] = 600;
    mp["DCC"] = 700;
    mp["DCCC"] = 800;
    mp["CM"] = 900;
    mp["M"] = 1000;
    mp["MM"] = 2000;
    mp["MMM"] = 3000;

    string s("MMDCCXVI");
    // string s("CMXVI");
    // string s("MDCCLXXXV");
    int ans = 0;
    int t = 0;
    int i = 0;
    for (; i < s.size(); i++)
    {
        deb(t);

        t++;
        print("🤞");
        deb(i);
        string s1;
        int j;

        if ((i + 3) <= s.size())
        {
            print("🐭");
            j = i + 3;
            s1 = s.substr(i, 3);
        }
        else
        {
            print("🐇");
            int x = s.size() - i;
            j = i + x;
            debline(x);
            s1 = s.substr(i, x);
        }
        debline(s1);
        while (mp.find(s1) == mp.end())
        {
            print("--");
            s1.pop_back();
            j--;
        }
        i = j - 1;
        print("✊");
        deb(i);
        deb(s1);
        deb(mp[s1]);
        ans += mp[s1];
        linebreak;
    }
    debline(i);
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