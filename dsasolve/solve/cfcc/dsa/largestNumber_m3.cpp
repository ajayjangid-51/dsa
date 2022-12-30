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
bool fn(const int &a, const int &b)
{
    string s1 = to_string(a), s2 = to_string(b);
    string ab = s1 + s2, ba = s2 + s1;
    // deb(a1);
    // deb(b1);
    if (ab == ba)
        return 1;
    if (ab.length() == ba.length())
    {
        for (int i = 0; i < ab.length(); i++)
        {
            if (ab[i] == ba[i])
                continue;
            if (ab[i] > ba[i])
                return 1;
            else
                return 0;
        }
    }
    else
    {
        if (ab.length() > ba.length())
            return 1;
        else
            return 0;
    }
    return 1;
}

void solve()
{
    // vi v = {12, 121};
    // vi v = {121, 12};
    // vi v = {3, 30, 34, 5, 9};
    vi v = {472, 663, 964, 722, 485, 852, 635, 4, 368, 676, 319, 412};
    // vi v = {4, 472};
    // vi v = {472, 4};
    // vi v = {4, 412};
    // vi v = {412, 4};
    // trav(v) print(x);
    // 9648527226766636354854724412368319
    // 9648527226636356764724854412368319

    sort(v.begin(), v.end(), fn);
    trav(v) print(x);
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