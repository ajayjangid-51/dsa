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
int subArraySum(vi &arr, int sum)
{
    int p1 = 0, p2 = 1; // index-pointers:-
    int subsum = arr[p1] + arr[p2];
    if (subsum == sum)
        return 1;
    while (1)
    {
        if (subsum + arr[p2 + 1] < sum)
        {
            // if (subsum + arr[p2 + 1] == sum)
            // {
            //     return 1;
            // }
            // else
            p2++;
            subsum += arr[p2];
        }
        else
        {
            subsum -= arr[p1];
            while (subsum + arr[p1 + 1] >= sum)
            {
                // if(equal) return 1;
                p1++;
                subsum += arr[p1];
            }
        }
    }
}
void solve()
{
    vi arr = {1, 3, 2, 5, 1, 1, 2, 3};
    int sum = 8;
    int ans = subArraySum(arr, sum);
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