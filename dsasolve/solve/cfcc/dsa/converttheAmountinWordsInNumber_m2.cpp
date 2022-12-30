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
vs ones = {"", "one-", "two-", "three-", "four-", "five-", "six-", "seven-", "eight-", "nine-", "ten-", "eleven-", "twelve-", "thirteen-", "fourteen-", "fifteen-", "sixteen-", "seventeen-", "eighteen-", "nineteen-"};
vs tens = {"", "", "twenty-", "thirty-", "forty-", "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"};

string numToWords(int num, string s)
{
    string ans;
    if (num > 19)
    {
        ans = ans + tens[num / 10] + ones[num % 10];
    }
    else
    {
        ans = ans + ones[num];
    }
    if (num)
        ans += s;
    return ans;
}
void solve()
{
    string A("1234");
    string B("one-thousand-two-hundred-thirty-four");

    string ans;
    int num = stoi(A);
    // ans += numToWords((num / int(10e7)), "crore-");
    ans += numToWords((num / 10000000), "crore-");
    // ans += numToWords((num / int(10e5)) % 100, "lakh-");
    ans += numToWords((num / 100000) % 100, "lakh-");
    // ans += numToWords((num / int(10e3)) % 100, "thousand-");
    ans += numToWords((num / 1000) % 100, "thousand-");
    ans += numToWords((num / 100) % 10, "hundred-");
    if (num > 100 and num % 100)
    {
        ans += "and-";
    }
    ans += numToWords((num % 100), "");
    if (ans == "")
    {
        ans = "zero";
    }
    ans.pop_back();
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