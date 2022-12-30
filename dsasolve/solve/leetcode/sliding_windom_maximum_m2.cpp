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
vi ng(vi arr)
{
    int n = arr.size();
    vi ans(n);
    stack<int> stk;
    for (int i = n - 1; i >= 0; i--)
    {
        // if (stk.empty())
        //     ans[i] = -1;
        // else if (arr[i] < stk.top())
        // {
        //     ans[i] = stk.top();
        // }
        while (!stk.empty() and arr[i] >= arr[stk.top()])
        {
            stk.pop();
        }
        if (stk.empty())
            ans[i] = -1;
        else
            ans[i] = stk.top();
        stk.push(i);
    }
    debline(ans.size());
    trav(ans) print(x);
    linebreak;

    return ans;
}
void solve()
{
    vi arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    // vi nge = {1, 2, 4, 4, 5, 8, 7, 8, -1};
    vi nge = ng(arr);
    // ng(arr);
    int n = arr.size();
    int k = 3;
    vi ans(n - k + 1);
    for (int i = 0; i <= n - k; i++)
    {
        debline(i);
        int j = nge[i];
        debline(j);
        if (j == -1)
        {
            ans[i] = arr[i];
            continue;
        };
        int prev = -1;
        int range = (i + k) - 1;
        deb(range);
        deb(j);
        while (j <= range)
        {
            if (j == -1)
                break;
            prev = j;
            j = nge[j];
        }
        if (prev == -1)
        {
            ans[i] = arr[i];
        }
        else
            ans[i] = arr[prev];

        // if (j == -1)
        //     ans[i] = arr[i];
        // else
        // {

        // }
        linebreak;
    }
    trav(ans) print(x);
    linebreak;
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