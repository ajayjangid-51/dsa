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
    /*
    vi A = {1, 0};
    int B = 1;
     int ans = INT_MIN;
     for (int i = 0; i < A.size(); i++)
     {
         if (A[i] == 1)
         {
             int z = 0;

             for (int j = i + 1; j < A.size(); j++)
             {
                 if (A[j] == 0)
                     z++;
                 // else
                 // {
                 if (z <= B)
                 {
                     int sz = (j - i) + 1;

                     ans = max(ans, sz);
                 }
                 // }
             }
         }
     }

     deb(ans); */

    /* *-------------------------------------------------------------------------------* */
    // vi A = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1};
    vi A = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int B = 2;
    vi s;
    if (A[0] == 0)
        s.push_back(1);
    else
        s.push_back(0);
    for (int i = 1; i < sz(A); i++)
    {

        if (A[i] == 0)
        {
            s.push_back(1 + s[i - 1]);
        }
        else
            s.push_back(s[i - 1]);
    }
    linebreak1;
    trav(s) print(x);
    linebreak1;
    int i = 0, j = i + 1;
    int ans = INT_MIN;
    while (i < sz(A) and j < sz(A))
    {
        int t = s[j] - s[i];
        if (A[i] == 0)
        {
            t += 1;
        }
        if (t <= B)
        {
            ans = max(ans, (j - i) + 1);
            j++;
        }
        else
            i++;
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
        solve();
    }
    return 0;
}