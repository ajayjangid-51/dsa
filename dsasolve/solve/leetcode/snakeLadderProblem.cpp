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
// #define mp make_pair
#define vb vector<bool>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
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
void dfs(int node, int distance, map<int, vi> &mp, int &maxi)
{
    deb(node);
    deb(distance);
    if (node == 100)
    {
        if (maxi < distance)
        {
            maxi = distance;
        }
        return;
    }

    for (auto x : mp[node])
    {
        deb(x);
        //     cout << x << " ";
        int dist = ceil(float(abs(x - node)) / 6);
        deb(dist);
        //     // int opt = mp[x][0];
        //     // if (mp[x].size() == 2)
        //     //     opt = mp[x][1];
        deb(mp[x].size());
        // deb(*mp[x].begin());
        // deb(mp[x][0]);
        // int mm = mp[x][0];
        dfs(mp[x], (distance + dist), mp, maxi);
    }
}
int snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B)
{
    map<int, vi> mp;
    trav(A)
    {
        mp[1].push_back(x[0]);
        mp[x[0]].push_back(x[1]);
        mp[x[1]].push_back(100);
    }
    // trav(B)
    // {
    //     mp[x[0]].push_back(x[1]);
    // }
    // deb("hello");
    trav(mp)
    {
        cout << x.first << " and ";
        // nline;
        trav2(x.second) cout << y << " ";
        nline;
    }
    int maxi = INT_MIN;
    // dfs(1, 0, mp, maxi);
    for (auto x : mp[1])
        cout << x << " ";
    nline;
    for (auto x : mp[32][0])
        cout << x << " ";
    nline;
    deb(maxi);
    return 1;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi A = {
                {32, 62},
                {42, 68},
                {12, 98}},
            B = {{95, 13}, {97, 25}, {93, 37}, {79, 27}, {75, 19}, {49, 47}, {67, 17}};
        snakeLadder(A, B);
    }
    return 0;
}