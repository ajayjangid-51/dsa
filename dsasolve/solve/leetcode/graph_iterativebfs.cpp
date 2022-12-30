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
#define vi vector<int>
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

int solve(vector<vector<int>> &A)
{
    // bfs1 for "bluelake":-
    int m = A.size();
    int n = A[0].size();

    queue<pair<int, int>> que;
    int i = 0;
    for (int j = 0; j < m; j++)
    {
        que.push({j, i});
    }
    for (int z = 1; z < n; z++)
    {
        que.push({i, z});
    }
    /* while (!que.empty())
    {
        cout << A[que.front().first][que.front().second] << " ";
        que.pop();
    } */

    vector<vector<bool>> bluevisited(m, vector<bool>(n, 0));
    trav(bluevisited)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    }

    deb(bluevisited[0][0]);
    cout << "entering ..." << endl;
    while (!que.empty())
    {
        pair<int, int> v = que.front();
        deb(v.first);
        deb(v.second);
        que.pop();
        // deb(bluevisited[0][0]);
        deb(bluevisited[v.first][v.second]);
        if (bluevisited[v.first][v.second])
            continue;
        bluevisited[v.first][v.second] = 1;

        // // neighbours of (i,j) => (i, j+1) ,(i,j-1), (i+1, j) , (i-1,j)
        int px, py;
        px = v.first, py = v.second;
        deb(px);
        deb(py);

        if ((py + 1 < n) and (A[px][py + 1] >= A[px][py] and !bluevisited[px][py + 1]))
        {
            que.push({px, py + 1});
        }
        if ((py - 1 > -1) and (A[px][py - 1] >= A[px][py] and !bluevisited[px][py - 1]))
        {
            que.push({px, py - 1});
        }
        if ((px - 1 > -1) and ((A[px - 1][py] >= A[px][py]) and (!bluevisited[px - 1][py])))
        {
            que.push({px - 1, py});
        }
        if ((px + 1 < m) and ((A[px + 1][py] >= A[px][py]) and (!bluevisited[px + 1][py])))
        {
            que.push({px + 1, py});
        }
    }
    cout << "blue visiting::---" << endl;
    trav(bluevisited)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    }
    // bfs2:-
    queue<pair<int, int>> que2;
    i = m - 1;
    for (int j = 0; j < n; j++)
    {
        que2.push({i, j});
    }
    i = n - 1;
    for (int z = 0; z < m - 1; z++)
    {
        que2.push({z, i});
    }
    /*  while (!que2.empty())
    {
        int a = que2.front().first;
        int b = que2.front().second;
        cout << A[a][b] << " ";
        que2.pop();
    } */
    vector<vector<bool>> redvisited(m, vector<bool>(n, 0));
    /* trav(redvisited)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    } */
    while (!que2.empty())
    {
        pair<int, int> v = que2.front();
        que2.pop();
        if (redvisited[v.first][v.second])
            continue;
        redvisited[v.first][v.second] = 1;

        // neighbours of (i,j) => (i, j+1) ,(i,j-1), (i+1, j) , (i-1,j)
        int px, py;
        px = v.first, py = v.second;
        deb(px);
        deb(py);

        if ((py + 1 < n) and (A[px][py + 1] >= A[px][py] and !redvisited[px][py + 1]))
        {
            que2.push({px, py + 1});
        }
        if ((py - 1 > -1) and (A[px][py - 1] >= A[px][py] and !redvisited[px][py - 1]))
        {
            que2.push({px, py - 1});
        }
        if ((px - 1 > -1) and ((A[px - 1][py] >= A[px][py]) and (!redvisited[px - 1][py])))
        {
            que2.push({px - 1, py});
        }
        if ((px + 1 < m) and ((A[px + 1][py] >= A[px][py]) and (!redvisited[px + 1][py])))
        {
            que2.push({px + 1, py});
        }
        // vscode Tip: invscode apn koi bhi datatype-container, function , class , files etc..etc.. pe ctrl+leftclick krke vaha ja sktehh hai jaha voh declare huaa hai.
    }
    cout << "hello bye hello bye now, visiting redvisiteds..." << endl;
    /* trav(redvisited)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    } */
    int ans = 0;
    for (int ii = 0; ii < m; ii++)
    {
        for (int jj = 0; jj < n; jj++)
        {
            if (redvisited[ii][jj] == 1 and bluevisited[ii][jj] == 1)
                ans++;
        }
    }
    deb(ans);

    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    // cin >> t;
    vector<vector<int>> A = {{1, 2, 2, 3, 5},
                             {3, 2, 3, 4, 4},
                             {2, 4, 5, 3, 1},
                             {6, 7, 1, 4, 5},
                             {5, 1, 1, 2, 4}};

    /* vector<vector<int>> A = {{15, 1, 10},
                             {5, 19, 19},
                             {3, 5, 6},
                             {3, 5, 6},
                             {2, 12, 16},
                             {3, 8, 17},
                             {12, 5, 3},
                             {14, 13, 3},
                             {2, 17, 19},
                             {16, 8, 7},
                             {12, 19, 10},
                             {13, 8, 20}}; */
    // vector<vector<int>> A = {{2, 2}, {2, 2}};
    cout
        << " hello hello " << endl;
    trav(A)
    {
        trav2(x) cout << y << " ";
        cout << endl;
    }
    while (t--)
    {
        solve(A);
    }
    return 0;
}