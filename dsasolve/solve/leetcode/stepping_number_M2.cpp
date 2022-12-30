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
void dfs(vector<int> &res, vector<int> adj[], int i, int temp, int A, int B)
{
    deb(i);
    temp = temp * 10 + i;
    deb(temp);
    if (temp >= A && temp <= B)
    {
        // deb(temp);
        res.push_back(temp);
    }

    if (temp > B)
        return;
    for (int x : adj[i])
    {
        dfs(res, adj, x, temp, A, B);
    }
}

vector<int> stepnum(int A, int B)
{
    vector<int> adj[10];
    adj[0].push_back(1);
    adj[9].push_back(8);
    for (int i = 1; i < 9; ++i)
    {
        adj[i].push_back(i - 1);
        adj[i].push_back(i + 1);
    }
    forn(i, 0, 10)
    {
        trav(adj[i]) cout << x << " ";
        cout << endl;
    }
    vector<int> res;
    for (int i = 0; i < 10; ++i)
    {
        if (i == 1)
            continue;
        dfs(res, adj, i, 0, A, B);
    }
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        {
            stepnum(10, 20);
        }
        return 0;
    }
}