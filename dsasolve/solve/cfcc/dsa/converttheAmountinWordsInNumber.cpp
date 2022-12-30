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
    string A("1424234");
    string B("one-thousand-two-hundred-thirty-four");
    /*
      map<int, string> mp;
       mp[10] = "ten";
      mp[20] = "twenty";
      mp[30] = "thirty";
      mp[40] = "forty";
      mp[50] = "fifty";
      mp[60] = "sixty";
      mp[70] = "seventy";
      mp[1] = "one";
      mp[2] = "two";
      mp[3] = "three";
      mp[4] = "four";
      mp[5] = "five";
      mp[6] = "six";
      mp[7] = "seven";
      mp[8] = "eight";
      mp[9] = "nine";
      mp[100] = "hundred";
      mp[1000] = "thousand";
      mp[100000] = "lakh";
      mp[10000000] = "crore"; */

    int t = stoi(A);
    deb(t);
    vector<string> v1;
    int m = 1;
    while (t)
    {
        int lastdigit = t % 10;
        // lastdigit *= m;
        if (m != 10)
            v1.push_back(mp[lastdigit]);
        if (m != 1)
        {
            if (m == 10)
            {
                v1.push_back(mp[lastdigit * 10]);
                // v1.push_back(mp[lastdigit]);
            }
            else
            {

                v1.push_back(mp[m]);
            }
        }
        deb(lastdigit);
        t /= 10;
        m *= 10;
    }
    linebreak1;
    trav(v1) print(x);
    linebreak1;
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