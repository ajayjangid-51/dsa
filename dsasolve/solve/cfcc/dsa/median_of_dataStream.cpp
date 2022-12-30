#include <bits/stdc++.h>
using namespace std;

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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
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
/* class MedianFinder
{
public:
    MedianFinder(){};
    void addNum(){

    };
    double findMedian(){

    };
}; */

priority_queue<int> l;
priority_queue<int, vector<int>, greater<int>> r;
void addNum(int x)
{
    if (l.size() == 0)
    {
        l.push(x);
        return;
    }
    // if (r.size() == 0)
    // {

    //     r.push(x);
    //     return;
    // }
    if (l.size() == r.size())
    {
        // try to push it in left:
        if (x <= r.top())
        {
            l.push(x);
        }
        else
        {
            int t = r.top();
            r.pop();
            l.push(t);
            r.push(x);
        }
    }
    else
    {
        // try to push it in right;
        if (x >= l.top())
        {
            r.push(x);
        }
        else
        {
            int t = l.top();
            l.pop();
            r.push(t);
            l.push(x);
        }
    }
}
double findMedian()
{
    if (l.size() == r.size())
    {
        double m = (l.top() + r.top()) / 2.0;
        return m;
    }
    else
        return l.top() / 1.0;
}
void solve()
{
    // vi v = {2, 4};
    // trav(v) addNum(x);
    // deb(findMedian());
    // addNum(5);
    // addNum(7);
    // // addNum(3);
    // deb(findMedian());

    addNum(-1);
    deb(findMedian());
    addNum(-2);
    deb(findMedian());
    addNum(-3);
    deb(findMedian());
    addNum(-4);
    deb(findMedian());
    addNum(-5);
    deb(findMedian());
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