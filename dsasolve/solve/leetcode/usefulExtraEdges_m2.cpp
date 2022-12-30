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
vi distanci;

void dijkstra(int start, int end, map<int, vector<pii>> &mp, int &A)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    vb visited(A + 2, 0);
    distanci[start] = 0;
    deb(distanci[start]);
    que.push({0, start}); // {distanci , node}
    while (!que.empty())
    {
        deb("hiell");
        int node = que.top().second;
        que.pop();
        if (visited[node])
            continue;
        for (auto x : mp[node])
        {
            deb("awesome");
            if (!visited[x.first])
            {
                deb(distanci[node]);
                deb(x.second);

                if (distanci[x.first] > distanci[node] + x.second)
                {
                    distanci[x.first] = distanci[node] + x.second;
                }
                que.push({distanci[x.first], x.first});
            }
        }

        visited[node] = 1;
    }
    // if (distanci[end] > 1000000)
    // {
    //     return INT_MAX;
    // }
    // return distanci[end];
}
int solve(int A, vector<vector<int>> &B, int C, int D, vector<vector<int>> &E)
{
    distanci.assign(A + 2, INT_MAX);
    map<int, vector<pii>> mp;
    trav(B)
    {
        mp[x[0]].push_back({x[1], x[2]}); // mp[node] = {node , edge-weight}
    }
    int ans;
    dijkstra(C, D, mp, A);
    dijkstra(D, C, mp, A);
    trav(distanci)
    {
        print(x);
    }
    nline;

    int res = INT_MAX;
    /* for (int i = 0; i < E.size(); i++)
    {
        mp[E[i][0]].push_back({E[i][1], E[i][2]});
        mp[E[i][1]].push_back({E[i][0], E[i][2]});

        // trav(mp)
        // {
        //     trav2(x.second) cout << "(" << y.first << "," << y.second << ")" << endl;
        //     nline;
        // }
        int ans = dijkstra(C, D, mp, A);
        deb(ans);
        res = min(res, ans);
        mp.erase(E[i][0]);
        mp.erase(E[i][1]);
    } */
    debline(res);
    if (res == INT_MAX)
        return -1;
    return res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi B = {
            {1, 2, 1},
            {2, 3, 2}

            // {1, 2, 1},
            // {2, 3, 2},
            // {3, 1, 4},
            //
            // {1, 2, 2},
            // {1, 3, 2},
            // {2, 4, 1},
            // {2, 5, 4},
        };
        vvi E = {
            {1, 3, 2}
            // {2, 3, 3}
            //
        };
        solve(3, B, 1, 3, E);
        // solve(4, B, 1, 4, E);
        // cout << solve(5, B, 3, 5, E) << endl;
    }

    return 0;
}