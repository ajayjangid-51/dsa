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

vi v;
int sumi;
bool flag;
int j = 1;
map<int, int> mp;
bool solvi(int sum, int index, vb &store, vi &B)
{
    // base-case:
    if (sum < 0)
    {
        v.push_back(1);
        return 0;
    }
    if (sum == 0)
    {
        print("🍳💛💛");
        deb(index);
        return 1;
    }

    if (store[sum] == 0)
    {
        // v.pop_back();
        // if (v.size())
        //     v.pop_back();
        return 0;
    }
    bool ans = 0;
    for (int i = 0; i < B.size(); i++)
    {
        if (flag)
            break;
        // print(i);
        // deb(B[i]);
        // deb(sum);
        // v.push_back(mp[B[i]]);
        v.push_back(j);
        j++;

        ans = solvi(sum - B[i], i, store, B);
        flag = ans;
        if (flag == true)
        {
            break;
        }
        // if (v.size())
        v.pop_back();
    }
    store[sum] = ans;
    return ans;
}
vector<int> solve(int A, vector<int> &B)
{
    v.clear();
    sumi = A;
    flag = 0;
    vb store(A + 5, 1);
    mp.clear();
    for (int i = 0; i < B.size(); i++)
    {
        if (mp.find(B[i]) == mp.end())
            mp[B[i]] = i;
        // mp.insert({B[i], i});
    }
    sort(range(B));
    // trav(mp)
    // {
    //     print(x.first);
    //     print(x.second);
    //     linebreak;
    // }
    solvi(A, -1, store, B);
    // v.erase(v.begin());
    linebreak;
    trav(v) print(x);
    linebreak;
    return v;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vi B = {8, 8, 6, 5, 4};
        vi B = {17786, 11924, 22802, 13344, 10395, 10501, 16658, 16430, 2371, 15036, 18699, 20068, 22772, 13935, 5549, 8435, 14181, 5745, 5220, 20377, 2576, 6438, 15791, 21539, 22871, 15132, 24076, 3144, 13938, 4811, 9031, 23067, 8078, 23176, 11402, 18465, 20, 3051, 1238, 2382, 9430, 19928, 13793, 23546, 207, 19333, 23324, 14379, 16422, 3535, 1100, 18989, 9965, 16882, 6871, 24179, 7005, 22290, 2314, 20934, 2093, 11336, 10345, 1514, 855, 21738, 11322, 866, 16133, 3904, 19591, 554, 23823, 8376, 15443, 15373, 19052, 13759, 21096, 1817, 17285, 22187, 20797, 18593, 5412, 2660};
        debline(B.size());
        debline(B[36]);
        solve(9383, B);
        deb(9833 / 20);
        // solve(11, B);
    }
    return 0;
}