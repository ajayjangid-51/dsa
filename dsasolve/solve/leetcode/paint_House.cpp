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

#define pii pair<int, int>
#define vvi vector<vector<int>>
pair<int, int> solvi(int n, vvi &A)
{
    if (n == 0)
        return min(make_pair(A[0][0], 0), min(make_pair(A[0][1], 1), make_pair(A[0][2], 2)));
    pii ans = solvi(n - 1, A);
    // deb(ans);
    debpair(ans);
    if (ans.second == 0)
    {
        deb(A[n - 1][1]);
        deb(A[n - 1][2]);
        // return min(make_pair((A[n - 1][1] + ans.first), 1), make_pair((A[n - 1][2] + ans.first), 2));
        return min(make_pair((A[n][1] + ans.first), 1), make_pair((A[n][2] + ans.first), 2));
    }
    else if (ans.second == 1)
    {
        // return min(make_pair(A[n - 1][0] + ans.first, 0), make_pair(A[n - 1][2] + ans.first, 2));
        return min(make_pair(A[n][0] + ans.first, 0), make_pair(A[n][2] + ans.first, 2));
    }
    // else if(ans.second==2){
    else
    {
        // return min(make_pair(A[n - 1][0] + ans.first, 0), make_pair(A[n - 1][1] + ans.first, 1));
        return min(make_pair(A[n][0] + ans.first, 0), make_pair(A[n][1] + ans.first, 1));
    }
}
int solve(vector<vector<int>> &A)
{
    int n = A.size();
    debline(n);
    int ans = solvi(n - 1, A).first;
    print("😀");
    print(ans);
    return 0;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vvi A = {
            // {1, 2, 3}, {10, 11, 12}, {5, 6, 7}, {8, 6, 4}}
            {468, 335, 501},
            {170, 725, 479},
            {359, 963, 465},
            {706, 146, 282},
            {828, 962, 492},
            {996, 943, 828},
            {437, 392, 605},
            {903, 154, 293},
            {383, 422, 717},
            {719, 896, 448},
            {727, 772, 539},
            {870, 913, 668},
            {300, 36, 895},
            {704, 812, 323},
            {334, 674, 665},
            {142, 712, 254},
            {869, 548, 645},
            {663, 758, 38},
            {860, 724, 742},
            {530, 779, 317},
            {36, 191, 843},
            {289, 107, 41},
            {943, 265, 649},
            {447, 806, 891},
            {730, 371, 351},
            {7, 102, 394},
            {549, 630, 624},
            {85, 955, 757},
            {841, 967, 377},
            {932, 309, 945},
            {440, 627, 324},
            {538, 539, 119},
            {83, 930, 542},
            {834, 116, 640},
            {659, 705, 931},
            {978, 307, 674},
            {387, 22, 746},
            {925, 73, 271},
            {830, 778, 574},
            {98, 513, 987},
            {291, 162, 637},
            {356, 768, 656},
            {575, 32, 53},
            {351, 151, 942},
            {725, 967, 431},
            {108, 192, 8},
            {338, 458, 288},
            {754, 384, 946},
            {910, 210, 759},
            {222, 589, 423},
            {947, 507, 31}

        };
        solve(A);
    }
    return 0;
}