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
void solve(int A, int B, int C, int D)
{

    vi store(D + 1, -1);
    // int i = 1, j = 1, k = 1;
    int i = 0, j = 0, k = 0;
    store[0] = 1;
    for (int m = 1; m <= D; m++)
    {

        // int a = A * i, b = B * j, c = C * k;
        int a = A * store[i], b = B * store[j], c = C * store[k];
        linebreak;
        print(a);
        print(b);
        print(c);
        nline;
        store[m] = min(a, min(b, c));
        deb(store[m]);
        linebreak;

        if (a <= b)
        {
            if (a == b)
            {
                deb(m);
                // m++;
                // store[m] = a;
                i++;
                j++;
                // i = min(A, min(B, C));
                // j = min(A, min(B, C));
            }
            if (a <= c)
            {
                if (a == c)
                {
                    i++;
                    k++;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                k++;
                // k = min(A, min(B, C));
            }
        }
        else
        {
            if (b <= c)
            {
                if (b == c)
                {
                    // m++;
                    // store[m] = b;
                    j++;
                    k++;
                    // i = min(A, min(B, C));
                    // k = min(A, min(B, C));
                }
                else
                {
                    j++;
                    // j = min(A, min(B, C));
                }
            }
            else
                k++;
            // k = min(A, min(B, C));
        }
    }
    trav(store) print(x);
    nline;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve(3, 11, 7, 50);
        // solve(2, 2, 2, 0);
        // solve(2, 5, 11, 3);
    }
    return 0;
}