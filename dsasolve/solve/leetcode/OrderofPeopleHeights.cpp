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
#define linebreak cout << "______________________________" \
                       << "\n"                             \
                          "\n"
// #define deblinebreak cout << "👉Line-" << __LINE__ << ": " \
//                           << "__________________________" \
//                           << "\n"                         \
//                              "\n"
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
int getindex(pii p, vi &ans)
{

    return 1;
}

vector<int> order(vector<int> &A, vector<int> &B)
{
    vector<pair<int, int>> v;
    forn(i, 0, A.size())
    {
        v.push_back({A[i], B[i]});
    }
    trav(v)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    linebreak;
    // deblinebreak;
    sort(range(v));
    trav(v)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    vi ans(A.size(), -1);
    ans[v[0].second] = v[0].first;

    for (int i = 1; i < v.size(); i++)
    {
        // ans[getindex(v[i], ans)] = v[i].first;
        int m = (v[i].second) + 1;
        int cnt = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if (ans[j] == -1)
            {
                cnt++;
                if (cnt == m)
                {
                    // index = j;
                    ans[j] = v[i].first;
                    break;
                }
            }
            // else
            // {
            //     cnt = 0;
            // }
        }
    }
    linebreak;
    trav(ans)
    {
        print(x);
    }
    linebreak;
    return {};
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        vi A = {5, 3, 2, 6, 1, 4};
        vi B = {0, 1, 2, 0, 3, 2};
        order(A, B);
    }
    return 0;
}