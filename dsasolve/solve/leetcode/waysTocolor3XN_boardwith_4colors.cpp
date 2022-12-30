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
// first creating 36-possible answers for 3x1-column:-
void getTriplets(vector<tuple<int, int, int>> &triplet)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (i != j and j != k)
                    triplet.push_back({i, j, k});
            }
        }
    }
}
bool iscompatiable(tuple<int, int, int> triplet1, tuple<int, int, int> triplet2)
{
    if (get<0>(triplet1) == get<0>(triplet2) or get<1>(triplet1) == get<1>(triplet2) or get<2>(triplet1) == get<2>(triplet2))
        return 0;
    return 1;
}
int store[4][4][4][100005];

void solve()
{
    vector<tuple<int, int, int>> triplet;
    getTriplets(triplet);
    // int dp[4][4][4][100005];
    // trav(triplet)
    // {
    //     // print(x)
    //     print(get<0>(x));
    //     print(get<1>(x));
    //     print(get<2>(x));
    //     nline;
    // }
    int n = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 36; j++)
        {
            if (i == 1)
            {
                store[get<0>(triplet[j])][get<1>(triplet[j])][get<2>(triplet[j])][i] = 1;
            }
            else
            {
                long long tmp = 0;
                for (int k = 0; k < 36; k++)
                {
                    if (iscompatiable(triplet[j], triplet[k]))
                    {
                        tmp = (tmp + store[get<0>(triplet[k])][get<1>(triplet[k])][get<2>(triplet[k])][i - 1]) % MOD;
                    }
                }
                store[get<0>(triplet[j])][get<1>(triplet[j])][get<2>(triplet[j])][i] = tmp;
            }
        }
    }
    long long ans = 0;
    for (int i = 0; i < 36; i++)
    {
        ans = (ans + store[get<0>(triplet[i])][get<1>(triplet[i])][get<2>(triplet[i])][n]) % MOD;
    }
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