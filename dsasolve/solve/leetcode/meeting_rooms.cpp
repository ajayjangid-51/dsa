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
bool sortcol(vi &v1, vi &v2)
{
    // here these v1 and v2 are two consecutive-rows.
    return v1[1] < v2[1];
}
void solve()
{
    // vvi v = {{1, 18}, {18, 23}, {15, 29}, {4, 15}, {2, 11}, {5, 13}};
    // vvi v = {{0, 30}, {5, 10}, {15, 20}};
    vvi v = {{4, 14},
             {3, 25},
             {19, 21},
             {2, 29},
             {8, 9},
             {2, 26},
             {20, 21},
             {7, 19},
             {12, 21}}; // trav(v)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }
    sort(range(v), sortcol);
    linebreak;
    trav(v)
    {
        trav2(x) print(y);
        nline;
    }
    // int cnt = 0;
    // vector<bool> visited(11, 0);
    // int x = 0;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (visited[i])
    //         continue;
    //     pair<int, int> p = {v[i][0], v[i][1]};
    //     // debpair(p);
    //     visited[i] = 1;
    //     // cnt++;
    //     // v.erase(v[i]);
    //     bool flag = 0;
    //     int cnt2 = 0;

    //     for (int j = i + 1; j < v.size(); j++)
    //     {
    //         if (visited[j])
    //             continue;
    //         pii p2 = {v[j][0], v[j][1]};
    //         if (p2.first >= p.second)
    //         {
    //             flag = 1;
    //             // debpair(p2);
    //             visited[j] = 1;
    //             p = p2;
    //             cnt2++;
    //             // debline(cnt);
    //             // linebreak;
    //         }
    //     }
    //     // debline(cnt2);
    //     // int x = cnt2+1;
    //     x++;
    //     // if (flag)
    //     //     cnt += (cnt2 + 1);
    //     // else cnt
    //     // cnt += (cnt2);
    //     // debline(cnt);
    // }
    // debline(cnt);
    // debline(v.size() - cnt);
    // debline(x);
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