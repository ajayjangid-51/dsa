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
const int mod = 10000003;

bool isokay(long long arr[], int n, int k, long long mid)
{
    deb(mid);

    int st = 1;
    long long currSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
            return 0;
        if (arr[i] + currSum > mid)
        {
            st++;
            currSum = arr[i];
            if (st > k)
                return 0;
        }
        else
        {
            currSum += arr[i];
        }
    }
    return 1;
}
long long minTime(long long arr[], int n, int k)
{
    // code here
    // return minimum tim,,
    deb(arr[0]);
    deb(arr[1]);
    long long tmxTime = 0;
    for (int i = 0; i < n; i++)
        tmxTime += arr[i];
    deb(tmxTime);
    long long i = 0, j = tmxTime;
    long long ans = LLONG_MAX;
    while (i <= j)
    {
        long long mid = (i + j) / 2;
        if (isokay(arr, n, k, mid))
        {
            ans = min(ans, mid);
            j = mid - 1;
        }
        else
            i = mid + 1;
    }
    return ans;
}
void solve()
{
    // int arr[5] = {5, 10, 30, 20, 15};
    int arr[2] = {1000000, 1000000};
    deb(arr[0] % MOD);
    arr[0] = arr[0] * arr[1];
    deb(arr[0]);
    print("😀");
    // deb(arr[1])
    arr[0] = (arr[0] % MOD * 1000000 % MOD) % MOD;
    deb(arr[0]);
    long long arr1[2] = {1000000, 1000000};
    arr1[0] = ((long long)arr[0] * 1000000) % mod;
    arr1[1] = ((long long)arr[1] * 1000000) % mod;
    /* int arr[2] = { 1,  10};
      long long arr1[2] = {1, 10};
      int B = 5;
      arr1[0] = ((long long)arr[0] * B) % mod;
      arr1[1] = ((long long)arr[1] * B) % mod; */
    // arr1[0] = (long long)(arr[0] % mod * 1000000 % mod) % mod;
    // arr1[1] = (long long)(arr[1] % mod * 1000000 % mod) % mod;
    debline(arr[0]);
    debline(arr[1]);
    int k = 1;
    int n = 2;

    // LONG_LONG_MAX

    long long ans = minTime(arr1, n, k);
    deb(ans);
    deb(ans % 10000003);
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