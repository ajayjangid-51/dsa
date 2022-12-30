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
void dfs(int i, int j, vector<vector<bool>> &visited, vector<vector<char>> &A)
{
    if (i < 0 || i >= A.size() || j < 0 || j >= A[0].size() || A[i][j] == 'X')
        return;

    deb("hello");

    // int cell = i * a[0].length + j;
    if (visited[i][j])
        return;
    visited[i][j] = 1;
    A[i][j] = 'M';

    //Visit neighbors
    dfs(i + 1, j, visited, A);
    dfs(i - 1, j, visited, A);
    dfs(i, j + 1, visited, A);
    dfs(i, j - 1, visited, A);
}
void solve(vector<vector<char>> &A)
{
    int m = A.size(), n = A[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 or i == m - 1) or (j == 0 or j == n - 1))
            {
                cout << i << " " << j << endl;
                // deb(A[i][j]);
                if (A[i][j] == 'O' and !visited[i][j])
                {
                    dfs(i, j, visited, A);
                }
            }
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (A[i][j] == '*')
    //             A[i][j] = 'O';
    //         else
    //             A[i][j] = 'X';
    //     }
    // }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i != 0 or i != m - 1) or (j != 0 or j != n - 1))
            {
                if (A[i][j] == 'M')
                    A[i][j] = 'O';
                else
                    A[i][j] = 'X';
            }
        }
    }
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vector<vector<char>> A = {{'X', 'X', 'X', 'X'},
                                  {'X', 'O', 'O', 'X'},
                                  {'X', 'X', 'O', 'X'},
                                  {'X', 'O', 'X', 'X'}};
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[0].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
        solve(A);
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[0].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
        cout << "okay bye" << endl;
        return 0;
    }
}