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
void solve()
{
    vi v = {1, 2, 5, -7, 2, 2, 2, 2};
    // vi v = {10, -1, 2, 3, -4, 100};
    int maxi = 0;
    vi ans;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < v.size(); j++)
        {
            if (v[j] < 0)
                break;
            sum += v[j];
            if (maxi <= sum)
            {
                deb(sum);
                for (int k = i; k <= j; k++)
                {
                    print(v[k]);
                }
                nline;
                if (maxi == sum)
                {
                    if (ans.size() < (j - i) + 1)
                    {
                        vi temp(v.begin() + i, v.begin() + j + 1);
                        ans = temp;
                    }
                }
                else
                {

                    maxi = sum;
                    vi temp(v.begin() + i, v.begin() + j + 1);
                    ans = temp;
                }
            }
        }
    }
    linebreak1;
    deb(maxi);
    trav(ans) print(x);
    linebreak1;
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