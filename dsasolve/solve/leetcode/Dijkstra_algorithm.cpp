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

void dijkstra(int startnode, vector<vector<pii>> &adj, vi &distance, vb &visited)
{
    priority_queue<pii, vector<pii>, greater<pii>> pque;
    pque.push({0, startnode});
    while (!pque.empty())
    {
        int node = pque.top().second;
        deb(node);
        pque.pop();
        print("😀 the node is ");
        print(node);
        nline;
        if (visited[node])
            continue;
        // visited[node] = 1;

        for (auto x : adj[node])
        {
            cout << x.first << "  " << x.second << endl;
            if (!visited[x.first])
            {
                if (distance[x.first] > (x.second + distance[node]))
                {
                    distance[x.first] = x.second + distance[node];
                }
                deb(distance[x.first]);
                pque.push({distance[x.first], x.first});
            }
        }
        visited[node] = 1; // this seems good as per the algorithm bcoz we are marking the node visited when its all childres are relaxed.
    }
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        int A = 5;
        vector<vector<pii>> adj(A + 1);
        adj[1].push_back({4, 9});
        adj[1].push_back({5, 1});
        adj[1].push_back({2, 5});
        adj[2].pb({3, 2});
        adj[2].pb({1, 5});
        adj[3].pb({4, 6});
        adj[3].pb({2, 2});
        adj[4].pb({3, 6});
        adj[4].pb({5, 2});
        adj[4].pb({1, 9});
        adj[5].pb({1, 1});
        adj[5].pb({4, 2});
        trav(adj)
        {
            trav2(x)
            {
                print(y.first);
                print(y.second);
            }
            nline;
        }
        vb visited(A + 1, 0);
        vi distance(A + 1);
        distance.assign(A + 1, INT_MAX);
        distance[1] = 0;
        dijkstra(1, adj, distance, visited);
        nline;
        print("hello printing.. ");
        nline;
        trav(distance) print(x);
        nline;
        // solve();
    }
    return 0;
}