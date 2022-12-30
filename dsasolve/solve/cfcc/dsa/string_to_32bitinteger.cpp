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
    // string s("    -5892with okk");
    string s("-91283472332");
    deb(INT_MAX);
    deb(INT_MIN);
    long long ans = 0;
    int neg = 1;
    bool done1 = 0, done2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > '9' or s[i] < '0')
        {
            print(smile);
            if (!done1 and !done2)
            {

                if (s[i] == ' ')
                    continue;
                else if (s[i] == '-')
                {

                    // ans = -ans;
                    neg = -1;
                    done2 = 1;
                    continue;
                }
                else if (s[i] == '+')
                {
                    done2 = 1;
                    continue;
                }
                else
                    break;
            }
            if (!done2)
            {
                if (s[i] == '-')
                {

                    ans = -ans;
                    done2 = 1;
                    continue;
                }
                else if (s[i] == '+')
                {
                    done2 = 1;
                    continue;
                }
                else
                    break;
            }
            else
                break;
        }
        elsee
        {
            done1 = 1;
            int tmp = s[i] - 48;
            deb(ans);
            // ans = (ans * 10) + tmp;
            ans = ((ans % LONG_LONG_MAX) * 10LL) % LONG_LONG_MAX + (long long)tmp;
        }
    }
    debline(ans * neg);
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