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
vector<int> solve()
{
    // vi A = {1, 1, 1, 1, 1};
    // vi A = {1, 3, 3, 3, 3, 2, 2};
    vi A = {9, 5, 4, 9, 3, 6, 8, 7, 1, 2, 8, 7, 2, 9, 7, 1, 3, 9, 7, 8, 1, 0, 5, 5};
    deb(A[22]);
    // vi A = {2, 2, 1, 2, 2, 0};
    set<vector<int>> ans;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            int sum = A[i] + A[j];
            unordered_map<int, int> mp;
            // vi v(A.begin() + (j + 1), A.end());
            vi v = A;
            sort(v.begin() + j, v.end());
            for (int k = j + 1; k < v.size(); k++)
            {
                if (mp.find(sum - v[k]) != mp.end())
                {
                    vi v = {i, j, mp[sum - A[k]], k};
                    return v;
                }

                if (mp.find(A[k]) == mp.end())
                {
                    mp[A[k]] = k;
                }
                // kk++;
            }
        }
    }
    trav(ans)
    {
        trav2(x) print(y);
        nline;
    }
    return {};
    // return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vi v = solve();
        trav(v) print(x);
        nline;
    }
    return 0;
}