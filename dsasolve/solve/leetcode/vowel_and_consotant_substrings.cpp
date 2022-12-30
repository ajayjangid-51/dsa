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
bool isvowel(char c)
{
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
        return 1;
    else
        return 0;
}
void solve()
{
    // string s("aba");
    string s("inttnikjmjbemrberk");
    deb(s);
    linebreak;

    /* *-------------------------------------------------------------------------------* */
    // method1:-
    // int cnt = 0;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     char c = s[i];
    //     bool tmp = isvowel(c);
    //     for (int j = i + 1; j < s.size(); j++)
    //     {
    //         if (tmp != isvowel(s[j]))
    //             cnt++;
    //     }
    // }
    // deb(cnt);

    /* *-------------------------------------------------------------------------------* */
    // method2:-
    vector<pii> v(s.size() + 1); // v[2] mtlb coutn of conso and vowel of the suffix-string of size 2 from backside.
                                 // pii pair<vowel, consonent>
    if (isvowel(*s.rbegin()))
    {
        deb(*s.rbegin());
        v[1] = {1, 0};
    }
    else
    {
        debline(*s.rbegin());

        v[1] = {0, 1};
    }
    int j = 2;
    for (int i = s.size() - 2; i >= 0; i--)
    {
        if (isvowel(s[i]))
        {
            v[j] = {v[j - 1].first + 1, v[j].second};
        }
        else
            v[j] = {v[j - 1].first, v[j].second + 1};
        j++;
    }

    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (isvowel(s[i]))
            cnt += v[s.size() - (i + 1)].second;
        else
            cnt += v[s.size() - (i + 1)].first;
    }
    debline(cnt);
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