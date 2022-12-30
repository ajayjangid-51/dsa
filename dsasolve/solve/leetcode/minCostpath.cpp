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
#define linex(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define line cout << "🛑_______________________________🛑" \
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
vector<int> x = {0, -1, 1, 0};
vector<int> y = {-1, 0, 0, 1};
map<int, char> mp;

// int m, n;
// vector<vector<bool>> visited;
vector<vector<int>> dp;
int ii = 0;
int dfs(pii node, int &A, int &B, vector<string> &C)
{
    // if (ii > 1000000000)
    // {
    // deb(ii);
    // //     return ii;
    // // }
    // ii++;

    // cout << "🧑"
    //      << "node.first = " << node.first << " , node.second = " << node.second << "🧑" << endl;
    if (node.first >= A or node.first < 0 or node.second >= B or node.second < 0)
    {
        // cout << "⭐outrange-node...⭐" << endl;
        return 100000;
    }
    // deb(visited[node.first][node.second]);

    if (node.first == A - 1 and node.second == B - 1)
    {
        // cout << "⭐destination reached...⭐" << endl;
        return 0;
    }
    deb(dp[node.first][node.second]);

    if (dp[node.first][node.second] != -1)
    {
        // cout << "⭐visited-node...⭐" << endl;
        deb("hi");
        return dp[node.first][node.second];
    }
    // visited[node.first][node.second] = 1;
    int ret = 100000;
    // debline(ret);
    for (int i = 0; i < 4; i++)
    {
        // here i=0 means L , i = 1 means up , i = 2 means down and i = 3 means right.
        int xx = node.first + x[i], yy = node.second + y[i];
        if ((xx < A and xx >= 0) and (yy < B and yy >= 0))
        {
            // deb("hi ji hello ji");
            if (mp[i] == C[xx][yy])
            {
                int ans1 = dfs({xx, yy}, A, B, C);
                // deb(ans1);
                ret = min(ret, ans1);
                // ret = min(ret, dfs({xx, yy}, A, B, C));
            }
            else
            {
                int ans2 = dfs({xx, yy}, A, B, C);
                // deb(ans2);
                ret = min(ret, (1 + ans2));
                // deb(ret);
                // ret = min(ret, (1 + dfs({xx, yy}, A, B, C)));
            }
        }
        else
        {
            // deb("hi");
            int ans3 = dfs({xx, yy}, A, B, C);
            // deb(ans3);
            ret = min(ret, ans3);
            // ret = min(ret, dfs({xx, yy}, A, B, C));
        }

        // }
    }
    // visited[node.first][node.second] = 0;
    dp[node.first][node.second] = ret;

    // print("🎗️🎗️🎗️");
    // deb(ret);
    // print("🎗️🎗️🎗️");
    return ret;
}
int solve(int A, int B, vector<string> &C)
{
    mp[0] = 'L';
    mp[1] = 'D';
    mp[2] = 'U';
    mp[3] = 'R';
    // m = A, n = B;
    // visited[0][0] = 1;
    // visited.assign(A, vb(B, 0));
    dp.assign(A, vi(B, -1));

    // deb(dp[A - 1][B - 1]);
    int ans = dfs({0, 0}, A, B, C);
    // int ans = 7;

    deb(ans);
    return ans;
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
            // "DUDRURRLDR", "DULRLULDRD", "DLULUDLLDL", "RLRRDURDLD", "LURULLRDLL", "RRLDURURDL", "DULDURUDRL", "RUUUDUDLDR", "RRRRDLULRL", "DLRRUDRUUU"
            // "LLLL"
            // "RRRRRRR"
            // "RUDL", "DUUL", "DLRR"
            "LLLL"

        };
        // solve(3, 3, C);
        solve(1, 4, C);
        // solve(1, 4, C);
    }
    return 0;
}