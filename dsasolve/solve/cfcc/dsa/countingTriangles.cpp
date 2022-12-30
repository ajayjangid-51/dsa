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
    // vi A = {1, 1, 1, 2, 2};
    vi A = {4, 6, 13, 16, 20, 3, 1, 12};
    sort(range(A));
    linebreak1;
    trav(A) print(x);
    linebreak1;
    int cnt = 0;
    set<tuple<int, int, int>> st;
    for (int i = 0; i < sz(A) - 2; i++)
    {
        for (int j = i + 1; j < sz(A) - 1; j++)
        {
            /* for (int k = j + 1; k < sz(A); k++)
            {
                // if (A[k] > A[j] - A[i])
                if (A[k] < (A[j] + A[i]))
                {

                    cnt++;
                    st.insert({A[i], A[j], A[k]});
                    print(A[i]), print(A[j]), print(A[k]);
                    nline;
                    // deb(k);
                }
            } */
            print(A[i]), print(A[j]), nline;
            deb(A[i] + A[j]);
            auto k = lower_bound((A.begin() + (j)), A.end(), (A[j] + A[i]));

            int indx = k - A.begin() - 1;
            deb(A[indx]);
            // if (A[indx] != (A[j] + A[i]))
            //     indx = k - A.begin() - 1;
            // deb(indx);
            // deb(A[indx]);
            if (indx >= 0 and indx > j and indx < A.size())
            {
                print("✅");
                cnt += (indx - j);
            }
            linebreak1;
            // if (k-A.begin())
            // cnt++;
        }
    }
    deb(cnt);
    debline(st.size());
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