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
bool fn(int i, int j, vi &v)
{
     if(j>=v.size()) return 0;

    if (j - i == 1)
    {
        if (v[i] == v[j])
        {
            if (j == v.size() - 1)
            {
                return 1;
            }
            else
            {
                return fn(j + 1, j + 2, v) or fn(j + 1, j + 3, v);
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (v[i] == v[i + 1] and v[i + 1] == v[j])
        {
            if (j == v.size() - 1)
            {
                return 1;
            }
            else
            {
                return fn(j + 1, j + 2, v) or fn(j + 1, j + 3, v);
            }
        }
        else if (v[i] == v[i + 1] - 1 and v[i + 1] == v[j] - 1)
        {
            if (j == v.size() - 1)
            {
                return 1;
            }
            else
            {
                return fn(j + 1, j + 2, v) or fn(j + 1, j + 3, v);
            }
        }
        else
            return 0;
    }

    return 0;
}
void fn2(vi &nums)
{
    bool anss = fn(0, 1, nums) or fn(0, 2, nums);
    debline(anss);
}
void solve()
{
    // vi v = {4, 4, 4, 5, 6};
    vi v = {1, 1, 1, 2};
    // vi v = {923198, 923198, 701131, 701132};
    // bool ans = fn(0, 1, v) or fn(0, 2, v);
    // deb(ans);
    fn2(v);
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