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
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define print(x) cout << x << " "
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
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
bool isinanyCircle(int x1, int y1, int &radius, vector<pii> &circlecenters)
{
    trav(circlecenters)
    {
        int xx = (x1 - x.first), yy = (y1 - x.second);
        int sumi = (xx * xx) + (yy * yy);
        if (sumi <= (radius * radius))
        {
            return 1;
        }
    }
    return 0;
}
void bfs(pii node, int &radius, vector<pii> &points, vb xvisited, vb yvisited, vector<pii> &circlecenters)
{
    for (int i = 0; i <= A; i++)
    {
        if (isinanyCircle(x.first, x.second, radius, circlecenters) and (!xvisited[x.first] and !yvisited[x.second]))
        {
        }
    }
}
string solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F)
{
    string ans;
    vector<pii> circlecenters;
    for (int i = 0; i < E.size(); i++)
    {
        circlecenters.push_back({E[i], F[i]});
    }
    trav(circlecenters)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    nline;
    nline;
    vector<pii> points;
    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            points.push_back({i, j});
        }
    }
    trav(points)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    vb xvisited(points.size(), 0);
    vb yvisited(points.size(), 0);
    bfs({0, 0}, D, points, xvisited, yvisited, circlecenters);
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
        int x = 2, y = 3, N = 1, R = 1;
        vi xcordinates = {2}, ycordinates = {3};
        solve(x, y, N, R, xcordinates, ycordinates);
    }
    return 0;
}