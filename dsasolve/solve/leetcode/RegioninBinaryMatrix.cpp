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
int bfs(pii node, int &N, int &M, map<pii, vector<pii>> &mp)
{
    vvi visited(N, vi(M, 0));
    queue<pii> que;
    que.push(node);
    visited[node.f][node.s] = 1;
    int cnt = 1;
    while (!que.empty())
    {
        pii pair = que.front();
        que.pop();

        for (auto x : mp[pair])
        {
            if (!visited[x.f][x.s])
            {
                cnt++;
                que.push(x);
                visited[x.f][x.s] = 1;
            }
        }
    }
    return cnt;
}
int solve(vector<vector<int>> &A)
{
    int N = A.size();
    int M = A[0].size();
    deb(N);
    deb(M);
    vvi matvisited(N, vi(M, 0));
    int maxi = INT_MIN;
    unordered_map<pii, vector<pii>> mpp;
    deb(mp.size());

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1)
            {
                deb(A[i][j]);
                cout << i << " " << j << endl;
                // (i+1, j+1) , (i+1 , j) , (i+1, j-1) , (i-1)(j) , (i-1)(j+1) , (i-1)(j-1) , (i, j+1) , (i, j-1);
                // if (((i + 1 < N) and (j + 1 < M)) and ((j - 1 >= 0) and (i - 1 >= 0)))
                if (i + 1 < N)
                {
                    if (j + 1 < M)
                    {
                        if (A[i + 1][j + 1])
                            mp[{i, j}].push_back({i + 1, j + 1});
                    }
                    if (A[i + 1][j])
                        mp[{i, j}].push_back({i + 1, j});
                    if (j - 1 >= 0)
                    {
                        if (A[i + 1][j - 1])
                            mp[{i, j}].push_back({i + 1, j - 1});
                    }
                }
                if (i - 1 >= 0)
                {
                    if (j + 1 < M)
                        if (A[i - 1][j + 1])
                            mp[{i, j}].push_back({i - 1, j + 1});
                    if (A[i - 1][j])
                        mp[{i, j}].push_back({i - 1, j});
                    if (j - 1 >= 0)
                        if (A[i - 1][j - 1])
                            mp[{i, j}].push_back({i - 1, j - 1});
                }
                if (j + 1 < M)
                    if (A[i][j + 1])
                        mp[{i, j}].push_back({i, j + 1});
                if (j - 1 >= 0)
                    if (A[i][j - 1])
                        mp[{i, j}].push_back({i, j - 1});
            }
        }
    }
    bend;
    trav(mp)
    {
        cout << "(" << x.first.first << " " << x.first.second << ")" << endl;
        trav2(x.second) cout << "(" << y.first << ' ' << y.second << ")"
                             << "  ";
        bend;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!matvisited[i][j] and A[i][j] == 1)
            {
                maxi = max(maxi, bfs({i, j}, N, M, mp));
            }
        }
    }
    deb(maxi);
    return 1;
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
            // {1, 1, 1},
            // {0, 0, 1},
            //
            // {0, 0, 1, 0, 0, 0, 0, 0},
            // {1, 1, 1, 1, 1, 1, 1, 0},
            //

        };
        solve(A);
    }
    return 0;
}

/* 
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define f first
#define s second
// int bfs(pii node, int &N, int &M, map<pii, vector<pii>> &mp)
// {
//     vvb visited(N, vb(M, 0));
//     queue<pii> que;
//     que.push(node);
//     visited[node.f][node.s] = 1;
//     int cnt = 1;
//     while (!que.empty())
//     {
//         pii pair = que.front();
//         que.pop();

//         for (auto x : mp[pair])
//         {
//             if (!visited[x.f][x.s])
//             {
//                 cnt++;
//                 que.push(x);
//                 visited[x.f][x.s] = 1;
//             }
//         }
//     }
//     return cnt;
// }
void dfs(pii node , int distance ,int&maxi , vvb &visited, map<pii , vector<pii>> &mp ){
visited[node.f][node.s] = 1;
maxi = max(maxi ,distance);
    for(auto x:mp[node]){
        if(!visited[x.f][x.s])
            dfs(x , distance+1 , maxi , visited , mp);
    }
    
}
int Solution::solve(vector<vector<int>> &A)
{
    int N = A.size();
    int M = A[0].size();
    vvb matvisited(N, vb(M, 0));
    int maxi = INT_MIN;
    map<pii, vector<pii>> mp;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1 and !matvisited[i][j])
            {
                matvisited[i][j] = 1;
                if (i + 1 < N)
                {
                    if (j + 1 < M)
                    {
                        if (A[i + 1][j + 1]){
                             mp[{i,j}].push_back({i + 1, j + 1});
                        }
                           
                    }
                    if (A[i + 1][j])
                        mp[{i, j}].push_back({i + 1, j});
                    if (j - 1 >= 0)
                    {
                        if (A[i + 1][j - 1])
                            mp[{i, j}].push_back({i + 1, j - 1});
                    }
                }
                if (i - 1 >= 0)
                {
                    if (j + 1 < M)
                        if (A[i - 1][j + 1])
                            mp[{i, j}].push_back({i - 1, j + 1});
                    if (A[i - 1][j])
                        mp[{i, j}].push_back({i - 1, j});
                    if (j - 1 >= 0)
                        if (A[i - 1][j - 1])
                            mp[{i, j}].push_back({i - 1, j - 1});
                }
                if (j + 1 < M)
                    if (A[i][j + 1])
                        mp[{i, j}].push_back({i, j + 1});
                if (j - 1 >= 0)
                    if (A[i][j - 1])
                        mp[{i, j}].push_back({i, j - 1});
            }
        }
    }
   matvisited.assign(N, vb(M ,0));
   vvb visited(N, vb(M,0));
   int maxx = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1 and !matvisited[i][j])
            { 
                maxi = INT_MIN;
                matvisited[i][j] = 1;
                // maxi = max(maxi, bfs({i, j}, N, M, mp));
                dfs({i,j} , 1 , maxi , visited , mp);
                maxx = max(maxx, maxi);

            }
        }
    }
    return maxx;
} */