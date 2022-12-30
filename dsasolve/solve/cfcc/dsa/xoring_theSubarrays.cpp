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
/* void solve()
{
    vi A = {3, 4, 5};
    // vector<int> v;
    int prev = 0;
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        // v.push_back(A[i]);
        prev = A[i];
        ans = ans ^ A[i];
        for (int j = i + 1; j < A.size(); j++)
        {
            // deb(v[j - 1]);
            // deb(A[j]);
            // print("---------"), nline;

            // v.push_back(v.back() ^ A[j]);
            int curr = prev ^ A[j];
            ans = ans ^ curr;
        }
    }
    linebreak1;
    trav(v) print(x);
    linebreak1;
    int ans = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }
    deb(ans);
} */

/* *-------------------------------------------------------------------------------* */
// method2:-
void solve()
{
    vi A = {3, 4, 5};
    int ans = 0;
    for (int i = 0; i < A.size(); i++)
    {
        int t = (i + 1) * (A.size() - i);

        if (t == 1)
        {
            deb(A[i]);
            ans = ans ^ A[i];
        }
    }
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

/* int Solution::solve(vector<int> &A) {

    int prev = 0;
    int ans = 0;
    for(int i= 0;i<A.size();i++){
        prev = A[i];
        ans = ans^A[i];
        for(int j= i+1;j<A.size();j++){
            // v.push_back(v.back()^A[j]);
           int  curr = prev^A[j];
            ans = ans^curr;
            prev = curr;
        }
    }

    return ans;
}
 */