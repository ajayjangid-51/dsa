#include <bits/stdc++.h>
using namespace std;

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

    vi v = {1, 2, 3, 2};
    auto adrs = v.begin();
    deb(*adrs);
    // adrs++;
    adrs += 3;
    // for (vector<int>::iterator i = v.begin(); i < v.end(); i++)
    // for (int i = v.begin(); i < v.end(); i++)
    for (auto i = v.begin(); i < v.end(); i++)
    {
        print("😀");
        deb(*i);
    }
    auto scnd = v.rbegin();
    deb(*prev(scnd));
    deb(*next(scnd));

    deb(*adrs);

    /*   sort(range(v));
      int sum = 0;
      trav(v) print(x);
      nline;

      for (int i = 0; i < v.size(); i++)
      {
          if (i == 0)
          {
              if (v[i] == v[i + 1])
                  continue;
              else
                  sum += v[0];
          }
          else if (i == v.size() - 1)
          {
              if (v[i] == v[i - 1])
                  continue;
              else
                  sum += v[i];
          }
          else
          {

              if (v[i] == v[i - 1] or v[i] == v[i + 1])
                  continue;
              else
                  sum += v[i];
          }
      } */
    // if (v.back() == *next(v.rbegin()))
    //     sum += v.back();
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