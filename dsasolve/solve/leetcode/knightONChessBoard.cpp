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
vi X = {-1, -2, -2, -1, 1, 2, 2, 1};
vi Y = {-2, -1, 1, 2, -2, -1, 1, 2};
int knight(int A, int B, int C, int D, int E, int F)
{
    // applying dijkstraa..
    vvi distance(A, vi(B, INT_MAX));
    vvb visited(A, vb(B, 0));
    distance[C][D] = 0;
    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> que;
    que.push({0, {C, D}});
    while (!que.empty())
    {
        pii node = que.top().second;
        debpair(node);
        que.pop();
        if (visited[node.first][node.second])
            continue;
        for (int i = 0; i < 8; i++)
        {
            int x = node.first + X[i];
            int y = node.second + Y[i];
            if (x < A and x >= 0 and y < B and y >= 0 and !visited[x][y])
            {
                if (distance[x][y] > (distance[node.first][node.second] + 1))
                {
                    distance[x][y] = (distance[node.first][node.second] + 1);
                }
                que.push({distance[x][y], {x, y}});
            }
        }
        visited[node.first][node.second] = 1;
    }
    deb(distance[E][F]);
    if (distance[E][F] > 10000)
        return -1;

    return distance[E][F];
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        knight(8, 8, 0, 0, 7, 7);
    }
    return 0;
}