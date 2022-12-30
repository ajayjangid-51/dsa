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
// left , up , down , right
vi X = {0, -1, 1, 0};
vi Y = {-1, 0, 0, 1};
string s("LUDR");
int solve(int A, int B, vector<string> &C)
{
    // queue<pii> que;
    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> que;

    vector<vector<int>> visited(A, vector<int>(B, 0));
    vector<vector<int>> distance(A, vi(B, INT_MAX));
    distance[0][0] = 0;
    que.push({0, {0, 0}});
    while (!que.empty())
    {
        pii node = que.top().second;
        que.pop();
        if (visited[node.first][node.second])
            continue;
        debpair(node);

        for (int i = 0; i < 4; i++)
        {
            int x = node.first + X[i];
            int y = node.second + Y[i];
            // debpair(make_pair({x, y}));
            pii pp(x, y);
            debpair(pp);
            if (x < A and x >= 0 and y < B and y >= 0 and !visited[x][y])
            {
                int w = 1;
                deb(i);
                deb(s[i]);
                if (s[i] == C[node.first][node.second])
                {
                    w = 0;
                    deb(w);
                }
                if ((distance[node.first][node.second] + w) < distance[x][y])
                {
                    distance[x][y] = distance[node.first][node.second] + w;
                    deb(distance[x][y]);
                }
                que.push({distance[x][y], {x, y}});
            }
        }
        visited[node.first][node.second] = 1;
    }
    deb(distance[A - 1][B - 1]);

    return distance[A - 1][B - 1];
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vector<string> C = {
            "RRR", "DDD", "UUU"};
        solve(3, 3, C);
    }
    return 0;
}