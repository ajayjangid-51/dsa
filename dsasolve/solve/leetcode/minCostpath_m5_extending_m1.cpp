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
#define line(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define linex cout << "🛑_______________________________🛑" \
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
vector<vector<bool>> visited;
vector<vector<bool>> done;
vector<vector<bool>> recStack;
vector<vector<int>> dp;
int ii = 0;
int dfs(pii node, int &A, int &B, vector<string> &C)
{
    // debline(debpair(node));
    // cout << "🔑 node.first = " << node.first << ", node.second = " << node.second <<
    // endl;
    cout << "(" << node.first << "," << node.second << ")" << endl;
    deb(C[node.first][node.second]);
    // deb(dp[node.first][node.second]);
    if (node.first == A - 1 and node.second == B - 1)
    {
        // cout << "⭐destination reached...⭐" << endl;
        return 0;
    }
    // deb(dp[node.first][node.second]);

    if (done[node.first][node.second])
    {
        // cout << "⭐visited-node...⭐" << endl;
        deb(node.first);
        deb(node.second);
        deb(dp[node.first][node.second]);
        deb("IS  done...");
        return dp[node.first][node.second];
    }
    // if (visited[node.first][node.second])
    // {
    //     return 1000000;
    // }
    // visited[node.first][node.second] = 1;
    // int ret = 100000;
    // debline(ret);
    recStack[node.first][node.second] = 1;
    for (int i = 0; i < 4; i++)
    {
        // here i=0 means L , i = 1 means up , i = 2 means down and i = 3 means right.
        int xx = node.first + x[i], yy = node.second + y[i];
        if ((xx < A and xx >= 0) and (yy < B and yy >= 0))
        {
            if (!recStack[xx][yy])
            {

                if (mp[i] == C[node.first][node.second])
                {
                    linex;
                    deb(i);
                    deb(mp[i]);
                    deb(xx);
                    deb(yy);
                    deb(C[xx][yy]);
                    linex;
                    cout << "🔦1" << endl;

                    int ans1 = dfs({xx, yy}, A, B, C);
                    // deb(ans1);
                    dp[node.first][node.second] = min(dp[node.first][node.second], ans1);
                    // ret = min(ret, dfs({xx, yy}, A, B, C));
                }
                else
                {
                    linex;
                    deb(i);
                    deb(mp[i]);
                    deb(xx);
                    deb(yy);
                    deb(C[xx][yy]);
                    linex;
                    cout << "🔦2" << endl;
                    int ans2 = dfs({xx, yy}, A, B, C);
                    // deb(ans2);
                    dp[node.first][node.second] = min(dp[node.first][node.second], (1 + ans2));
                    // deb(ret);
                    // ret = min(ret, (1 + dfs({xx, yy}, A, B, C)));
                }
            }
            // deb("hi ji hello ji");
        }
        // else
        // {
        //     // deb("hi");
        //     if (xx != nodeparent.first and yy != nodeparent.second)
        //     {
        //         int ans3 = dfs({xx, yy}, A, B, C, {node.first, node.second});
        //         // deb(ans3);
        //         dp[node.first][node.second] = min(dp[node.first][node.second], ans3);
        //     }

        //     // ret = min(ret, dfs({xx, yy}, A, B, C));
        // }

        // }
    }
    // visited[node.first][node.second] = 0;
    done[node.first][node.second] = 1;
    recStack[node.first][node.second] = 0;

    // dp[node.first][node.second] = ret;

    // print("🎗️🎗️🎗️");
    // deb(ret);
    // print("🎗️🎗️🎗️");
    cout << "🥏"
         << "(" << node.first << ", " << node.second << ")" << endl;
    debline(dp[node.first][node.second]);
    return dp[node.first][node.second];
}
int solve(int A, int B, vector<string> &C)
{
    mp[0] = 'L';
    mp[1] = 'U';
    mp[2] = 'D';
    mp[3] = 'R';
    // m = A, n = B;
    // visited[0][0] = 1;
    visited.assign(A, vb(B, 0));
    done.assign(A, vb(B, 0));
    recStack.assign(A, vb(B, 0));

    dp.assign(A, vi(B, 1000000));
    dp[A - 1][B - 1] = 0;

    // deb(dp[A - 1][B - 1]);
    int ans = dfs({0, 0}, A, B, C);
    // int ans = 7;

    deb(ans);
    trav(dp)
    {
        trav2(x) cout << y << " ";
        nline;
    }
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
            // "RRD", "DDU", "LLL"
            "DUDRURRLDR", "DULRLULDRD", "DLULUDLLDL", "RLRRDURDLD", "LURULLRDLL", "RRLDURURDL", "DULDURUDRL", "RUUUDUDLDR", "RRRRDLULRL", "DLRRUDRUUU"
            // "LLLL"
            // "RRRRRRR"
            // "RUDL", "DUUL", "DLRR"
            // "LLLL"
            // "RRRRD", "DLLLL", "RRRRD", "DLLLL", "RRRRR"

        };
        // solve(3, 3, C);
        solve(10, 10, C);
        // solve(1, 4, C);
        // solve(5, 5, C);
        // solve(1, 4, C);
    }
    return 0;
}

/* IMP-notePOint on MinCostPath-Problem:- 
as all vohi baat ki default-solution is simple and straight forward , mtlb apnko simply start to end k bich ka shortest-path find krna tha.. considering that ki edge-weight is 0 if it written direction is same as we move , and else edge-weight is 1.

one note-point ki see our that dp-solution which is in mincostpath.cpp first-file.

note-point:- agr apnko kisi node ko visited mark krke vapis se unvisited mark krna hai jab we are moving to next-branh of the current-parent then simply  apnko uss current-parent k last returnline se phle wali line meh usske unvisited mark dena hai, and yeh baat same hai for  ki agr apnko kisi node ko visited mark krne k baad jab apn uss node k subtree ko pura visit krle then uss node ko apnko unvisit mark krna hai then voh bhi apn simply uss node ki recursive-call meh lastline meh unvisit mark kr sktehh hai. as like jaise abhi apnne apni "dp"-solution wali approach kiya tha..
IMP=note=point: ki apn ess problem ko "dp" se nhi kr sktehh hai, mtlb ki apn jo  "done"-results store kr rhe hai, voh kisi other branch meh galat sabhit ho rhe hai, as q ki jaise branch-1 meh apn jaise current-node k children  meh uske parent pe nhi jatehh toh mtlb uss current-node ka jo done-result hai voh uske parent-node ko chod k hai and esiliy jaise other branch meh vohi hi result hoga mtlb voh uska parent-node chodke wala result but ess branch meh toh voh parent-node syad and paka node ka parent nhi hoga, thus toh mtlb isiliy yeh apni "dp"-memoization kaam nhi kr rha hai... (So toh mtlb apnko dhyn rkhna hai ki aseh  "dp"-approach bhi sahi answer nhi deti. and yeh voh situation hoti jaha  undirected-edges hoti hai or ya mtlb dual-opposite-edges hoti hai, mtlb undirected-graph meh "dp"-approach kaam nhi krti.... yeh baat kafi important hai and apnko ess baat ka kafi accche se dhyn rkhna hai, mtlb kafi acchi baat hai yeh yrr...jabardust baat hai... ) */