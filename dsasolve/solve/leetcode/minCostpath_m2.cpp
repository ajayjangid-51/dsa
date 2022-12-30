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
vector<int> X = {0, -1, 1, 0};
vector<int> Y = {-1, 0, 0, 1};
map<int, char> mp;

void dfs(int &A, int &B, vector<vi> &distance, vector<vb> &visited, vector<string> &C)
{
    queue<pii> que;
    que.push({0, 0});
    distance[0][0] = 0;
    visited[0][0] = 1;
    while (!que.empty())
    {
        pii node = que.front();
        que.pop();
        // if(node.first == A-1 and node.second == B-1){
        //     break;
        // }

        for (int i = 0; i < 4; i++)
        {
            int x = node.first + X[i], y = node.second + Y[i];
            if (x < A and x >= 0 and y < B and y >= 0 and !visited[x][y])
            {
                if (mp[i] == C[node.first][node.second])
                    distance[x][y] = min(distance[x][y], distance[node.first][node.second]);
                else
                {
                    distance[x][y] = min(distance[x][y], distance[node.first][node.second] + 1);
                }
                que.push({x, y});
            }
        }
    }
}
int solve(int A, int B, vector<string> &C)
{
    mp[0] = 'L';
    mp[1] = 'U';
    mp[2] = 'D';
    mp[3] = 'R';
    vvi distance(A, vi(B, -1));

    return 0;
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
            // "RRR", "DDD", "UUU"
            "RR", "DD"};
        solve(2, 2, C);
    }
    return 0;
}