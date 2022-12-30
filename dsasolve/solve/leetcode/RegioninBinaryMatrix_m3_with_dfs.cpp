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
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl;
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
void dfs(pii node, int nodes, int &maxi, vvb &visited, int &N, int &M, vvi &A)
{
    int i = node.first, j = node.second;
    visited[i][j] = 1;
    debpair(node);
    deb(nodes);
    maxi = maxi + 1;
    deb(maxi);

    if (i + 1 < N)
    {
        if (j + 1 < M)
        {
            if (A[i + 1][j + 1] == 1 and !visited[i + 1][j + 1])
            {

                dfs({i + 1, j + 1}, nodes + 1, maxi, visited, N, M, A);
            }
        }
        if (j - 1 >= 0)
        {
            if (A[i + 1][j - 1] == 1 and !visited[i + 1][j - 1])
            {
                dfs({i + 1, j - 1}, nodes + 1, maxi, visited, N, M, A);
            }
        }
        if (A[i + 1][j] and !visited[i + 1][j])
        {
            dfs({i + 1, j}, nodes + 1, maxi, visited, N, M, A);
        }
    }
    if (j + 1 < M)
        if (A[i][j + 1] == 1 and !visited[i][j + 1])
        {

            dfs({i, j + 1}, nodes + 1, maxi, visited, N, M, A);
        }
    if (j - 1 >= 0)
        if (A[i][j - 1] == 1 and !visited[i][j - 1])
        {
            dfs({i, j - 1}, nodes + 1, maxi, visited, N, M, A);
        }

    if (i - 1 >= 0)
    {
        if (j + 1 < M)
        {
            if (A[i - 1][j + 1] == 1 and !visited[i - 1][j + 1])
            {
                dfs({i - 1, j + 1}, nodes + 1, maxi, visited, N, M, A);
            }
        }
        if (j - 1 >= 0)
        {
            if (A[i - 1][j - 1] == 1 and !visited[i - 1][j - 1])
            {
                dfs({i - 1, j - 1}, nodes + 1, maxi, visited, N, M, A);
            }
        }
        if (A[i - 1][j] == 1 and !visited[i - 1][j])
        {
            dfs({i - 1, j}, nodes + 1, maxi, visited, N, M, A);
        }
    }

    // maxi = max(maxi, nodes);
}
int solve(vector<vector<int>> &A)
{
    int N = A.size();
    int M = A[0].size();
    vvb mvisited(N, vb(M, 0));
    int maxi = 0;
    vvb visited(N, vb(M, 0));
    int maxx = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!mvisited[i][j] and A[i][j] == 1)
            {
                mvisited[i][j] = 1;
                pii pr({i, j});
                cout << "😀";
                debpair(pr);

                dfs({i, j}, 1, maxi, visited, N, M, A);

                cout << "🧎‍♂️";
                debline(maxi);
                maxx = max(maxx, maxi);
                maxi = 0;
            }
        }
    }
    // deb(maxi);
    deb(maxx);
    return maxx;
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
            // {0, 0, 1, 1, 0},
            // {1, 0, 1, 1, 0},
            // {0, 1, 0, 0, 0},
            // {0, 0, 0, 0, 1},
            //
            // {0, 0, 1, 0, 0, 0, 0, 0},
            // {1, 1, 1, 1, 1, 1, 1, 0},
            //
            {1, 1, 1},
            {0, 0, 1},

        };
        deb(A.size());
        deb(A[0].size());
        solve(A);
    }
    return 0;
}