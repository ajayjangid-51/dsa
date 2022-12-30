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
    // string s1("111"), s2("101");
    // string s1("00001"), s2("111110");
    string s1("01001001"), s2("0110101");
    // string s1("10"), s2("1000000");
    int i = s1.size() - 1, j = s2.size() - 1;
    int carry = 0;
    string ans;
    while (i >= 0 and j >= 0)
    {
        int n1 = s1[i] - '0';
        int n2 = s2[j] - '0';
        print(n1);
        print(n2);
        linebreak;
        int n3 = n1 + n2 + carry;
        char c;
        if (n3 > 1)
        {
            carry = 1;
            c = (n3 % 2) + '0';
        }
        else
        {
            carry = 0;
            c = n3 + '0';
        }
        debline(c);
        ans.push_back(c);
        i--;
        j--;
    }
    deb(i);
    deb(j);
    while (i >= 0)
    {
        int n1 = s1[i] - '0';
        int n3 = n1 + carry;
        // if (n3 == 0)
        //     break;
        char c;
        if (n3 > 1)
        {
            carry = 1;
            c = (n3 % 2) + '0';
        }
        else
        {
            carry = 0;
            c = n3 + '0';
        }
        deb(c);
        ans.push_back(c);

        i--;
    }
    while (j >= 0)
    {
        int n1 = s2[j] - '0';
        int n3 = n1 + carry;
        // if (n3 == 0)
        //     break;
        char c;
        if (n3 > 1)
        {
            carry = 1;
            c = (n3 % 2) + '0';
        }
        else
        {
            carry = 0;
            c = n3 + '0';
        }
        deb(c);

        ans.push_back(c);
        j--;
    }
    if (carry == 1)
    {
        ans.push_back('1');
    }
    debline(ans);
    int k = ans.size() - 1;
    while (ans[k] == '0')
    {
        ans.pop_back();
        k--;
    }
    reverse(range(ans));
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
    }
    return 0;
}