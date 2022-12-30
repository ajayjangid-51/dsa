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

int solve()
{
    // string s1("1.21.3.8.77.1.5");
    string s1("1.13");
    vi v1, v2;
    // string s2("1.21.2.3.6");
    string s2("1.13.6");
    string s;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '.')
        {
            int x = stoi(s);
            s.clear();
            v1.push_back(x);
        }
        else
        {
            s.push_back(s1[i]);
        }
    }
    int x = stoi(s);
    v1.push_back(x);
    trav(v1) print(x);
    linebreak;
    s.clear();
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '.')
        {
            int x = stoi(s);
            s.clear();
            v2.push_back(x);
        }
        else
        {
            s.push_back(s2[i]);
        }
    }
    x = stoi(s);
    v2.push_back(x);
    trav(v2) print(x);
    linebreak;
    int mini = min(v1.size(), v2.size());
    for (int i = 0; i < mini; i++)
    {
        if (v1[i] > v2[i])
            return 1;
        else if (v1[i] < v2[i])
            return -1;
    }
    if (v1.size() > v2.size())
        return 1;
    else if (v1.size() < v2.size())
        return -1;

    return 0;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        int x = solve();
        debline(x);
    }
    return 0;
}