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
    vi A = {1, 0, -1, 0, 2, -2};
    int B = 0;
    set<vector<int>> ans;
    sort(A.begin(), A.end());

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            int summ = B - (A[i] + A[j]);
            unordered_map<int, int> mp;
            for (int k = j + 1; k < A.size(); k++)
            {
                if (mp.find(summ - A[k]) != mp.end())
                {
                    vector<int> v = {A[i], A[j], summ - A[k], A[k]};
                    ans.insert(v);
                }
                if (mp.find(A[k]) == mp.end())
                {
                    mp[A[k]] = k;
                }
            }
        }
    }
    vector<vector<int>> anss;
    for (auto x : ans)
    {

        anss.push_back(x);
    }
    // return anss;
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