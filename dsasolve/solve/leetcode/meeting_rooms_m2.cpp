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
// bool fncomp(int lhs, int rhs) { return lhs < rhs; }
struct classcomp
{
    // bool operator()(const int &lhs, const int &rhs) const
    bool operator()(const pii &lhs, const pii &rhs) const
    {
        if (lhs.second == rhs.second)
        {
            return lhs.first < rhs.first;
        }
        return lhs.second < rhs.second;
        // return lhs > rhs;
    }
};
void solve()
{
    // vvi v1 = {
    //     {0, 30},
    //     {5, 10},
    //     {15, 20}};
    // vvi v1 = {{349, 79736},
    //           {20748, 35776},
    //           {712, 80453},
    //           {77795, 87586},
    //           {47358, 85393},
    //           {73924, 77406},
    //           {51162, 88487},
    //           {20312, 71348},
    //           {16620, 87164},
    //           {38431, 88089},
    //           {69819, 87751},
    //           {24740, 71137},
    //           {27896, 96023},
    //           {10013, 45574},
    //           {5293, 63361},
    //           {66234, 94327},
    //           {51755, 62918},
    //           {44057, 92867},
    //           {12724, 80883},
    //           {2660, 51828},
    //           {72453, 85471},
    //           {9533, 68587},
    //           {11695, 17975},
    //           {18905, 39831},
    //           {1292, 2845},
    //           {25308, 29156},
    //           {239, 8163},
    //           {31146, 35738},
    //           {53101, 92488},
    //           {80771, 85591},
    //           {26102, 84459},
    //           {82549, 86420},
    //           {26627, 37783},
    //           {341, 76787},
    //           {891, 17871},
    //           {9074, 10152},
    //           {165, 60529},
    //           {30191, 71563},
    //           {28697, 79876},
    //           {52863, 91104},
    //           {22405, 75791},
    //           {10077, 51841},
    //           {32436, 98068},
    //           {25531, 72843},
    //           {53211, 93984},
    //           {33443, 33760},
    //           {61529, 79207},
    //           {25952, 40215},
    //           {36469, 87249},
    //           {7340, 73510},
    //           {6141, 53678},
    //           {19175, 39371},
    //           {5085, 21253},
    //           {13726, 60563},
    //           {4859, 17409},
    //           {71685, 75215},
    //           {52699, 59512},
    //           {17805, 47693},
    //           {7776, 74429},
    //           {20863, 71575},
    //           {50947, 54409},
    //           {39199, 45461},
    //           {3618, 43237},
    //           {77834, 93390},
    //           {10068, 40489},
    //           {39271, 74805},
    //           {4628, 22098},
    //           {82603, 89025},
    //           {5254, 22762},
    //           {55721, 91653},
    //           {8147, 56106},
    //           {36339, 37038},
    //           {30844, 67919},
    //           {64023, 84272},
    //           {47568, 74567},
    //           {15972, 56188},
    //           {58650, 61578}};
    // vvi v1 = {{4, 14},
    //           {3, 25},
    //           {19, 21},
    //           {2, 29},
    //           {8, 9},
    //           {2, 26},
    //           {20, 21},
    //           {7, 19},
    //           {12, 21}};
    // vvi v1 = {
    //     {21, 26},
    //     {2, 20},
    //     {16, 29},
    //     {10, 29},
    //     {1, 25},
    //     {3, 10},
    //     {21, 23},
    //     {13, 15},
    //     {0, 15},
    //     {10, 27}};
    // vvi v1 = {
    {1, 18},
        {18, 23},
        {15, 29},
        {4, 15},
        {2, 11},
        {5, 13}
        // };
        vvi v1 = {
            {7, 10},
            {4, 19},
            {19, 26},
            {14, 16},
            {13, 18},
            {16, 21},
        };
    multiset<pii, classcomp>
        st;
    trav(v1)
    {
        st.insert({x[0], x[1]});
    }
    vvi v;
    trav(st)
    {
        vi vv = {x.first, x.second};
        v.push_back(vv);
    }
    trav(v)
    {
        trav2(x) print(y);
        nline;
    }
    int xx = 0;

    vector<bool> visited(11, 0);
    for (int i = 0; i < v.size(); i++)
    {
        if (visited[i])
            continue;
        pii p = {v[i][0], v[i][1]};
        debpair(p);
        visited[i] = 1;
        int mini = -1;
        for (int j = i + 1; j < v.size(); j++)
        {
            deb(j);
            if (visited[j])
                continue;
            pii p1 = {v[j][0], v[j][1]};
            if (p1.first >= p.second)
            {
                debpair(p1);
                for (int k = j + 1; k < v.size(); k++)
                {
                    if (visited[k])
                        continue;
                    if (v[k][0] < p1.first and v[k][0] >= p.second)
                    {
                        pii p2 = {v[k][0], v[k][1]};
                        mini = k;
                        debpair(p2);
                        linebreak;
                        p1.first = v[k][0];
                    }
                }
                if (mini != -1)
                {
                    visited[mini] = 1;
                    p = {v[mini][0], v[mini][1]};
                    print("😀");
                    debline(mini);
                    debline(j);
                    j = mini;
                    // j = mini - 1;
                }
                else
                {

                    visited[j] = 1;
                    p = {v[j][0], v[j][1]};
                }
            }
        }
        xx++;
    }
    debline(xx);
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