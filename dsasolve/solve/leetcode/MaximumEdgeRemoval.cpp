#include <bits/stdc++.h>
using namespace std;

#define f first
// #define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()

#define ll long long
#define pint unsigned int
#define pb push_back
#define mp make_pair
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
#define line1 cout << "🛑_______________________________🛑" \
                   << "\n"                                      \
                      "\n"
#define line2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
vi sizi;
void numberOfNodes(int s, int parent, vvi &adj)
{
    sizi[s] = 1;
    for (auto x : adj[s])
    {

        // condition to omit reverse path
        // path from children to parent
        if (x == parent)
            continue;

        // recursive call for DFS
        numberOfNodes(x, s, adj);

        // update count[] value of parent using
        // its children
        sizi[s] += sizi[x];
    }
}
int solve(int A, vector<vector<int>> &B)
{
    sizi.assign(A + 1, 0);
    vvi adj(A + 1);
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    numberOfNodes(1, -1, adj);
    int ans = 0;
    trav(sizi)
    {
        if (x % 2 == 0)
            ans++;
    }

    return ans - 2;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
    }
    return 0;
}