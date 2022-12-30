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
/* *-------------------------------------------------------------------------------* */
// method1-(naive-method):-
// naive-method toh yeh hoga ki apn matrix ki submatrices find krle and then unn sabhi individual ka sum find krle and then atlast meh sabhi k sum ko sumup krde.. so toh ess traike se kaam krne pr apnko O(n^6)-time toh lagega for finding all sub-matrices, and then har submatrices ka sum find krne meh O(n^2)-time lagjayega. toh mtlb overall apnko  O(n^6)-time toh lagega hi.

/* *-------------------------------------------------------------------------------* */
// method2-(thodi efficient-approach):-
// so toh apn matrix k har element(mat[i][j]) k liyeh no.-of-submatrices find krenge jismeh yeh element aata ho. and this thing can be given as or calculated as:- (no.of-choices-for-topleft-corner)*(no.of-choices-for-bottom-right-corner). mtlb for mat[i][j]-element which is equal to  = (i+1)*(j+1)*(n-i)*(n-j).
// so toh mtlb apn phir simply Sum += mat[i][j]*count[i][j] kr sktehh hai for getting the total-sum.

void PrintMatrix(vvi &mat, int rows, int columns, int ro, int co)
{
    for (int i = ro; i < rows; i++)
    {
        for (int j = co; j < columns; j++)
        {
            print(mat[i][j]);
        }
        nline;
    }
}

void solve(vvi &mat, int n, int m)
{
    /* 2021-11-01-08-54-15.png*-------------------------------------------------------------------------------* */
    // method1-implementation:-
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < m; ++j)
        {
            // we are at each sub matrix of size(i,j)
            for (int k = 0; k <= (n - i); ++k)
            {
                for (int p = 0; p <= (m - j); ++p)
                {
                    // we are at submatrix of size(i,j) starting at (k,p)
                    // assuming PrintMatrix(Matrix&, int rows, int cols, int r0, int c0);
                    PrintMatrix(mat, i, j, k, p);
                    linebreak;
                }
            }
        }
    }

    /* *-------------------------------------------------------------------------------* */
    // method2-implementation:-
    // 2021-11-01-09-12-33.png
    // int Sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         int count = (i + 1) * (j + 1) * (n - i) * (m - j);
    //         Sum += mat[i][j] * count;
    //     }
    // }
    // debline(Sum);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi mat = {
            {-8, 5, 7},
            {3, 7, -8},
            {5, -8, 9},

        };
        int n = mat.size(), m = mat[0].size();
        solve(mat, n, m);
    }
    return 0;
}