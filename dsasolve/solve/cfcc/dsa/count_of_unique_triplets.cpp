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
    vi v = {0, 1, 4, 6, 7, 10};
    int diff = 3;
    int sz = 0;
    vvi ans;
    for (int i = 0; i < v.size(); i++)
    {
        vi temp;
        temp.push_back(v[i]);
        int last = v[i];
        deb(v[i]);
        for (int j = i + 1; j < v.size(); j++)
        {
            print(v[j]);
            print("😀");
            if (v[j] - last == diff)
            {
                nline;
                print("👨‍🚒");
                nline;

                last = v[j];
                temp.push_back(v[j]);
            }
        }
        nline;
        trav(temp) print(x);
        linebreak1;
        if (temp.size() >= 3)
        {

            ans.push_back(temp);
        }
    }
    linebreak1;
    deb(ans.size());
    trav(ans)
    {
        trav2(x) print(y);
        nline;
    }
    linebreak1;
}
void solve2()
{
    vi nums = {0, 1, 4, 6, 7, 10};
    int diff = 3;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int last = nums[i];
        int cnt = 1;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] - nums[i] == diff)
            {
                print(nums[i]);
                print(nums[j]);
                nline;
                last = nums[j];
                cnt++;
            }
        }
        deb(cnt);
        if (cnt >= 3)
            ans++;
    }
    deb(ans);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve2();
    }
    return 0;
}