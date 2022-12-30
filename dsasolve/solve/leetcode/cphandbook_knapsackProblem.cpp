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
int solve(int sum, int k, vvi &store, vi objects)
{
    // base-cases:-
    deb(sum);
    deb(k);
    if (sum == 0 and k == 0)
    {
        store[sum][k] = 1;
        return 1;
    }
    if (sum <= 0 or k <= 0)
    {
        store[sum][k] = 0;
        return 0;
    }
    // store case:-
    if (store[sum][k] != -1)
    {
        return store[sum][k];
    }
    // deb("hi");
    int ans = 1;
    if (sum - objects[k - 1] >= 0)
        ans = ((solve(sum - objects[k - 1], k - 1, store, objects)) or (solve(sum, k - 1, store, objects)));
    store[sum][k] = ans;
    return store[sum][k];
}

int main()
{
    io_faster
        // file();
        int t = 1;
    //	cin >> t;
    while (t--)
    {
        vi objects = {1, 3, 3, 5};
        int n = 0;
        int k = objects.size();
        trav(objects)
        {
            n += x;
        }
        vi v(n + 1, 0);
        vvi store(n + 5, vector<int>(k + 5, -1));
        // for(int i= 0;i<n+1;i++){
        int tmp = solve(7, k, store, objects);
        v[7] = tmp;
        // }
        trav(v)
        {
            // if(x){
            print(x);
            // }
        }
        // return v;
    }
    return 0;
}