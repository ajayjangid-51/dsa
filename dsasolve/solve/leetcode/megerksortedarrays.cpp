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
#define vb vector<bool>
#define vi vector<int>
#define vs vector<string>
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
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
vector<int> solve(vector<vector<int>> &A)
{
    priority_queue<int> pque(less<int>(), A[0]);
    for (int i = 1; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            pque.push(A[i][j]);
        }
    }
    vi ans;
    while (!pque.empty())
    {
        ans.push_back(pque.top());
        pque.pop();
    }
    reverse(range(ans));
    trav(ans)
    {
        print(x);
    }
    return ans;
}
/* *-------------------------------------------------------------------------------* */
// method2:-
vector<int> solve2(vector<vector<int>> &A)
{
    vi ans;
    priority_queue<int, vi, greater<int>> pque;

    for (int i = 0; i < A[0].size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            pque.push(A[j][i]);
        }
    }
    while (!pque.empty())
    {
        ans.push_back(pque.top());
        pque.pop();
    }
    trav(ans)
    {
        print(x);
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
        vvi A = {{1, 2, 3}, {2, 4, 6}, {0, 9, 10}};
        // solve(A);
        solve2(A);
    }
    return 0;
}