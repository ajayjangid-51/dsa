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
#define mp make_pair
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
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

int main()
{
    io_faster
    file();
    int x;
    cin >> x;
    deb(x);
    vi v;
    // string s = to_string(x);
    // int placer = pow(10, s.length() - 1);

    int res = 0;
    while (x != 0)
    {
        // res += placer * (x % 10);
        v.push_back(x % 10);
        // placer /= 10;

        x /= 10;
    }
    // s.clear();
    string s;
    trav(v) cout << x;
    cout << endl;
    trav(v) s.push_back(x);
    stringstream num(s);
    num >> res;
    // res = stoi(s);
    int mini = pow(-2, 63);
    int maxi = pow(2, 63);
    if (res >= mini && res <= maxi)
        deb(res);
    else
        deb(0);

    return 0;
}