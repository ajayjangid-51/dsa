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
//   int A = -2147483648, B = -1;
//     A = abs(A);
//     B = abs(B);
//     deb(A);
//     deb(B);
//     long long a = abs((long long)A);
//     long long b = abs((long long)B);
//     deb(a);
//     deb(b);
string solve()
{
    int a = -2147483648, b = -1;
    long long A = abs((long long)a);
    long long B = abs((long long)b);
    if (A == 0)
        return "0";
    // int sign = (A < 0) ^ (B < 0) ? -1 : 1;
    string sign = ((a >= 0 && b >= 0) || (a <= 0 && b <= 0)) ? "" : "-";

    string ans;
    // if (sign == -1)
    //     ans.push_back('-');

    ans += to_string(A / B);
    if (A % B == 0)
    {
        return sign + ans;
    }
    ans.push_back('.');
    int rem = A % B;
    bool flag = 0;
    map<int, int> mp;
    int index;
    while (rem > 0 and !flag)
    {
        if (mp.find(rem) != mp.end())
        {
            index = mp[rem];
            flag = 1;
            break;
        }
        else
        {
            mp[rem] = ans.size();
        }
        rem *= 10;
        int temp = rem / B;
        ans += to_string(temp);
        rem = rem % B;
    }
    if (flag)
    {
        ans += ")";
        ans.insert(index, "(");
    }

    return ans;
    // debline(ans);
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {

        string s = solve();
        debline(s);
    }
    return 0;
}
