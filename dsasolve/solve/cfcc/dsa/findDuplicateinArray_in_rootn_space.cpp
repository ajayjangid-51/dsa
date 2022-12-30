#include <bits/stdc++.h>
using namespace std;

#define f first
// #define s second
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
int solve()
{
    vi A = {3, 4, 1, 4, 1};
    int n = sz(A);
    int bucketSize = sqrt(4); // bcoz elements are from 1 to 4 only.
    int noofbuckets = ceil((float)n / sqrt(n));
    deb(bucketSize);
    deb(noofbuckets);
    vi f(noofbuckets, 0);
    linebreak1;
    trav(A)
    {
        deb(x);
        // int inx = (x / bucketSize) + (x % bucketSize == 0 ? 1 : 0);
        int inx = (x / bucketSize);
        deb(inx);
        // f[min(inx, bucketSize)]++;
        f[inx]++;
        // f[inx]++;
    }
    linebreak1;
    trav(f)
    {
        print(x);
        nline;
    }
    set<int> s;
    int firstBuckekiSize = bucketSize - 1;
    int lastbucketkiSize = 4 - ((noofbuckets - 1) * bucketSize) + 1;
    if (f[0] > firstBuckekiSize)
    {
        print("😂");
        trav(A)
        {
            if (x >= 1 and x <= firstBuckekiSize)
            {
                if (s.find(x) != s.end())
                    return x;
                s.insert(x);
            }
        }
    }
    else if (f[noofbuckets - 1] > lastbucketkiSize)
    {
        print("😂😂");
        trav(A)
        {
            if (x >= ((f.size() - 1) * bucketSize) and x <= (((f.size() - 1) * bucketSize) + lastbucketkiSize - 1))
            {
                if (s.find(x) != s.end())
                    return x;
                s.insert(x);
            }
        }

        // for (int i = ((f.size() - 1) * bucketSize); i < lastbucketkiSize; i++)
        // {
        //     if (s.find(A[i]) != s.end())
        //         return A[i];
        //     s.insert(A[i]);
        // }
    }
    else
    {
        print("😂😂😂");

        for (int i = 1; i < f.size() - 1; i++)
        {

            if (f[i] > bucketSize)
            {
                trav(A)
                {
                    if (x >= (i * bucketSize) and x <= (i + 1 * bucketSize) - 1)
                    {

                        if (s.find(x) != s.end())
                            return x;
                        s.insert(x);
                    }

                    // for (int j = (i * bucketSize); j < (bucketSize + i); j++)
                    // {
                    // }
                }
            }
        }
    }

    deb(lastbucketkiSize);
    int i = 1;
    return -1;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        int ans = solve();
        debline(ans);
    }
    return 0;
}