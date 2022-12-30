#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//
vector<int> visited(1000, 0);
vector<vector<int>> adj(1000);

void dfs(int s, bool &minus, bool &two)
{
    if (visited[s])
        return;
    visited[s] = 1;
    // process node:-
    if (s == -1)
        minus = 1;
    if (s == -2)
        two = 1;
    for (auto x : adj[s])
    {

        if (minus and two)
            break;
        dfs(x, minus, two);
    }
}

int main()
{
    file();
    vector<vector<int>> A = {{1, 2, 2, 3, 5},
                             {3, 2, 3, 4, 4},
                             {2, 4, 5, 3, 1},
                             {6, 7, 1, 4, 5},
                             {5, 1, 1, 2, 4}};
    // addding -1 for redlake and -2 for bluelake.. in the matrix A. or reconstructing other matrix...
    //
    int mm = 5, nn = 5;
    vector<vector<int>> adjj((mm + 1) * (nn + 1));

    // creating adjancency-list

    // first we will construct the graph:-
    int ans = 0;
    int n = adj[0].size();
    int m = adj.size();
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            bool minus = 0, two = 0;

            dfs(adj[i][j], minus, two);
            if (minus == 1 and two == 1)
                ans++;
        }
    }
    cout << "the answer is " << ans << endl;

    return 0;
}