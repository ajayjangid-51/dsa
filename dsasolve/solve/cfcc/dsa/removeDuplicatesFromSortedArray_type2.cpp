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
    // vi A = {1, 1, 1, 2, 2, 3};
    vi A = {1000, 1000, 1000, 1000, 1001, 1002, 1003, 1003, 1004, 1010};
    int j = 0;
    int cnt = 0;
    for (int i = 0; i < A.size();)
    {
        deb(i);
        print(j), nline;
        if (i == sz(A) - 1)
            A[j] = A[i], cnt += 1, i++;
        else if (A[i] == A[i + 1])
        {
            A[j++] = A[i];
            A[j++] = A[i];
            cnt += 2;
            int k = i + 2;
            deb(k);
            while (A[k] == A[i])
                k++;
            i = k;
        }
        else
        {
            A[j++] = A[i];
            cnt++;
            i++;
        }
        linebreak1;
    }
    debline(cnt);
    linebreak1;
    trav(A) print(x);
    linebreak1;
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