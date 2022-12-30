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

unordered_map<string, bool> store;
bool solve(string A, string B)
{
    // base-cases:-
    if (A.length() != B.length())
        return false;
    int n = A.size(); //or B.size();
    if (n == 0)
        return true;
    if (A == B)
        return true;

    // store-case:-
    string tmp = A;
    tmp += ' ';
    tmp += B;
    if (store.find(tmp) != store.end())
    {
        return store[tmp];
    }
    bool ans = 0;
    for (int i = A.size(); i >= 0; i--)
    {
        if (solve(A.substr(0, i), B.substr(0, i)) and solve(A.substr(i, n), B.substr(i, n)))
        {
            ans = true;
        }
        if (solve(A.substr(n - i, i), B.substr(0, i)) and solve(A.substr(0, n - i), B.substr(i, n - i)))
        {
            ans = true;
        }
    }
    store[tmp] = ans;
    return ans;
}
int Solution::isScramble(const string A, const string B)
{
    int n = A.size();
    int m = B.size();
    if (n != m)
        return 0;
    string a = A, b = B;
    sort(range(a));
    sort(range(b));
    if (a != b)
        return 0;
    // vvi store(n+1, vi(n+1,-1));
    // unordered_map<string, bool> store;
    store.clear();
    return solve(A, B);
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