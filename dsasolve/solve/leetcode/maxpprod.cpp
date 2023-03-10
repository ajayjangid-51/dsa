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
#define debline(x) cout << "๐Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "๐ข" << #x << " = " << x << "________________๐ข " << endl
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
    vi arr = {1, 5, 3, 2, 4, 8, 1};
    int n = arr.size();
    vi left(n);
    vi right(n);
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        deb(arr[i]);
        if (stk.empty())
        {

            left[i] = -1;
            // stk.push(arr[i]);
        }
        else if (arr[i] >= arr[stk.top()])
        {
            while (!stk.empty() and arr[i] >= arr[stk.top()])
            {
                stk.pop();
            }
            if (stk.empty())
            {
                left[i] = -1;
            }
            else
            {
                left[i] = stk.top();
            }
        }
        else
        {
            left[i] = stk.top();
            // stk.push(arr[i]);
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
            right[i] = -1;
        else if (arr[i] >= arr[stk.top()])
        {
            while (!stk.empty() and arr[i] >= arr[stk.top()])
            {
                stk.pop();
            }
            if (stk.empty())
                right[i] = -1;
            else
                right[i] = stk.top();
        }
        else
        {
            right[i] = stk.top();
        }
        stk.push(i);
    }
    trav(right) print(x);
    linebreak;

    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        maxx = max(left[i] * right[i], maxx);
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