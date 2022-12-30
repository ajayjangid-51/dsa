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
int fn(vi &A, int B)
{
    int n = sz(A);
    int i = 0, j = i + 1;
    map<int, int> mp;
    int cnt1 = 0;
    mp[A[0]]++;
    while (i < n)
    {
        // mp[A[i]]++;
        while (j < n)
        {
            if (mp.size() > B)
            {
                // cnt1 += (j - i);
                break;
            }
            mp[A[j]]++;
            j++;
        }
        // if (mp.size() <= B)
        if (mp.size() > B)
        {
            cnt1 += (j - i) - 1;
        }
        else
            cnt1 += (j - i);
        if (mp[A[i]] > 1)
            mp[A[i]]--;
        else
            mp.erase(A[i]);
        i++;
    }
    return cnt1;
}
// this is correct-method than previous, (actually previous was wrong and we coded again from scratch and it all works mast)
void solve()
{
    // vi A = {5, 3, 5, 1, 3};
    vi A = {1, 2, 1, 3, 4};
    // vi A = {1, 2, 1, 2, 3};
    int B = 3;
    int cnt1 = fn(A, B);
    int cnt2 = fn(A, B - 1);
    deb(cnt1), deb(cnt2);
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