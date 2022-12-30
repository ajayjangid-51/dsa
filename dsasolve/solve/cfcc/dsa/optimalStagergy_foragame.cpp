/* // this is case or solution for in the "oponent" player plays optimally in such a way ki voh toh bas hamesa maximum-vala number utha le rha hai mtlb oponent player is playing greedily. but next type arises that what if the oponent-player is also playing dynamic-programmingly (mtlb oponent-player bhi dp-approach k tahhat khel rha hai. (so this solution in part2.cpp)) */
#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
    // vi v = {5, 3, 7, 10};
    // vi v = {8, 15, 3, 7};
    vi v = {4993, 4883, 8894, 7241, 1476, 8226, 1207, 5674, 6967, 6766, 8371, 1467, 3169, 2228, 297, 288, 4300, 4194, 4689, 1155, 3934, 5209, 4342, 2916, 2808, 2067, 5467, 8012, 1855, 1894, 2684, 9266, 5705, 3578, 4775, 578, 1546, 216, 395, 7883, 720, 9476};

    int n = sz(v);
    // int store[n][n] = {{0}};
    vvi store(n, vi(n, 0));
    /* for(int j= 1;j<n;j++){
        for(int i = j-1;i>=0;i--){

        }
    }
 */
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    for (int j = 1; j < n; j++)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            int i1 = i + 1, j1 = j;
            int i2 = i, j2 = j - 1;
            print(i), print(j), print(i1), print(j1), print(i2), print(j2), nline;
            if (j == (i + 1))
            {
            }
            else
            {

                if (v[i + 1] > v[j])
                    i1 = i + 2;
                else
                    j1 = j - 1;
                if (v[i] > v[j - 1])
                    i2 = i + 1;
                else
                    j2 = j - 2;
            }

            print(i), print(j), print(i1), print(j1), print(i2), print(j2), nline;
            if (i1 >= j1)
            {
                print(rightpoint);
                deb(i1);
                deb(j1);
                store[i][j] = 0;
                linebreak1;
                continue;
            }
            if (i2 > j2)
            {
                print(downpoint);
                deb(i2);
                deb(j2);

                store[i][j] = 0;
                linebreak1;
                continue;
            }
            store[i][j] = max((v[i] + store[i1][j1]), (v[j] + store[i2][j2]));
            linebreak1;
        }
    }
    debline(store[0][n - 1]);
    linebreak1;
    trav(store)
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