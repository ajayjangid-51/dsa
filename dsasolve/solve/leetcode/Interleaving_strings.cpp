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
bool isInterleaved(int m, int n, int o, string A, string B, string C)
{
    // base-cases:-
    if (m < 0 and n < 0 and o < 0)
        return true;
    if (o < 0)
        return false;

    // recursive-formula:-
    int ans = 0;
    if (C[o] == A[m])
    {
        ans = isInterleaved(m - 1, n, o - 1, A, B, C);
    }
    if (C[o] == B[n])
    {
        ans = ans or isInterleaved(m, n - 1, o - 1, A, B, C);
    }

    return ans;
}
int isInterleave(string A, string B, string C)
{
    // impossilbe-cases:-
    int c = C.length(), a = A.length(), b = B.length();
    if (c != a + b)
        return 0;
    string cc = C, aa = A + B;
    sort(range(cc));
    sort(range(aa));
    if (cc != aa)
        return 0;
    //
    return isInterleaved(a - 1, b - 1, c - 1, A, B, C);
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
        string A("aabcc"), B("dbbca"), C("aadbbcbcac");
        int m = A.length(), n = B.length(), o = C.length();
        int ans = isInterleaved(m - 1, n - 1, o - 1, A, B, C);
        debline(ans);
    }
    return 0;
}