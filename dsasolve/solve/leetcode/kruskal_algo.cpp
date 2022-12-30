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
#define mp make_pair
#define vb vector<bool>
#define vi vector<int>
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
#define bstart(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define bend cout << "🛑_______________________________🛑" \
                  << "\n"                                      \
                     "\n"
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

vi link;
vi sizi;
int findi(int node)
{
    int p = node;
    while (p != link[p])
    {
        // deb(p);
        p = link[p];
    }
    return p;
}
bool same(int node1, int node2)
{
    return (findi(node1) == findi(node2));
}
void unite(int node1, int node2)
{
    int a = findi(node1);
    int b = findi(node2);
    if (sizi[a] < sizi[b])
        swap(a, b);
    sizi[a] += sizi[b];
    link[b] = a;
}
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[2] < v2[2];
}
int solve(int A, vector<vector<int>> &B)
{
    // link.assign(A+1,0);
    for (int i = 0; i <= A + 1; i++)
    {
        link.push_back(i);
        sizi.push_back(1);
    }
    // trav(link) print(x);
    // sizi.assign(A + 1, 1);

    sort(range(B), sortcol);
    // same(1 ,2);
    // cout << findi(1) << endl;

    int ans = 0;
    trav(B)
    {
        if (!same(x[0], x[1]))
        {

            unite(x[0], x[1]);
            ans += x[2];
        }
    }
    deb(ans);
    return ans;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi B = {
            // {1, 2, 1},
            // {2, 3, 4},
            // {1, 4, 3},
            // {4, 3, 2},
            // {1, 3, 10},
            //
            {1, 2, 10},
            {2, 3, 5},
            {1, 3, 9},

        };
        solve(3, B);
    }
    return 0;
}