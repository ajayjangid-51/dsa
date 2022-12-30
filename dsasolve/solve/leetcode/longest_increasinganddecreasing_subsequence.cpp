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

int solve(int k, vi &arr, vi &store)
{
    // base-cases:-
    if (k < 0)
        return 0;
    // store-case:-
    if (store[k] != -1)
    {
        return store[k];
    }
    // recursion-function:-
    int ans = 0;
    int i = k - 1;
    while (arr[i] >= arr[k])
    {
        if (i < 0)
            break;
        // deb(arr[k]);
        // deb(arr[i]);
        i--;
    }
    // linebreak;
    ans = solve(i, arr, store) + 1;
    store[k] = ans;
    return ans;
}
int solve2(int k, int first, vi arr, vi &store)
{
    if (k < 0)
        return 0;
    if (store[k] != -1)
        return store[k];
    int ans = 0;
    int i = k - 1;
    while (arr[i] <= arr[k])
    {
        if (i < first)
            break;
        i--;
    }
    ans = solve2(i, first, arr, store) + 1;
    store[k] = ans;
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vi arr = {1, 11, 2, 10, 4, 5, 2, 1};
        // vi arr = {1, 2, 1};
        // vi arr = {};
        int k = arr.size();
        vi store(k + 1, -1);
        for (int i = k - 1; i >= 0; i--)
        {

            solve(i, arr, store);
        }
        linebreak;
        trav(store) print(x);
        linebreak;
        vi store2(k + 1, -1);
        int j = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            solve2(i, j, arr, store2);
            j++;
        }
        linebreak;
        trav(store2) print(x);
        linebreak;
        int maxi = INT_MIN;
        k = arr.size() - 1;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            maxi = max(maxi, store[i] + store2[k - i]);
        }
        deb(maxi);
    }
    return 0;
}