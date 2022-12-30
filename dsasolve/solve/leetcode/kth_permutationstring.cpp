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

vi factoril;

string s;
vi v;
bool flag;

void fn(int n, int k)
{
    if (n == 1)
    {
        s.push_back(v[0] + '0');
        v.erase(v.begin());
        return;
    }
    int facto = factoril[n - 1];
    int index = k / facto;
    trav(v) print(x);
    nline;
    deb(n);
    deb(facto);
    deb(index);
    if (index == 0)
    {
        // flag = 1;
        // for (int i = 0; i < n; i++)
        // {
        s.push_back(v[0] + '0');
        v.erase(v.begin());
        fn(n - 1, k);
        // }
        // return;
    }
    else
    {

        int rem = k % facto;
        deb(rem);
        if (rem == 0)
        {

            index = index - 1;
            rem = factoril[n - 1];
            debline(rem);
        }

        s.push_back(v[index] + '0');
        v.erase(v.begin() + index);
        linebreak;

        fn(n - 1, rem);
    }
}
void solve(int n, int k)
{
    factoril[0] = 1;
    factoril[1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        factoril[i] = i * factoril[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    fn(n, k);
    debline(s);
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        solve(4, 6);
    }
    return 0;
}