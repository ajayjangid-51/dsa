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
    // vi A = {4, 3, 6, 7, 9, 9, 1, 7, 8};
    vi A = {8, 8};
    vi B = {9, 7, 2, 4, 4, 5, 8};

    int maxx = max(A.size(), B.size());
    deb(maxx);
    vi b(maxx, 0);
    if (A.size() == maxx)
    {
        print("😀");
        int i = maxx - B.size();
        deb(i);
        for (int j = 0; j < B.size(); j++)
        {
            b[i++] = B[j];
        }
    }
    else
    {
        print("👨‍🚒");
        int i = maxx - A.size();
        deb(i);
        for (int j = 0; j < A.size(); j++)
        {
            b[i++] = A[j];
        }
    }
    trav(A) print(x);
    nline;
    trav(b) print(x);
    nline;
    trav(B) print(x);
    nline;
    vi ans(maxx + 1);
    int c = 0;
    for (int i = maxx; i > 0; i--)
    {
        int sum = b[i - 1] + c;
        if (maxx == A.size())
        {
            sum += A[i - 1];
        }
        else
            sum += B[i - 1];
        if (sum > 9)
        {
            c = sum / 10;
            sum = sum % 10;
        }
        else
        {
            c = 0;
        }
        ans[i] = sum;
    }
    linebreak1;
    trav(ans) print(x);
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