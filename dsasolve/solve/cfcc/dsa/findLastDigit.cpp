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
int Modulo(int a, string b)
{
    int mod = 0;
    for (int i = 0; i < b.size(); i++)
        mod = (mod * 10 + b[i] - '0') % a;

    return mod; // return modulo
}
void solve()
{
    // string A("2"), B("10");
    string A("0174520669358005603046598506479720736793297760682474223148909553942090532954907781068677982335584824"), B("5421158054975868127102040792138616334158595194152449113616682432094194180103217434896269284568749648");

    int a = A.back() - 48;
    int x = a % 10;
    vector<int> v(5);
    v[0] = -1;
    v[1] = x;
    v[2] = (v[1] * x) % 10;
    v[3] = (v[2] * x) % 10;
    v[4] = (v[3] * x) % 10;
    int y = Modulo(4, B);
    // deb(v[y + 1]);
    trav(v) print(x);
    nline;
    nline;
    deb(y);
    if (y == 0)
        y = 4;
    deb(v[y]);
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