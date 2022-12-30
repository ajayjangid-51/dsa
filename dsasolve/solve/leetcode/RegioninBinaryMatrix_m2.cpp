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
int bfs(pii node, int &N, int &M, vvi &A)
{
    vvb visited(N, vb(M, 0));
    queue<pii> que;
    que.push(node);
    visited[node.f][node.s] = 1;
    int cnt = 1;
    while (!que.empty())
    {
        pii pair = que.front();
        que.pop();
        int i = pair.first, j = pair.second;
        // (i+1, j+1) , (i+1 , j) , (i+1, j-1) , (i-1)(j) , (i-1)(j+1) , (i-1)(j-1) , (i, j+1) , (i, j-1);

        if (i + 1 < N)
        {
            if (j + 1 < M)
            {
                if (A[i + 1][j + 1] == 1 and !visited[i + 1][j + 1])
                {
                    que.push({i + 1, j + 1});
                    cnt++;
                    visited[i + 1][j + 1] = 1;
                }
            }
            if (j - 1 >= 0)
            {
                if (A[i + 1][j - 1] == 1 and !visited[i + 1][j - 1])
                {
                    que.push({i + 1, j - 1});
                    cnt++;
                    visited[i + 1][j - 1] = 1;
                }
            }
            if (A[i + 1][j] and !visited[i + 1][j])
            {
                que.push({i + 1, j});
                cnt++;
                visited[i + 1][j] = 1;
            }
        }
        if (j + 1 < M)
            if (A[i][j + 1] == 1 and !visited[i][j + 1])
            {
                que.push({i, j + 1});
                cnt++;
                visited[i][j + 1] = 1;
            }
        if (j - 1 >= 0)
            if (A[i][j - 1] == 1 and !visited[i][j - 1])
            {
                que.push({i, j - 1});
                cnt++;
                visited[i][j - 1] = 1;
            }

        if (i - 1 >= 0)
        {
            if (j + 1 < M)
            {
                if (A[i - 1][j + 1] == 1 and !visited[i - 1][j + 1])
                {
                    que.push({i - 1, j + 1});
                    cnt++;
                    visited[i - 1][j + 1] = 1;
                }
            }
            if (j - 1 >= 0)
            {
                if (A[i - 1][j - 1] == 1 and !visited[i - 1][j - 1])
                {
                    que.push({i - 1, j - 1});
                    cnt++;
                    visited[i - 1][j - 1] = 1;
                }
            }
            if (A[i - 1][j] == 1 and !visited[i - 1][j])
            {
                que.push({i - 1, j});
                cnt++;
                visited[i - 1][j] = 1;
            }
        }
    }
    return cnt;
}
int solve(vector<vector<int>> &A)
{
    int N = A.size();
    int M = A[0].size();
    vvb matvisited(N, vb(M, 0));
    int maxi = INT_MIN;

    // create adj or simple at that in bfs-function..

    matvisited.assign(N, vb(M, 0));
    vvb visited(N, vb(M, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1 and !matvisited[i][j])
            {
                matvisited[i][j] = 1;
                maxi = max(maxi, bfs({i, j}, N, M, A));
            }
        }
    }
    deb(maxi);
    return maxi;
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
            {0, 0, 1, 1, 0},
            {1, 0, 1, 1, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 0, 0, 1},
            //
            // {0, 0, 1, 0, 0, 0, 0, 0},
            // {1, 1, 1, 1, 1, 1, 1, 0},
            //
            // {1, 1, 1, 1, 1, 1, 1, 0},
            // {1, 0, 0, 0, 0, 0, 1, 0},
            // {0, 1, 0, 1, 0, 1, 0, 1},
            // {0, 1, 1, 1, 0, 0, 1, 0},
            // {0, 0, 0, 1, 0, 1, 0, 0},
            // {1, 0, 1, 1, 0, 0, 0, 0},
            // {1, 1, 0, 1, 0, 1, 1, 1},
            // {0, 1, 1, 0, 1, 0, 1, 1},

            //

        };
        deb(A.size());
        deb(A[0].size());
        solve(A);
    }
    return 0;
}

// bfs-implementation is working okay but giving TLE on one case.. so bcoz of this we will apply dfs-implementation..