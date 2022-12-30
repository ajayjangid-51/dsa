#include <bits/stdc++.h>
using namespace std;
#define deb(c) cout << #c << " = " << c << endl;
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// Here the solution is do dfs on edge-list representation:-

bool dfsonEdgelist(vector<vector<int>> B, int A)
{
    vector<vector<int>> adj(A);
    for (auto x : B)
    {
        adj[x[0]].push_back(x[1]);
    }
    vector<int> visited(A + 1, 0);
    stack<int> stk;
    // int p = 1;
    stk.push(1);
    // visited[1] = 1;
    bool ans = 0;
    while (!stk.empty())
    {
        // p = edgelist[p][1];
        int v = stk.top();
        stk.pop();
        if (!visited[v])
        {
            if (v == A)
            {
                ans = 1;
                break;
            }
            visited[v] = 1;
        }

        for (auto x : adj[v])
        {
            if (!visited[x])
                stk.push(x);
        }
    }
    return ans;
}
int main()
{
    file();
    deb("hello");
    return 0;
}