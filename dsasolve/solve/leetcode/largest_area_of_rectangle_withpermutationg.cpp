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
bool myfunction(int i, int j)
{
    return (i < j);
}
int solve(vector<vector<int>> &A)
{
    int n = A.size(), m = A[0].size();
    // vvi mat(n, vi(m));
    // for (int j = 0; j < m; j++)
    // {
    //     print("😀");
    //     deb(j);

    //     for (int i = 0; i < n; i++)
    //     {
    //         int cnt = 0;
    //         for (int k = i; k >= 0; k--)
    //         {
    //             deb(A[k][j]);
    //             if (A[k][j] == 1)
    //             {
    //                 cnt++;
    //             }
    //             else
    //             {
    //                 // cnt = 0;
    //                 break;
    //             }
    //         }
    //         linebreak;
    //         debline(cnt);

    //         mat[i][j] = cnt;
    //     }
    // }

    // trav(mat)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }
    // trav(mat)
    // {
    //     // sort(range(x), myfunction);

    //     sort(range(x));
    // }
    // sort(range(mat[0]));
    // sort(range(mat[1]));
    // sort(range(mat[2]));
    // sort(range(mat[3]));
    // trav(mat)
    // {
    //     // sort(range(x));
    //     // sort(x.begin(), x.end());
    //     // sort(x.begin(), x.end());
    //     sort(range(x));
    //     trav2(x) print(y);
    //     linebreak;

    //     // deb(*x.begin());
    //     // deb(x[0);
    // }
    // linebreak;
    // trav(mat)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }
    int ans = INT_MIN;
    vvi mat = {{0, 0, 0, 1}, {0, 0, 1, 2}, {0, 1, 2, 3}, {1, 2, 3, 4}};
    deb(mat.size());
    deb(mat[0].size());
    // trav(mat){
    for (int j = n - 1; j >= 0; j--)
    {
        // int row = j+1;
        int col = 1;
        int temp = 0;
        for (int i = m - 1; i >= 0; i--)
        {
            temp = mat[i][j] * col;
            deb(temp);
            ans = max(ans, temp);

            col++;
        }
    }
    trav(mat)
    {
        trav2(x) print(y);
        linebreak;
    }
    deb(ans);

    return 0;
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
            {1, 0, 0, 0},
            {1, 1, 0, 0},
            {1, 1, 1, 0},
            {1, 1, 1, 1}};
        solve(A);
    }
    return 0;
}