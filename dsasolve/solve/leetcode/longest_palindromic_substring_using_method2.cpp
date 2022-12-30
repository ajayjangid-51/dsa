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

string longestPalindrome(string s)
{
    int maxi = 1;
    string ans;
    for (int i = 1; i < s.size() - 1; i++)
    {
        int i1 = i - 1, i2 = i + 1;
        int maxxi = 1;
        while (i1 >= 0 and i2 < s.size())
        {
            if (s[i1] == s[i2])
            {

                i1--;
                i2++;
                maxxi++;
            }
            else
                break;
        }
        if (maxi < maxxi)
        {
            int i3 = (i2 - i1) + 1;
            ans = s.substr(i1 + 1, i3 - 2);
            maxi = maxxi;
        }
    }
    // debline(maxi);
    int max2 = maxi;
    string s2 = ans;
    ans.clear();
    maxi = 1;
    for (int i = 1; i < s.size() - 1; i++)
    {
        int i1 = i - 1, i2 = i;

        int maxxi = 1;
        while (i1 >= 0 and i2 < s.size())
        {
            if (s[i1] == s[i2])
            {
                i1--;
                i2++;
                maxxi++;
            }
            else
                break;
        }
        if (maxi < maxxi)
        {
            int i3 = (i2 - i1) + 1;
            ans = s.substr(i1 + 1, i3 - 2);
            maxi = maxxi;
        }
    }
    int max3 = maxi;
    string s3 = ans;
    debline(max2);
    debline(max3);
    int maxxx = max(max2, max3);
    debline(maxxx);
    if (maxxx = 1)
    {
        ans = s[0];
        return ans;
    }
    else
    {
        if (maxxx == max2)
        {
            print("hi");
            return s2;
        }
        else
        {
            print("hi2");
            return s3;
        }
    }

    // debline(maxi);
    // debline(ans);
}
void solve()
{
    string s("babad");
    debline(longestPalindrome(s));
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