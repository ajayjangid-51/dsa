// our raw-algorithm is this:- (seepic-validpath_m2_pic):-
// now implementing this algorithm...

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
bool isinanyCircle(pii point, int &radius, vector<pii> &circlecenters)
{
    cout << "🤸🤸🤸🤸" << endl;
    deb(point.first);
    deb(point.second);
    trav(circlecenters)
    {

        deb(x.first);
        deb(x.second);
        if (radius == 0)
        {
            if ((x.first == point.first) and (x.second == point.second))
            {
                cout << "😀 yes point is equal to circle center" << endl;
                return 1;
            }
        }
        else
        {
            int xx = (point.first - x.first), yy = (point.second - x.second);
            int sumi = (xx * xx) + (yy * yy);
            if (sumi <= (radius * radius))
            {
                return 1;
            }
        }
    }
    cout << "🤸🤸🤸🤸" << endl;

    return 0;
}
vector<pii> makepointlist(pii point, int &endx, int &endy)
{
    vector<pii> v;
    int x, y;
    x = point.first, y = point.second;
    vector<pii> points;
    points.push_back({x - 1, y + 1});
    points.push_back({x - 1, y});
    points.push_back({x - 1, y - 1});
    points.push_back({x, y + 1});
    points.push_back({x, y - 1});
    points.push_back({x + 1, y + 1});
    points.push_back({x + 1, y});
    points.push_back({x + 1, y - 1});
    // trav(points)
    // {
    //     print(x.first);
    //     print(x.second);
    //     nline;
    // };

    trav(points)
    {
        int xx = x.first, yy = x.second;
        if ((xx >= 0 and yy >= 0) and (xx <= endx and yy <= endy))
        {
            v.push_back({xx, yy});
        }
    }
    // trav(v)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    return v;
}
void bfs(map<pii, bool> &mp, int &endx, int &endy, int &radius, vector<pii> &circlecenters, string &ans)
{
    queue<pii> que;
    que.push({0, 0});
    mp[{0, 0}] = 1;
    while (!que.empty())
    {
        pii pnt = que.front();
        que.pop();
        if (pnt.first == endx and pnt.second == endy)
        {
            ans = "YES";
            return;
        }
        // if(xvisited[pnt.first] and yvisited[pnt.second]) continue;
        // if (mp[{pnt.first, pnt.second}])
        //     continue;
        vector<pii> pntlist = makepointlist({pnt.first, pnt.second}, endx, endy);
        for (auto x : pntlist)
        {
            cout << " 🖐️ x.first = " << x.first << "  x.second = " << x.second << endl;
            // deb(x.first);
            // deb(x.second);
            if (mp.find({x.first, x.second}) == mp.end())
            {
                mp[{x.first, x.second}] = 1;
                if (!isinanyCircle({x.first, x.second}, radius, circlecenters))
                {

                    que.push({x.first, x.second});
                }
            }
        }
    }
}

string solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F)
{
    string ans("NO");
    makepointlist({0, 0}, A, B);
    vector<pii> circlecenters;
    for (int i = 0; i < E.size(); i++)
    {
        circlecenters.push_back({E[i], F[i]});
        // }
        // vb xvisited(((A + 1) * (B + 1)), 0);
        // vb yvisited(((A + 1) * (B + 1)), 0);
    };
    map<pii, bool> mp;
    bfs(mp, A, B, D, circlecenters, ans);
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
        int x = 2, y = 3, N = 1, R = 1;
        // int x = 41, y = 67, N = 5, R = 0;
        // vi xcordinates = {17, 16, 12, 0, 40}, ycordinates = {52, 61, 61, 25, 31};
        vi xcordinates = {2}, ycordinates = {3};
        solve(x, y, N, R, xcordinates, ycordinates);
    }
    return 0;
}