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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
    string s("ADOBECODEBANC"), t("ABC");
    // string s("abc"), t("b");
    int cnt = 0;
    int i = 0, j = 0;
    map<char, int> m1, m2;
    trav(t)
    {
        m2[x]++;
    }
    string ans;
    trav(m2) print(x.first), print(x.second), nline;
    while (i < s.size())
    {
        print("hi"); // acquiring
        if (cnt < t.size())
        {
            m1[s[i]]++;
            if (m1[s[i]] <= m2[s[i]])
            {
                cnt++;
            }
            if (cnt != t.size())
                i++;
        }
        deb(j);
        deb(i);

        // releasing
        while (cnt == t.size())
        {

            // string ss = s.substr(j, (i - j) + 1);
            /*    string ss;
               for (int k = j; k <= i; k++)
               {
                   ss.push_back(s[k]);
               }

               deb(ss);
               if (ans.size() == 0 or ans.size() > ss.size())
               {

                   ans = ss;
                   debline(ans);
               } */
            m1[s[j]]--;
            // if (m1[s[j]] < 0)
            //     m1[s[j]] = 0;
            deb(s[j]);
            deb(m1[s[j]]);
            deb(m2[s[j]]);

            if (m1[s[j]] < m2[s[j]])
            {
                cnt--;
                i++;
                // break;
            }
            j++;
        }
    }
    deb(j);
    deb(i);
    string ss;
    for (int k = j - 1; k < i - 1; k++)
    {
        ss.push_back(s[k]);
    }

    debline(ss);
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