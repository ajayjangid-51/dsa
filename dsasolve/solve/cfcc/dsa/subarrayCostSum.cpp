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
    // vi v = {1, 3, 5, 4, 3, 1};
    // vi v = {1, 2};
    // vi v = {9, 3, 1, 1};
    vi v = {10, 7, 8, 2, 4};
    int n = v.size();
    vi lc(n, 0);
    vi rc(n, 0);

    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        if (!stk.empty() and v[i] >= v[stk.top()])
        {
            lc[i] = lc[stk.top()] + 1;
        }
        stk.push(i);
    }
    while (!stk.empty())
        stk.pop();
    for (int i = n - 1; i >= 0; i--)
    {
        if (!stk.empty() and v[i] >= v[stk.top()])
        {
            rc[i] = rc[stk.top()] + 1;
        }
        stk.push(i);
    }
    linebreak1;
    trav(lc) print(x);
    nline;
    trav(rc) print(x);

    linebreak1;

    vi prefix(n);
    prefix[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }
    linebreak1;
    trav(prefix)
        print(x);
    linebreak1;

    /*  int ans = 0;
     for (int i = 0; i < n; i++)
     {
         int l = i - lc[i] - 1;
         int r = i + rc[i];
         print(l), print(r), nline;
         while (l < r)
         {
             int prf = 0;
             if (l >= 0)
                 prf = prefix[l];

             int tmp = ceil(((prefix[r] - prf) / 2.0)) * v[i];
             deb(prefix[r]);

             deb(tmp);
             ans += tmp;
             deb(ans);
             deb(i);
             deb(v[i]);
             deb(l);
             deb(r);
             nline;
             r--;
             if (r == i - 1)
             {
                 r = i + rc[i];
                 if (l == i)
                     break;
                 l++;
             }
         }
         // ans += (v[i] / 2) * (v[i]);
     } */
    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        int l = i - lc[i];
        int r = i + rc[i] + 1;
        // if (i != 0 and v[i] == v[i - 1])
        // {
        //     // ans += (v[i]) * ceil(v[i] / 2.0);
        //     // continue;
        //     l = i;
        // }
        // print(l), print(r), nline;
        while (l <= i + 1)
        {
            ans += (v[i] * ceil((prefix[r] - prefix[l]) / 2.0));
            // deb(ans);
            r--;
            if (r == i)
            {
                r = i + rc[i] + 1;
                l++;
            }
        }
        // ans += (v[i] / 2) * (v[i]);
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
