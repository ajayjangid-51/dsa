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
    // vi A = {4, 3, 2, 3, 4};
    // int B = 2;
    vi A = {5, 6, 7, 8, 9};
    int B = 3;
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        int e = 0, o = 0;

        for (int j = i; j < A.size(); j++)
        {
            if (A[j] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
            if (o == B)
            {

                cnt++;
            }
        }
    }
    debline(cnt);
}
/* *-------------------------------------------------------------------------------* */
// implementation2:-
void solve2()
{
    // vi A = {4, 3, 2, 3, 4};
    // int B = 2;
    vi A = {5, 6, 7, 8, 9};
    int B = 3;
    int cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
        int e = 0, o = 0;

        for (int j = i; j < A.size(); j++)
        {
            if (A[j] % 2 == 1)
            {
                o++;
            }
            if (o == B)
            {

                cnt++;
            }
            // note - point : yaha cout of even toh apne koi kaam aa hi nhi raha, so toh mtlb implementation meh apnko koi bhi na - kaam - meh - aani wali cheez bilkul bhi nhi rkhni hai, q ki implementation ki main baateh yehi hai ki implementation choti(short), spastt(ekdam clear and satik and again mtlb short) and understable(mtlb variable k names and algorithm ko sahi order meh likha step-by-step(mtlb bottom-up manner meh likha)) hona chahiyehh..
            // and physical-algorithm ki key yeh hai ki algorithm time-efficient hona chahiyehh.
        }
    }
    debline(cnt);
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