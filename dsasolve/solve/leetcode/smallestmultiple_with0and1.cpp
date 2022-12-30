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
string multiple(int A)
{
    int i = 1;
    while (1)
    {
        long long multi = A * i;
        i++;
        string s1, s2 = to_string(multi);
        deb(multi);
        // deb(s1);
        // deb(s2);
        while (multi != 0)
        {
            int rem = multi % 10;
            multi /= 10;
            // deb(rem);
            if (rem == 0 or rem == 1)
            {
                s1.push_back(rem + 48);
            }
        };
        // deb(s1.length());
        // deb(s2.length());

        if (s1.length() == s2.length())
        {
            reverse(s1.begin(), s1.end());
            return s1;
        }
        // if (i == 3)
        //     break;
    }
    return "1";
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        deb(multiple(91377));
    }
    return 0;
}