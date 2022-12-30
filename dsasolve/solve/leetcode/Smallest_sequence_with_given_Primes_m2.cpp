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

void solve(int A, int B, int C, int D, vi &store)
{
    int first = min(A, min(B, C));
    int count = 0;
    int t = 0;
    vb store2(100000, 0);

    for (int i = first; count < D; i++)
    {
        if (i % A == 0)
        {
            if ((i / A) == 1)
            {
                store[t] = i;
                store2[i] = true;
                t++;
                count++;
            }
            else
            {
                if (store2[i / A])
                {
                    store[t] = i;
                    store2[i] = true;

                    t++;
                    count++;
                }
            }
        }
        else if (i % B == 0)
        {
            if (i / B == 1)
            {
                store[t] = i;
                store2[i] = true;

                t++;
                count++;
            }
            else
            {
                if (store2[i / B])
                {
                    store[t] = i;
                    store2[i] = true;

                    t++;
                    count++;
                }
            }
        }
        else if (i % C == 0)
        {
            if (i / C == 1)
            {
                store[t] = i;
                store2[i] = true;
                t++;
                count++;
            }
            else
            {
                if (store2[i / C])
                {
                    store[t] = i;
                    store2[i] = true;

                    t++;
                    count++;
                }
            }
        }
    }
    linebreak;
    trav(store) print(x);
    linebreak;
}

void solvi()
{
    int A = 2, B = 3, C = 5, D = 5;
    vi store(D, -1);
    // solve(2, 3, 5, 8, store);
    // solve(2, 3, 5, 5, store);
    // solve(2, 5, 11, 3, store);
    // solve(3, 11, 7, 50, store);
    // solve(3, 7, 11, 50, store);
    solve(19, 31, 31, 9, store);
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solvi();
    }
    return 0;
}