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

string perm, ans;
vector<bool> choosen(10, 0);
int k = 0;
int b = 73;
void fn()
{
    if (perm.size() == 9)
    {
        k++;
        if (k == b)
        {
            ans = perm;
            debline(ans);
            return;
        }
        deb(perm);
    }
    else
    {
        for (int i = 1; i <= 9; i++)
        {
            if (choosen[i])
                continue;
            choosen[i] = 1;
            // deb(char(i + '0'));
            perm.push_back(char(i + '0'));
            fn();
            choosen[i] = 0;
            perm.pop_back();
        }
    }
}
void solve()
{
    /* *-------------------------------------------------------------------------------* */
    // method1:- (recursive-search):-
    // n = 3;
    // k = 4;
    fn();
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