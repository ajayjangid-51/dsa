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
/* *-------------------------------------------------------------------------------* */
// method1:-
// void solve()
// {
//     vb v = {0, 1, 0, 1};
//     int cnt = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == 1)
//             continue;
//         else
//         {
//             v[i] = 0;
//             cnt++;
//             for (int j = i + 1; j < v.size(); j++)
//             {
//                 v[j] = !v[j];
//             }
//         }
//     }
//     debline(cnt);
// }
/* *-------------------------------------------------------------------------------* */
// method2:- optimization on M1:-
void solve()
{
    vb v = {0, 1, 0, 1};
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (cnt % 2 == 0)
        { // cnt is even.. mtlb all position are in original state.
            if (v[i] == 0)
            {
                cnt++;
            }
        }
        else
        {
            // mtlb all positions are in oppposite-state.
            if (v[i] == 1)
            { // mtlb v[i] is actuall equal to "zero".
                cnt++;
            }
        }
    }
    debline(cnt);
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