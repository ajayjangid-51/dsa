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
string multiple(int A)
{
    queue<pair<string, int>> que;
    que.push({"1", 1});
    // set<int> rems;
    vector<int> rems(A, 0);
    // rems.insert(1);

    while (!que.empty())
    {
        pair<string, int> s = que.front();
        que.pop();
        if (s.second == 0)
        {
            deb(s.first);
            return s.first;
        }
        int rem1 = (s.second * 10 + 0) % A, rem2 = (s.second * 10 + 1) % A;
        // if (rems.find(rem1) == rems.end())
        if (rems[rem1] != -1)
        {
            que.push({s.first + '0', rem1});
            // rems.insert(rem1);
            rems[rem1] = rem1;
        }
        // if (rems.find(rem2) == rems.end())
        if (rems[rem2] != -1)
        {
            que.push({s.first + '1', rem2});
            // rems.insert(rem2);
            rems[rem2] = rem2;
        }
    }
    return "222";
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