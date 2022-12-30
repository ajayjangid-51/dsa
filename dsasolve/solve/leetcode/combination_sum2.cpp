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
// vi v = {10, 1, 2, 7, 6, 1, 5};
// vi v = {10, 1, 2, 7, 6, 5};
vi v;
int target = 8;
vi v1;
set<vi> ans;
void fn(int i, int sum)
{
    if (sum >= target)
    {
        if (sum == target)
        {
            vi v2(v1);
            sort(range(v2));
            ans.insert(v2);
        }
        return;
    }

    for (int j = i + 1; j < v.size(); j++)
    {
        v1.push_back(v[j]);
        fn(j, sum + v[j]);
        v1.pop_back();
    }
}
void solve()
{
    // for(int i=)
    // v = {10, 1, 2, 7, 6, 1, 5};
    v = {10, 1, 2, 7, 6, 1, 5};
    for (int i = 0; i < v.size(); i++)
    {
        v1.push_back(v[i]);
        fn(i, v[i]);
        v1.pop_back();
    }
    trav(ans)
    {
        trav2(x) print(y);
        nline;
    }
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