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
    // vi arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    // vi arr = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    vi arr = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int k = 3;
    int i = 0, j = k - 1;
    vi ans;
    int maxi = arr[i];
    for (; i <= j; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    ans.push_back(maxi);
    i = 0;

    while (i != arr.size() - k)
    {
        i++;
        j++;
        if (maxi == arr[i - 1])
            maxi = arr[i];
        if (arr[j] > maxi)
            maxi = arr[j];
        ans.push_back(maxi);
    }

    debline(ans.size());
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