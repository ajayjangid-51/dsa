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
    int rev = 0;
    while (x != 0)
    {
        int pop = x % 10;
        x /= 10;
        // int temp = rev * 10 + pop;
        // checking-beforehead:-

        /* if (x > 0)   
        {
            if (rev * 10 > INT_MAX)
            {
                rev = 0;
                // return
            }
            if (rev * 10 == INT_MAX)
            {
                if (pop > 7)
                {
                    rev = 0;
                    // return
                }
                else
                {
                    rev = temp;
                }
            }
        }
        else
        {
            if (rev * 10 < INT_MIN)
            {
                rev = 0;
                // return
            }
            if (rev * 10 == INT_MIN)
            {
                if (pop)
                {
                    rev = 0;
                }
                else
                    rev = temp;
            }
        }

        // checked:-
        rev = temp; ( 💩 shity way of writing code 💩 , see below and learn something from this way of typing code. */
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
            return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
            return 0;
        rev = rev * 10 + pop;
    }
    // return re
    deb(rev);

    return 0;
}