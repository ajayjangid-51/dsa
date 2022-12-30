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
    // vi arr = {6, 1, 5, 4, 5, 2, 2};
    vi arr = {6, 2, 5, 4, 5, 1, 6};
    int n = arr.size();
    vi left(n);
    vi right(n);
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        deb(arr[i]);
        if (stk.empty())
            left[i] = i;
        else if (arr[i] > arr[stk.top()])
        {
            left[i] = i;
        }
        else
        {
            int prev = i;
            while (!stk.empty() and arr[i] <= arr[stk.top()])
            {
                prev = stk.top();
                debline(prev);
                stk.pop();
            }

            left[i] = left[prev];
        }
        stk.push(i);
    }
    trav(left) print(x);
    linebreak;
    while (!stk.empty())
        stk.pop();
    for (int i = n - 1; i >= 0; i--)
    {
        if (stk.empty())
            right[i] = i;
        else if (arr[i] > arr[stk.top()])
        {
            right[i] = i;
        }
        else
        {
            int prev = i;
            while (!stk.empty() and arr[i] <= arr[stk.top()])
            {
                prev = stk.top();
                debline(prev);
                stk.pop();
            }

            right[i] = right[prev];
        }
        stk.push(i);
    }
    trav(right) print(x);
    linebreak;
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        int t = arr[i] * (right[i] - left[i] + 1);
        deb(t);
        maxx = max(maxx, t);
        // maxx = max(maxx, (arr[i] * (right[i] - left[i]) + 1));
    }
    debline(maxx);
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