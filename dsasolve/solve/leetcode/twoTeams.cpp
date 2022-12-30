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
void dfs(int nodei, vb &visited, vvi &B, vvi &adj, vb &enemylist, vb &personselected, vb &teams, int A)
{

    for (int i = 1; i <= A; i++)
    {
        if (i != nodei and !visited[i])
        {
            if (adj[i])
                dfs(i, )
        }
    }
}
int solve(int A, vector<vector<int>> &B)
{
    deb(A);
    vvi adj(A + 1);
    vvi adj2(A + 1);
    for (int i = 1; i <= A; i++)
    {
        adj2[i].push_back()
    }
    trav(B)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    trav(adj)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    }
    vb visited(A + 1, 0);
    vb enemylist(A + 1, 0);
    vb personselected(A + 1, 0);
    vvi teams;
    for (int i = 1; i <= A; i++)
    {
        if (!personselected[i])
        {
            enemylist.assign(A + 1, 0);
            dfs(i, visited, B, adj, enemylist, personselected, teams, A);
        }
    }
    if (teams.size() == 2)
        return 1;
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
        int A = 5;
        vii B = {
            {1, 4},
            {3, 1},
            {4, 3},
            {2, 1},
        };
        solve(A, B);
    }
    return 0;
}