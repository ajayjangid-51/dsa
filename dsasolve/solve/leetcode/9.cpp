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
    int n;
    cin >> n;
    if (n < 0)
        // return false;
        cout << "false";
    // return 0;

    int rev = 0;
    int n_copy = n;
    while (n_copy != 0)
    {
        int pop = n_copy % 10;
        n_copy /= 10;
        rev = rev * 10 + pop;
    }
    if (rev == n)
        // return 1;
        cout << "true";
    else
        // return 0;
        cout << "false";

    return 0;
}