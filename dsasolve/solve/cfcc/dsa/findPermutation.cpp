#include <bits/stdc++.h>
using namespace std;

#define f first
// #define s second
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
void dfs(int i, string &s, vi &ans, vb &visited, int k, int n, vi &anss)
{
    // print("😀");
    // deb(i);
    // deb(k);

    // deb(k);

    visited[i] = 1;
    ans.push_back(i);
    // print("👉");
    // trav(ans) print(x);
    // print("👈");
    // nline;
    if (k >= s.size())
    {
        anss = ans;
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (j != i)
        {
            if (s[k] == 'D')
            {
                if (j < i and !visited[j])
                {
                    k++;
                    dfs(j, s, ans, visited, k, n, anss);
                    k--;
                }
            }
            else
            {
                if (j > i and !visited[j])
                {
                    k++;
                    dfs(j, s, ans, visited, k, n, anss);
                    k--;
                }
            }
        }
        // linebreak1;
    }
    visited[i] = 0;
    ans.pop_back();
}
void solve()
{
    string s("DDDDDDDDDDDDDDDDDDDDDDDDDDDDD");
    int n = s.size() + 1;
    deb(n);
    for (int i = 1; i <= n; i++)
    {
        int k = 0;
        vi ans;
        vb visited(n, 0);
        vi anss;
        dfs(i, s, ans, visited, k, n, anss);

        if (anss.size() == n)
        {
            trav(anss) print(x);
            nline;
            break;
        }
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
        solve();
    }
    return 0;
}