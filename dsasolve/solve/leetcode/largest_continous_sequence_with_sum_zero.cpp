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
#define debline(x) cout << "๐Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "๐ข" << #x << " = " << x << "________________๐ข " << endl
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
    // vi A = {1, 2, -2, 4, -4};
    // vi A = {-19, 8, 2, -8, 19, 5, -2, -23};
    vi A = {0, -10, 20, 3, 23, 10, -20, 2, 19, -29, 0};
    int maxi = INT_MIN;
    int start = -1, end = -1;
    for (int i = 0; i < A.size(); i++)
    {
        int sum = A[i];
        if (sum == 0)
        {
            if (maxi < 1)
            {
                maxi = 1;
                start = i;
                end = i;
            }
        }
        for (int j = i + 1; j < A.size(); j++)
        {
            sum += A[j];

            if (sum == 0)
            {
                if (maxi < ((j - i) + 1))
                {
                    maxi = (j - i) + 1;
                    start = i;
                    end = j;
                }
            }
        }
    }
    debline(maxi);
    // debline()
    vi ans;
    deb(start);
    deb(end);
    for (int i = start; i <= end; i++)
    {
        ans.push_back(A[i]);
    }
    debline(ans.size());
    linebreak;
    /* *-------------------------------------------------------------------------------* */
    // implemenation-2 (mtlb method or approach is same but , implementation is little shorten and clear.).
    for (int i = 0; i < A.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < A.size(); j++)
        {
            sum += A[j];

            if (sum == 0)
            {
                if (maxi < ((j - i) + 1))
                {
                    maxi = (j - i) + 1;
                    start = i;
                    end = j;
                }
            }
        }
    }
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