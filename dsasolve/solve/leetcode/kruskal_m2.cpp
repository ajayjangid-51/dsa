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

class kruskal
{
    // considering 1-node-index.
    vi link, size;
    vector<vector<int>> edgelist;

public:
    kruskal(int n, vector<vector<int>> edgelist)
    {
        for (int i = 0; i <= n + 1; i++)
        {
            link.push_back(i);
            size.push_back(1);
        }
        this->edgelist = edgelist;
        sort(edgelist.begin(), edgelist.end(), sortcol);
    }
    bool sortcol(const vector<int> &v1, const vector<int> &v2)
    {
        return v1[2] < v2[2];
    }
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
        if (size[a] < size[b])
            swap(a, b);
        size[a] += size[b];
        link[b] = a;
    }
};

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
    }
    return 0;
}