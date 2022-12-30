#include <bits/stdc++.h>
using namespace std;
#define forn(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class Graph
{
    int n;
    vector<pair<int, int>> edgelist;

public:
    Graph(int n, vector<pair<int, int>> edgelist)
    {
        this->n = n;
        this->edgelist = edgelist;
    }
    void iterativedfs()
    {
        // for graph-taversal first making "adjancency-list":-
        vector<vector<int>> adj(n + 1); // n+1 bcoz for graph-numbering starting from 1.
        forn(n + 1)
        {
            deb(edgelist[i].first);
            deb(edgelist[i].second);
            adj[edgelist[i].first].push_back(edgelist[i].second);
        }
        for (auto x : adj)
        {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }
        vector<int> visited(n + 1, 0);
        int startingnode = 1;
        stack<int> stk;
        stk.push(startingnode);

        while (!stk.empty())
        {
            int v = stk.top();
            stk.pop();
            visited[v] = 1;
            // /*
            // now here we can process the node.. (means we can do here whatever we want to the node.)
            cout << "the node is " << v << endl;

            // */

            // going to childrens of "startingnode"
            for (auto x : adj[v])
            {
                // startingnode = x;
                if (!visited[x])
                {
                    cout << x << endl;
                    stk.push(x);
                }
            }
        }
    }

    void Printedgelist();
};

int main()
{
    file();
    int nodes, edges;
    vector<pair<int, int>> edgelist;
    cin >> nodes >> edges;
    forn(edges)
    {
        int a, b;
        cin >> a >> b;
        edgelist.push_back({a, b});
    }
    Graph g(nodes, edgelist);
    g.Printedgelist();
    g.iterativedfs();

    return 0;
}
void Graph::Printedgelist()
{
    for (auto x : edgelist)
    {
        cout << x.first << " " << x.second << endl;
    }
}