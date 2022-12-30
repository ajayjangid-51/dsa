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
#define vvl vector<vector<long long>>
#define vvb vector<vb>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
vvl multiplyMatrix(vvl a, vvl b)
{
    // print(mat1[0][0]), print(mat1[0][1]), print(","), print(mat2[0][0]), print(mat2[0][1]);
    // nline;
    // print(mat1[1][0]), print(mat1[1][1]), print(","), print(mat2[1][0]), print(mat2[1][1]);
    // linebreak1;

    // vvl mat(2, vector<long long>(2));
    vvl mult(2, vector<long long>(2));
    // mat[0][0] = (mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0]) % MOD;
    // mat[0][1] = (mat1[0][0] * mat2[1][0] + mat1[0][1] * mat2[1][1]) % MOD;
    // mat[1][0] = (mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][0]) % MOD;
    // mat[1][1] = (mat1[1][0] * mat2[1][0] + mat1[1][1] * mat2[1][1]) % MOD;

    // return mat;
    int r1 = 2, r2 = 2, c1 = 2, c2 = 2;

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
            {
                // mult[i][j] += (a[i][k] * b[k][j]) % MOD;
                mult[i][j] = (mult[i][j] + (a[i][k] * b[k][j]) % MOD) % MOD;
            }
    return mult;
}
vvl fn(vvl mat, int A)
{
    if (A == 1)
        return mat;
    vvl m2 = fn(mat, A / 2);
    vvl ans = multiplyMatrix(m2, m2);
    if (A & 1)
    {
        // return multiplyMatrix(mat, ans);
        return multiplyMatrix(ans, mat);
    }
    else
        return ans;
}
void solve()
{
    int A;
    cin >> A;
    // A--;
    deb(A);
    vvl v = {{1, 1}, {1, 0}};
    vvl ans = fn(v, A);

    // print("💨💨💨💨💨💨💨💨");
    trav(ans)
    {

        trav2(x) print(y);
        nline;
    }
    // linebreak1;
    // vvl ans2 = multiplyMatrix({{21, 13}, {11, 6}}, v);
    // trav(ans2)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }
    /*
    vvl ans2 = multiplyMatrix(v, v);
    vvl ans3 = multiplyMatrix(ans2, v);
    vvl ans4 = multiplyMatrix(ans3, v);
   trav(ans2)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
    trav(ans3)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
    trav(ans4)
    {
        trav2(x) print(y);
        nline;
    } */
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}