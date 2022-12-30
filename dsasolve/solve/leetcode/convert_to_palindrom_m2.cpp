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
    // string s("abecbea");
    string s("gdd");
    // string s("abcba");
    int n = s.size();
    int i = 0, j = n - 1;
    int cnt = 0;
    while (i < j and i != j)
    {
        if (s[i] != s[j])
        {
            cnt = 1;
            break;
        }

        i++;
        j--;
    }
    debline(cnt);
    if (cnt == 0)
        debline("1");
    int ii = i, jj = j;
    deb(i); // mtlb new we can remove i or
    deb(j); // mtlb now we can remove j
    string s1(s);
    s1.erase(ii, 1);
    debline(s1);
    cnt = 0;
    i = 0, j = s1.size() - 1;
    while (i < j and i != j)
    {

        if (s1[i] != s1[j])
        {
            cnt = 1;
            break;
        }
        i++;
        j--;
    }
    debline(cnt);
    if (cnt == 1)
        debline("0");
    cnt = 0;
    s1 = s;
    s1.erase(jj, 1);
    debline(s1);
    i = 0, j = s1.size() - 1;
    while (i < j and i != j)
    {
        deb(s1[i]);
        deb(s1[j]);
        nline;
        if (s1[i] != s1[j])
        {

            cnt = 1;
            break;
        }
        i++;
        j--;
    }

    debline(cnt);
    if (cnt == 1)
        debline("0");
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