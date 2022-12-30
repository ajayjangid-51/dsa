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
void solve()
{
    // vi v = {1, 2, 3, 0, 3};
    // vi v = {0, 1, -1, 0};
    vi v = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vi pfixsum(v.size()), sfixsum(v.size());
    int t1 = 0, t2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        pfixsum[i] = t1 + v[i];
        t1 = pfixsum[i];
        int j = (v.size() - 1) - i;
        sfixsum[j] = t2 + v[j];
        t2 = sfixsum[j];
    }
    trav(pfixsum) print(x);
    nline;
    trav(sfixsum) print(x);
    nline;
    int i = 0, j = v.size() - 1;
    int cnt = 0;
    int sum = sfixsum[0];
    while (i < j - 1)
    {
        if ((pfixsum[i] == sum / 3) and (sfixsum[j] == sum / 3) and ((sfixsum[i + 1] - sfixsum[j]) == sum / 3))
        {

            cnt++;
            print(i);
            print(j);
            nline;
        }
        if (pfixsum[i] < sfixsum[j])
        {
            i++;
        }
        else
            j--;
    }
    i = 0, j = v.size() - 1;
    int cnt2 = 0;
    while (i < j - 1)
    {
        if ((pfixsum[i] == sum / 3) and (sfixsum[j] == sum / 3) and ((sfixsum[i + 1] - sfixsum[j]) == sum / 3))
            cnt2++;
        if (pfixsum[i] > sfixsum[j])
        {
            j--;
        }
        else
            i++;
    }

    debline(cnt);
    debline(cnt2);
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