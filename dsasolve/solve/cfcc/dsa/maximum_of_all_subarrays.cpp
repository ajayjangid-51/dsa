#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
    vi arr = {1, 3, 5, 4, 3, 1};
    int n = arr.size();
    // Arrays for maintaining left and right count
    // here CL[i] mtlb ki ith-element apne leftside meh kitne-consecutive elements se bda hai. and esa sense yeh hoga ki apn toh mtlb ess ith-index pe subarry-ki-ending maan k no.-of-subarray ending at this ith-index consider kr sktehh hai.
    int CL[n] = {0};
    int CR[n] = {0};

    // Stack for storing the indexes
    stack<int> q;

    // Calculate left count for every index
    for (int i = 0; i < n; i++)
    {
        while (q.size() != 0 && arr[q.top()] <= arr[i])
        {
            CL[i] += CL[q.top()] + 1;
            q.pop();
        }
        q.push(i);
    }

    // Clear the stack
    while (q.size() != 0)
        q.pop();

    // Calculate right count for every index
    for (int i = n - 1; i >= 0; i--)
    {
        while (q.size() != 0 && arr[q.top()] < arr[i])
        {
            CR[i] += CR[q.top()] + 1;
            q.pop();
        }
        q.push(i);
    }
    linebreak1;
    trav(CL) print(x);
    nline;
    trav(CR) print(x);
    linebreak1;
    // Clear the stack
    while (q.size() != 0)
        q.pop();

    // To store the required sum
    int ans = 0;

    // Calculate the final sum
    for (int i = 0; i < n; i++)
        ans += (CL[i] + 1) * (CR[i] + 1) * arr[i];

    debline(ans);
}
int main()
{
    5 io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}