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
                  << "\n\n"
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
void dfs(int node, int distance, map<int, vector<pii>> &mp, int &mini)
{

    if (node == 100)
    {
        mini = min(mini, distance);
        return;
    }
    for (auto x : mp[node])
    {
        dfs(x.first, distance + x.second, mp, mini);
    }
}
int snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B)
{
    A.push_back({100, 100});
    int mini = INT_MAX;
    map<int, vector<pii>> mp;
    queue<int> que;
    que.push(1);
    while (!que.empty())
    {
        bend;
        int node = que.front();
        que.pop();
        debline(node);
        trav(A)
        {
            if (x[0] > node)
            {
                deb(x[0]);
                deb(x[1]);
                que.push(x[1]);
                int nextdist = ceil(float(x[0] - node) / 6);
                deb(nextdist);
                int snakenum_betweenx1and100 = 0;
                int continoussnake_bwtnx1and100 = 0;
                int conti = 0;
                // trav2(B)
                for (int i = 0; i < B.size(); i++)
                {
                    if (B[i][0] == 100)
                        return -1;
                    if (B[i][0] > x[1])
                    {
                        if (i + 1 != B.size() and B[i][0] == (B[i + 1][0] + 1))
                            conti++;
                        else
                            conti = 0;

                        snakenum_betweenx1and100++;
                    }
                }
                debline(conti);
                if (conti >= 6)
                {
                    mini = -1;
                    return mini;
                }
                deb(snakenum_betweenx1and100);
                debline(mini);
                // if (num >= 6)
                // {
                //     debline(mini);
                //     mini = -1;
                //     debline(mini);
                //     // deb(mini);
                //     return mini;
                // }
                mp[node].push_back({x[1], nextdist});
            }
        }
    }

    print("printing mp");
    nline;
    trav(mp)
    {
        deb(x.first);
        trav2(x.second)
        {
            cout << y.first << " " << y.second << endl;
        }
        nline;
    }
    // dfs(1, 0, mp, mini);
    deb(mini);
    return mini;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        vvi A, B;
        A = {
            // {32, 62},
            // {42, 78},
            // {12, 98},
            //
            // {8, 52},
            // {6, 80},
            // {26, 42},
            // {2, 72},
            //
            // {3, 90}
            {5, 66},
            {9, 88},

        };
        B = {
            /* {95, 13},
            {97, 25},
            {93, 37},
            {79, 27},
            {75, 19},
            {49, 47},
            // {62, 35},
            {67, 17}, */

            //

            /* {51, 19},
            {39, 11},
            {37, 29},
            {81, 3},
            {59, 5},
            {79, 23},
            {53, 7},
            {43, 33},
            {77, 21}, */
            //
            // {99, 10},
            // {97, 20},
            // {98, 30},
            // {96, 40},
            // {95, 50},
            // {94, 60},
            // {93, 70},
            //
            {67, 8}};

        snakeLadder(A, B);
    }
    return 0;
}