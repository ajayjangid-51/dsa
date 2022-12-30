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
int jump(vector<int> &A)
{
    int n = A.size();
    vector<int> store(n + 1, -1);
    store[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int ans = INT_MAX;
        for (int j = i - 1; j >= 0; j--)
        {
            if (A[j] >= (i - j))
            {
                ans = min(ans, store[j]);
            }
        }
        if (ans > 10000000)
        {
            return -1;
        }
        store[i] = (ans + 1);
    }
    deb(store[n - 1]);
    return store[n - 1];
}
// this is dp-solution, but it is getting TLE , mtlb we have to see more efficient-solution than "dp"-solution and that is "greedy"-solution. so in method2 we will do it by "greedy"-approach.
// haan "dp" se answer ek dam sahi aayega, but bas "TLE ho skti hai, agr if test-cases are "greedy"-solution oriented.

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vi A = {2, 3, 1, 1, 4};
        jump(A);
    }
    return 0;
}