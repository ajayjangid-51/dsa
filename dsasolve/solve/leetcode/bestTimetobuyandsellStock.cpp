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
    // vi A = {3, 2, 6, 5, 0, 3};
    // vi A = {2, 4, 1};
    // vi A = {11, 7, 11, 17, 12, 12, 16, 10, 11};
    vi A = {4, 13, 12, 19, 3, 11, 8, 20, 4, 4, 5, 12};
    // int B = 2;
    int B = 6;
    vector<pii> store(A.size(), {0, 0});
    int maxx = INT_MIN;
    for (int i = 0; i < store.size() - 1; i++)
    {
        int maxi = INT_MIN;
        int day = -1;
        for (int j = i + 1; j < store.size(); j++)
        {
            if (maxi < A[j] - A[i])
            {
                maxi = A[j] - A[i];
                day = j;
            }
        }
        store[i] = {day, maxi};
        maxx = max(maxx, maxi);
    }
    deb(maxx);
    for (int z = 0; z < B - 1; z++)
    {
        // store[i]
        for (int i = 0; i < A.size() - 1; i++)
        {
            deb(i);
            debpair(store[i]);
            pii p = store[i];

            int maxi = INT_MIN;
            int day = -1;
            for (int j = p.first + 1; j < A.size() - 1; j++)
            {
                print("🤜");
                deb(j);
                debpair(store[j]);
                if (maxi < store[j].second)
                {
                    maxi = store[j].second;
                    day = store[j].first;
                }
            }
            print("🔥");
            deb(maxi);
            // print()
            if (day != -1)
            {
                store[i].first = day;
                store[i].second = store[i].second + maxi;
                print("🕵️‍♀️🕵️‍♀️🕵️‍♀️🕵️‍♀️🕵️‍♀️🕵️‍♀️");
                debline(store[i].first);
                debline(store[i].second);
                maxx = max(maxx, store[i].second);
            }
            linebreak;
        }
    }
    debline(maxx);
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