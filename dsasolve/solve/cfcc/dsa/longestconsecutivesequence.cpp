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
    // vi A = {-10, -6, 100, 4, 200, -7, -8, 3, 1, -9, 2};
    vi A = {100, 4, 200, -7, -8, 3, 1, -9, 2, -1, -2};
    int n = 300;
    bool v[n] = {0};
    bool v2[n] = {0};
    for (auto x : A)
    {
        if (x <= 0)
        {
            v2[abs(x)] = 1;
        }
        else
        {

            v[x] = 1;
        }
    }
    int maxi = 0;
    int t = 0;
    int i = n;
    bool flag1 = 1, flag2 = 0;
    while (flag1 or flag2)
    {

        if (flag1)
        {
            if (v2[i])
            {
                if (i == 0)
                    print(smile);

                t++;
            }
            else
            {
                maxi = max(maxi, t);
                t = 0;
            }
            if (i == 0)
            {
                debline(t);
            }
            i--;

            if (i < 0)
            {
                flag1 = 0;
                flag2 = 1;
                i = 1;
            }
        }
        else
        {
            if (v[i])
            {
                t++;
            }
            else
            {
                maxi = max(maxi, t);
                t = 0;
            }
            i++;
            if (i >= n)
            {
                flag2 = 0;
                break;
            }
        }
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