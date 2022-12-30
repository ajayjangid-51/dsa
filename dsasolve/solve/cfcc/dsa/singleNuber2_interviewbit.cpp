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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
void solve()
{
    // vi A = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
    vi A = {890, 992, 172, 479, 973, 901, 417, 215, 901, 283, 788, 102, 726, 609, 379, 587, 630, 283, 10, 707, 203, 417, 382, 601, 713, 290, 489, 374, 203, 680, 108, 463, 290, 290, 382, 886, 584, 406, 809, 601, 176, 11, 554, 801, 166, 303, 308, 319, 172, 619, 400, 885, 203, 463, 303, 303, 885, 308, 460, 283, 406, 64, 584, 973, 572, 194, 383, 630, 395, 901, 992, 973, 938, 609, 938, 382, 169, 707, 680, 965, 726, 726, 890, 383, 172, 102, 10, 308, 10, 102, 587, 809, 460, 379, 713, 890, 463, 108, 108, 811, 176, 169, 313, 886, 400, 319, 22, 885, 572, 64, 120, 619, 313, 3, 460, 713, 811, 965, 479, 3, 247, 886, 120, 707, 120, 176, 374, 609, 395, 811, 406, 809, 801, 554, 3, 194, 11, 587, 169, 215, 313, 319, 554, 379, 788, 194, 630, 601, 965, 417, 788, 479, 64, 22, 22, 489, 166, 938, 66, 801, 374, 66, 619, 489, 215, 584, 383, 66, 680, 395, 400, 166, 572, 11, 992};
    vi v(32, 0);
    trav(A)
    {
        int t = x;
        for (int i = 31; i >= 0; i--)
        {
            if (t & 1)
                v[i]++;
            t = t >> 1;
        }
        // print(x), nline;
    }
    linebreak1;
    trav(v) print(x);
    linebreak1;
    int ans = 0;
    int j = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (v[i] % 3)
        {
            ans = ans + pow(2, j);
            j++;
        }
        else
            j++;
    }
    deb(ans);
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