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
int mini(vector<string> arr)
{
    int minn = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int sz = arr[i].size();
        minn = min(minn, sz);
    }
    return minn;
}
void solve()
{
    // vs arr = {"geeksforgeeks", "geeks", "geer"};
    vs arr = {"apple", "xp", "api"};
    sort(range(arr));
    trav(arr) print(x);
    linebreak;
    string ans;
    int mini = 2;
    for (int i = 0; i < mini; i++)
    {
        char c = arr[0][i];
        deb(c);
        bool flag = 1;
        for (int j = 1; j < arr.size(); j++)
        {
            if (c != arr[j][i])
            {
                flag = 0;
                return;
            }
        }
        deb(flag);
        if (flag)
            ans.push_back(c);
    }
    deb(ans);

    debline(ans);
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
        // string ss = longestCommonPrefix();
        // debline(ss);
    }
    return 0;
}