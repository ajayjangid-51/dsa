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
bool fn(const pair<int, char> &a, const pair<int, char> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
void solve()
{
    // vi A = {9, 47, 17, 39, 35, 35, 20, 18, 15, 34, 11, 2, 45, 46, 15, 33, 47, 47, 10, 11, 27};
    // vi B = {32, 82, 39, 86, 81, 58, 64, 53, 40, 76, 40, 46, 63, 88, 56, 52, 50, 72, 22, 19, 38};
    vi A = {1, 2, 3};
    vi B = {2, 3, 4};
    vector<pair<int, char>> v;
    for (int i = 0; i < A.size(); i++)
    {
        v.push_back({A[i], 's'});
        v.push_back({B[i], 'e'});
    }
    sort(v.begin(), v.end(), fn);
    trav(v)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    int maxi = 0;
    int cnt = 0;
    trav(v)
    {
        if (maxi < cnt)
        {

            maxi = cnt;
            deb(maxi);
        }

        if (x.second == 's')
            cnt++;
        else
            cnt--;
    }
    debline(maxi);
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