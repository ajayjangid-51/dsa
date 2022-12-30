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
void solve()
{
    // vi A = {-4, 2, 3};
    vi A = {-49, 58, 72, -78, 9, 65, -42, -3};
    // vi B = {-2, 0, 4};
    vi B = {30, -13, -70, 58, -34, 79, -36, 27};
    // vi tmp;
    int maxi = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        int mini = INT_MAX;
        int jj = -1;
        for (int j = 0; j < B.size(); j++)
        {
            deb(abs(A[i] - B[j]));
            if (mini > abs(A[i] - B[j]))
            {
                mini = abs(A[i] - B[j]);
                jj = j;
                // B.erase(B.begin() + j);
            }
            // mini = min(mini, abs(A[i] - B[j]));
        }
        if (jj != -1)
        {
            B.erase(B.begin() + jj);
        }
        debline(mini);
        maxi = max(maxi, mini);
        linebreak;
    }
    debline(maxi);
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