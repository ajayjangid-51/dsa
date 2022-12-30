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
string increaseMid(string s, bool even)
{
    int n = s.size();
    int i, j;
    if (n % 2)
    {
        i = n / 2;
        j = i + 1;
        i--;
    }
    else
    {

        i = (n / 2) - 1;
        j = i + 1;
    }
    deb(i);
    deb(j);
    deb(s);
    string s1(s);
    bool carry = 0;
    for (int k = i; k >= 0; k--)
    {

        if (s1[k] == '9')
        {
            carry = 1;
            s1[k] = '0';
        }
        else
        {

            s1[k]++;
            if (!carry)
                break;
        }
    }
    deb(s1);
    // s1 = s1.substr(0, 2);
    string ss = s1.substr(0, i + 1);
    deb(ss);
    deb(s1);
    string rev(ss);
    reverse(range(rev));
    s1.replace(j, s.size(), rev);
    deb(s1);
    return s;
}
void solve()
{
    string s("1221");
    // string s("713322");
    int n = s.size();
    deb(n);
    int i, j;
    if (n % 2)
    {
        i = n / 2;
        j = i + 1;
        i--;
    }
    else
    {

        i = (n / 2) - 1;
        j = i + 1;
    }
    deb(i);
    deb(j);
    while (s[i] == s[j] and (i >= 0 and j <= (n - 1)))
    {
        i--;
        j++;
    }
    deb(i);
    deb(j);
    if (i != -1)
    {
        string sl = s.substr(0, i + 1);
        string sr = s.substr(j);
        reverse(range(sl));
        string slrev = sl;
        reverse(range(sl));

        if (slrev < sr)
        {
            print("hi");
            // int mid =
        }
        else
        {
            s.replace(j, s.size() - 1, slrev);
            deb(s);
        }
        deb(sl);
        deb(sr);
    }
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        string s("12521");
        // increaseMid("189991", 1);
        increaseMid(s, 1);
    }
    return 0;
}