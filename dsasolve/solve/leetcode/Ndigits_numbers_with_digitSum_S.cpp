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
// int solve(int sum , int digits , map<pii,int> &store){
int solve(int sum, int digits)
{
    // base-cases:-
    // deb(sum);
    // deb(digits);
    // linebreak;
    if (sum > 9 * digits)
        return 0;
    if (digits == 1)
    {
        return 1;
    }

    // store-case:-
    // pii p1(sum , digits);
    // if(store.find(p1)!=store.end()){
    //     return store[p1];
    // }

    long ans = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (sum - i > 0)
            // ans = (ans+ solve(sum-i , digits-1 , store))%MOD;
            ans = solve(sum - i, digits - 1);
    }
    // debline(ans);
    // store[sum][]
    // pii p(ans , digits);
    // store[p]  = ans;
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
        // map<pii , int> store;
        // solve(4 , 2, store);
        //    int ans = solve(15 , 3, store);
        int ans = solve(22, 75);
        //    int ans = solve(2 , 2, store);
        debline(ans);
    }
    return 0;
}