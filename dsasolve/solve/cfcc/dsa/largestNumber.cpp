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
#define all(x) x.begin() x.end()
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
bool fn(const int &a, const int &b)
{
    print("😀");
    print(a);
    print(b);

    print("😀");
    nline;
    string s1 = to_string(a), s2 = to_string(b);
    int i = 0, j = 0;
    while (s1[i] == s2[j])
    {
        i++;
        j++;
    }
    deb(i);
    deb(j);
    int t1, t2;
    if (i == s1.size() - 1)
        t1 = -1;
    else
        t1 = s1[i];
    if (j == s2.size() - 1)
        t2 = -1;
    else
        t2 = s2[j];
    deb(t1);
    deb(t2);
    deb("hi");

    if (t1 > t2)
        return 1;
    return 0;
}
void solve()
{
    // vi v = {3, 30, 34, 5, 9};/
    // vi v = {3, 5, 30, 9, 34};
    // vi v = {472, 663, 964, 722, 485, 852, 635, 4, 368, 676, 319, 412};
    vi v = {3, 30};
    // vi v = {319, 368, 4, 412, 472, 485, 635, 663, 676, 722, 852, 964};
    // vi v = {368, 319, 485, 472, 412, 4, 676, 663, 635, 722, 852, 964};
    sort(v.begin(), v.end(), fn);
    trav(v) print(x);
    linebreak;
    linebreak;
    // vi v = {8, 89};
    string ans = to_string(v[0]);
    deb(ans);
    for (int i = 1; i < v.size(); i++)
    {
        string tmp = to_string({v[i]});
        int j = 0, k = 0;
        bool flag = 0;
        while (ans[j] == tmp[k])
        {
            if (j != ans.size() - 1)
                j++;
            if (k != tmp.size() - 1)
                k++;
            if (j == ans.size() - 1 and k == tmp.size() - 1)
            {
                flag = 1;
                break;
            }
        }
        deb(flag);
        if (flag)
        {
            if (ans[j] == tmp[k])
                ans += tmp;
            else
            {
                if (ans[j] > tmp[k])
                    ans = ans + tmp;
                else
                    ans = tmp + ans;
            }
        }
        else
        {
            if (ans[j] > tmp[k])
            {
                ans = ans + tmp;
            }
            else
            {
                ans = tmp + ans;
            }
        }
        deb(ans);
    }
    linebreak;
    debline(ans);
    int k = 0;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        deb(ans[i]);
        deb(i);
        if (ans[i] == '0')
        {
            deb(ans[i]);
            k++;
        }
        else
            break;
        linebreak;
    }
    deb(k);
    ans = ans.substr(k);
    debline(ans);
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