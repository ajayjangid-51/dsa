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
// #define debemoji(e , x) cout << #x << " = " <<e << x << endl
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
vector<int> dNums(vector<int> &A, int B)
{
    if (B > A.size())
        return {};
    unordered_map<int, int> mp;
    int fst = A[0];
    for (int i = 0; i < B; i++)
    {
        mp[A[i]]++;
    }
    vi ans;
    linebreak;
    // deb(fst);
    trav(mp)
    {
        print(x.first);
        print(x.second);
        nline;
    }
    linebreak;
    ans.push_back(mp.size());
    for (int i = 1; i < ((A.size() - B) + 1); i++)
    {

        if (mp[fst] > 1)
        {
            deb(fst);
            debline(mp[fst]);
            mp[fst]--;
        }
        else
        {
            deb(fst);
            debline(mp[fst]);
            // mp.erase(mp[fst]);
            mp.erase(fst);
        }
        int j = (i + B) - 1;
        deb(j);
        deb(A[j]);
        mp[A[j]]++;
        fst = A[i];
        linebreak;
        trav(mp)
        {
            print(x.first);
            print(x.second);
            nline;
        }
        linebreak;
        ans.push_back(mp.size());
    }
    trav(ans) print(x);
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
        vi A = {1, 2, 1, 3, 4, 3};
        int B = 3;
        dNums(A, B);
    }
    return 0;
}