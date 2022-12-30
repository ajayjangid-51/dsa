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

vector<int> solve(vector<int> &A, vector<int> &B)
{
    sort(range(A));
    sort(range(B));
    map<pii, int> mp;
    int k = A.size();
    priority_queue<tuple<int, int, int>> pque;
    pque.push({(A[k - 1] + B[k - 1]), k - 1, k - 1});
    vi ans;
    while (k--)
    {
        int sum, lasti, lastj;
        tie(sum, lasti, lastj) = pque.top();
        pque.pop();
        if (mp.find({lasti, lastj}) != mp.end())
        { // mtlb here same-indexes should not be repeated.
            k++;
            continue;
        }
        mp[{lasti, lastj}] = 1;
        ans.push_back(sum);
        pque.push({(A[lasti] + B[lastj - 1]), lasti, lastj - 1});
        pque.push({(A[lasti - 1] + B[lastj]), lasti - 1, lastj});
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
        vi A = {3, 1, 3, 1};
        vi B = {1, 4, 1, 4};
        solve(A, B);
    }
    return 0;
}