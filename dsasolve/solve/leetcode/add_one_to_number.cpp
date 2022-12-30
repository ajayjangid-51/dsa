/* #include <bits/stdc++.h>
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
    // vi v = {9, 9, 9};
    // vi v = {0, 0, 0, 1, 2, 3};
    vi v = {1, 1, 1, 3, 2, 1, 1, 2, 5, 9, 6, 5};
    vi ans;
    int carry = 1;
    for (int i = v.size() - 1; i >= 1; i--)
    {
        int t = v[i] + carry;
        if (t > 9)
        {
            v[i] = 0;
            carry = 1;
        }
        else
        {
            v[i] = t;
            carry = 0;
        }
    }
    int t = v[0] + carry;
    deb(t);
    if (t == 10)
    {
        ans.push_back(1);
        ans.push_back(0);
    }
    else
        ans.push_back(t);
    for (int i = 1; i < v.size(); i++)
    {
        ans.push_back(v[i]);
    }
    deb(ans.front());
    vi ans2;
    int i = 0;
    for (; i < ans.size(); i++)
    {
        if (ans[i] != 0)
            break;
    }
    for (; i < ans.size(); i++)
    {
        ans2.push_back(ans[i]);
    }

    linebreak;
    trav(ans2) print(x);
    linebreak;
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
} */

// method2:-

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
    vi v = {0, 0, 9, 9, 2, 9};
    reverse(range(v));
    int carry = 1;
    for (int i = 0; i < v.size(); i++)
    {
        int t = v[i] + carry;
        if (t > 9)
        {
            v[i] = 0;
            carry = 1;
        }
        else
        {
            v[i] = t;
            carry = 0;
        }
    }
    if (carry != 0)
    {
        v.push_back(1);
    }
    reverse(range(v));
    linebreak;
    trav(v) print(x);
    linebreak;
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
