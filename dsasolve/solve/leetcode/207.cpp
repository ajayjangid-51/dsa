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

#define trav(a) for (auto x : a)

class Solution
{
public:
    vector<bool> visited;
    bool ans = false;
    void dfs(int v, vector<vector<int>> adjlist)
    {
        // deb(v);
        visited[v] = true;
        for (auto x : adjlist[v])
        {
            // deb(x);
            if (visited[x])
            {
                // cout << "hi" << endl;
                ans = !ans;
                return;
            }
            if (!visited[x])
                dfs(x, adjlist);
        }
        // deb("bye bye");
    }
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        // trav(prerequisites){
        //     trav2(x) cout << y << " ";
        //     cout << endl;
        // }
        visited.assign(numCourses + 1, false);
        vector<vector<int>> adjlist(numCourses);
        trav(prerequisites)
        {
            adjlist[x[0]].push_back(x[1]);
        }
        // trav(adjlist){
        //     trav2(x){
        //         cout << y << " ";

        //     }
        //     cout << endl;
        // }
        for (int j = 0; j < numCourses; j++)
        {
            if (!visited[j])
            {
                if (ans == false)
                {

                    dfs(j, adjlist);
                }
                else
                    break;
            }
        }
        // deb("helo");
        return ans;
    }
};

int main()
{
    io_faster
    file();
    Solution obj1;
    vector<vector<int>> pre;
    // pre.push_back({1, 4});
    // pre.push_back({2, 4});
    // pre.push_back({3, 1});
    // pre.push_back({3, 2});
    pre.push_back({1, 0});
    pre.push_back({0, 1});
    cout << "ans is " << endl
         << obj1.canFinish(5, pre) << endl;
    // obj1.canFinish(4 ,pre);

    return 0;
}
