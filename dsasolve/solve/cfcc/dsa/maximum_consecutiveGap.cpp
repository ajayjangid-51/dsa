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
    vector<int> arr = {1, 10, 5};
    int n = arr.size();
    deb(n);
    if (n < 2)
    {

        return;
    }
    // Find maximum and minimum in arr[]
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }
    deb(maxVal);
    deb(minVal);

    // bucket size
    int bSize = max(1, (maxVal - minVal) / (n - 1));
    deb(bSize);
    // number of buckets
    int bNum = ((maxVal - minVal) / bSize) + 1;
    deb(bNum);

    // Arrays to store maximum and minimum values
    // in bNum buckets of differences.
    int maxBucket[bNum];
    int minBucket[bNum];
    fill_n(maxBucket, bNum, INT_MIN);
    fill_n(minBucket, bNum, INT_MAX);

    // Traversing through array elements and
    // filling in appropriate bucket if bucket
    // is empty. Else updating bucket values.
    linebreak1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxVal || arr[i] == minVal)
            continue;

        // Finding index of bucket.
        deb(arr[i]);
        int index = (float)(floor(arr[i] - minVal) / bSize);
        deb(index);

        // Filling/Updating maximum value of bucket
        if (maxBucket[index] == INT_MIN)
            maxBucket[index] = arr[i];
        else
            maxBucket[index] = max(maxBucket[index], arr[i]);

        // Filling/Updating minimum value of bucket
        if (minBucket[index] == INT_MAX)
            minBucket[index] = arr[i];
        else
            minBucket[index] = min(minBucket[index], arr[i]);
    }
    linebreak1;

    // Finding maximum difference between maximum value
    // of previous bucket minus minimum of current bucket.
    int prev_val = minVal;
    int max_gap = 0;
    for (int i = 0; i < bNum; i++)
    {
        if (minBucket[i] == INT_MAX)
            continue;
        max_gap = max(max_gap, minBucket[i] - prev_val);
        prev_val = maxBucket[i];
    }
    max_gap = max(max_gap, maxVal - prev_val);

    debline(max_gap);
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