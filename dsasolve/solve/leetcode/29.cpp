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
    int dividend, divisor;
    cin >> dividend >> divisor;
    bool dd, dr;
    if (divisor < 0)
        dr = true;
    if (dividend < 0)
        dd = true;
    int quotient = 0;
    if (dr)
    {
        divisor *= -1;
        // divisor*= -1;
        if (dd)
        {
            dividend *= -1;
            while (dividend >= divisor)
            {
                dividend -= divisor;
                quotient++;
            }
        }
        else
            while (dividend >= divisor)
            {
                dividend -= divisor;
                quotient++;
            }
    }
    else
    {
        if (dd)
        {
            dividend *= -1;
            while (dividend >= divisor)
            {
                dividend -= divisor;
                quotient++;
            }
        }
        else
            while (dividend >= divisor)
            {
                dividend -= divisor;
                quotient++;
            }
    }
    if (dd)
        quotient *= -1;

    if (dr)
        quotient *= -1;
    deb(quotient);

    return 0;
}
// this is simple and naive method.. but we will other method which is good efficient faster and that is based on bit-manipulation:-