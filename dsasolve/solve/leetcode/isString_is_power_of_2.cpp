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
    // string s("86513256");
    // string s("4096");
    string s("248");
    string ans;
    int j = 0;
    while (1 and *s.rbegin() != '1')
    {
        if (j > 1000)
        {
            break;
        }
        j++;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            debline(s);
            deb(i);
            deb(s[i]);
            if (s[i] == '1' or s[i] == '3' or s[i] == '5' or s[i] == '7' or s[i] == '9')
            {
                if (*s.rbegin() == '1')
                {
                    debline("😺😺😺😺");
                }
                debline("-1");
                return;
            }
            else
            {
                if (i != 0)
                {
                    char c = s[i - 1];
                    if (c == '1' or c == '3' or c == '5' or c == '7' or c == '9')
                    {
                        // c--;
                        deb(c);
                        s[i - 1]--;
                        deb(s[i - 1]);
                        int t = 10 + (s[i] - '0');
                        deb(t);
                        ans.push_back((t / 2) + '0');
                    }
                    else
                    {
                        int t = s[i] - '0';
                        debline(t);
                        ans.push_back((t / 2) + '0');
                    }
                }
                else
                {
                    int t = s[i] - '0';
                    ans.push_back((t / 2) + '0');
                }
            }

            linebreak;
        }
        reverse(range(ans));
        debline(ans);
        s = ans;
        ans.clear();
        print("😀");
        linebreak;
    }
    int k = 0;
    debline(s);
    while (s[k] == '0')
    {
        k++;
    }
    s = s.substr(k, s.size());
    if (s.size() == 1)
        print("🙇‍♂️");
    else
        print("lose");
    debline(s);
    print("⭐⭐");

    debline(j);
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