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
#define mp make_pair
#define vb vector<bool>
#define vi vector<int>
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
#define bstart(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define bend cout << "🛑_______________________________🛑" \
                  << "\n"                                      \
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
int res = 1;
void getMod(string str, int n, int &k)
{
    debline(str);
    // if (str == "1")
    //     return;
    if (str[n - 1] == '0')
    {
        debline(res);
        res = ((res * 10) + 0) % k;
        debline(res);
    }
    else
    {
        res = ((res * 10) + 1) % k;
        debline(res);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     // deb(res);

    //     res = ((res * 10) + (int(str[i]) - '0')) % k;
    // }
    // deb(res);

    // if (res == 0)
    //     return 1;
    // return 0;
}
void fn(string s, string &ans, int &A)
{
    // deb(s);

    queue<string> que;
    que.push(s);
    while (!que.empty())
    {
        string ss = que.front();
        que.pop();
        // deb(ss);
        deb(ss);
        if (ss.length() != 1)
        {

            getMod(ss, ss.length(), A);
            if (res == 0)
            {
                ans = ss;
                return;
            }
        }
        que.push(ss + "0");
        que.push(ss + "1");
    }
}
string multiple(int A)
{
    res = 1;
    string ans;
    fn("1", ans, A);
    deb(ans);
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        multiple(55);
    }
    return 0;
}