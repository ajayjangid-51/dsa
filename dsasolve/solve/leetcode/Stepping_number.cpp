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

vector<int> stepnum(int A, int B)
{
    vi ans;
    forn(i, A, B + 1)
    {
        int num = i;
        int lastdigit = num % 10;
        num /= 10;
        bool flag = 1;
        while (num != 0)
        {
            int currentdigit = num % 10;
            if (abs(currentdigit - lastdigit) != 1)
            {
                flag = 0;
                break;
            }
            num /= 10;
            lastdigit = currentdigit;
        }
        if (flag)
        {

            ans.push_back(i);
            deb(i);
        }
    }
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // solve();
        stepnum(10000, 20000);
    }
    return 0;
}