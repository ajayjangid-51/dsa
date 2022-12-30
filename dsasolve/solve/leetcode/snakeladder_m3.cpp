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
#define mp make_pair
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
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define bstart(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define bend cout << "🛑_______________________________🛑" \
                  << "\n"                                      \
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
int bfs(int node, map<int, vi> &mp)
{
    vi distance(101);
    distance[1] = 0;
    vb visited(101, 0);
    visited[1] = 1;

    queue<int> que;
    que.push(node);
    while (!que.empty())
    {
        int nodi = que.front();
        que.pop();
        debline(nodi);
        if (nodi == 100)
        {
            return distance[100];
        }

        for (auto x : mp[nodi])
        {
            debline(x);
            if (!visited[x])
            {

                deb(x);
                distance[x] = distance[nodi] + 1;
                visited[x] = 1;
                que.push(x);
            }
        }
    }
    return -1;
}
int snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B)
{
    vi go_immediatelyto;
    for (int i = 0; i < 101; i++)
    {
        go_immediatelyto.push_back(i);
    }
    // trav(go_immediatelyto) print(x);
    // nline;
    trav(A)
        go_immediatelyto[x[0]] = x[1];
    trav(B)
        go_immediatelyto[x[0]] = x[1];

    map<int, vi> mp;
    bend;
    for (int i = 1; i <= 100; i++)
    {
        if (mp.find(go_immediatelyto[i]) == mp.end())
        {

            for (int j = 1; (j <= 6) and ((go_immediatelyto[i] + j) <= 100); j++)
            {
                // deb(i + j);
                // deb(go_immediatelyto[i + j]);
                mp[go_immediatelyto[i]].push_back(go_immediatelyto[go_immediatelyto[i] + j]);
            }
        }
    }
    int dist = bfs(1, mp);
    deb(dist);

    return dist;
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
            {12, 98},

        };
        vvi B = {
            {95, 13},
            {97, 25},
            {93, 37},
            {79, 27},
            {75, 19},
            {49, 47},
            {67, 17},

        };
        snakeLadder(A, B);
    }
    return 0;
}