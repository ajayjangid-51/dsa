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
/* *-------------------------------------------------------------------------------* */
// method1:-
// void solve()
// {
//     vi A = {0, 1, 1, 0, 0, 1};
//     // vi A = {1, 0, 0, 1, 0};
//     int maxx = 1;
//     for (int i = 0; i < A.size(); i++)
//     {
//         int cnt0 = 0, cnt1 = 0;
//         if (A[i] == 0)
//             cnt0++;
//         else
//             cnt1++;
//         for (int j = i + 1; j < A.size(); j++)
//         {
//             if (A[j] == 0)
//                 cnt0++;
//             else
//                 cnt1++;
//             if (cnt1 == cnt0 + 1)
//             {
//                 deb(j);
//                 deb(i);
//                 deb(j - i);
//                 maxx = max(maxx, ((j - i) + 1));
//             }
//         }
//     }

//     debline(maxx);
// }
/* *-------------------------------------------------------------------------------* */
// method2:- (bases on hashtable)
// void solve()
// {
//     // vi A = {0, 1, 1, 0, 0, 1};
//     // vi A = {1, 0, 0, 1, 0};
//     vi A = {0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1};
//     for (int i = 0; i < A.size(); i++)
//     {
//         if (A[i] == 0)
//             A[i] = -1;
//     }

//     unordered_map<int, int> mp;
//     int sum = 0;
//     int maxx = 1;
//     for (int i = 0; i < A.size(); i++)
//     {
//         sum += A[i];
//         if (sum == 1)
//         {
//             maxx = max(maxx, i + 1);
//         }
//         else if (mp.find(sum) != mp.end())
//         {

//             if (A[mp[sum]] == 1)
//             {
//                 maxx = max(maxx, ((i - mp[sum]) + 1));
//             }
//         }
//         else
//             mp[sum] = i;
//     }
//     debline(maxx);
// }
/* *-------------------------------------------------------------------------------* */
// method3:- little variation in tarika of m2:-
void solve()
{
    vi A = {0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1};
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 0)
            A[i] = -1;
    }
    unordered_map<int, int> ump; // ump meh insertion, accessing, deletion time O(1) hota hai.
    int sum = 0;
    int maxx = 1;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        if (sum == 1)
        {
            maxx = max(maxx, i + 1);
        }
        else if (ump.find(sum) == ump.end())
        {
            ump[sum] = i;
        }
        if (ump.find(sum - 1) != ump.end())
        {
            // confusion is that ki why we are seeing for (sum-1), not only (sum).
            // so toh mtlb yeh hai ki "sum-1" ko check krna mtlb yeh confirm krna ki jis index pe
            // "sum-1" huaa hai and apni jo current-index hai enn indexes k bich ka sum "1" hoga. and
            // apnko toh yehi subarray-array chahiyehh jiska sum = 1 ho.
            // apna phle wala tarika thoda galat tha q ki vaha eshi bhi situation ho sktii hai,jaha
            // subarray-ka-sum toh "1" ho rha ho, but leftmost index pe element "1" nhi hoga, mtlb "-1"
            // hoga and eske vajah se apn usko skip kr de rhe hai, but apnko esa nhi krna hai.
            maxx = max(maxx, i - ump[sum - 1]);
        }
    }
    debline(maxx);
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
