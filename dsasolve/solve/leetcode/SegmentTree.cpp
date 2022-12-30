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
#define line1 cout << "🛑_______________________________🛑" \
                   << "\n"                                      \
                      "\n"
#define line2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
// struct SegmentTree
// {
//     int n;
//     int *treearray;
//     SegmentTree(int x)
//     {
//         n = x;
//         treearray = new int[2 * n];
//     }
// };

int buildtree(vector<int> arr, vi &treearray, int startindex, int endindex, int index)
{
    if (startindex == endindex)
    {
        deb(startindex);
        deb(arr[startindex]);
        treearray[index] = arr[startindex];
        return arr[startindex]; // or we can return treearray[index]-also but main thing is ki before returning we should assing arr[startindex] in treearray[index].
        // return treearray[index];
    }
    int mid = (startindex + endindex) / 2;
    // treearray[index] = buildtree(arr, treearray, startindex, mid, (2 * index)) + buildtree(arr, treearray, mid + 1, endindex, ((2 * index) + 1));
    // minimum-query:-
    treearray[index] = min(buildtree(arr, treearray, startindex, mid, (2 * index)), buildtree(arr, treearray, mid + 1, endindex, ((2 * index) + 1)));
    return treearray[index];
}
int sumii(vi &treearray, int a, int b)
{
    // int sumi = 0;
    int sumi = INT_MAX;
    a += 16, b += 16;
    while (a <= b)
    {
        if (a % 2 == 1)
        {
            // sumi += treearray[a];
            sumi = min(sumi, treearray[a]);
            a++;
        }
        if (b % 2 == 0)
        {
            // sumi += treearray[b];
            sumi = min(sumi, treearray[a]);
            b--;
        }
        a /= 2, b /= 2;
    }

    return sumi;
}
void updaterange(vi &treearray, int index, int num)
{
    index += 16;
    treearray[index] += num;
    for (int i = (index / 2); i >= 1; i = i / 2)
    {
        treearray[i] = treearray[2 * i] + treearray[((2 * i) + 1)];
    }
}
void solve(vector<int> arr)
{
    for (int i = 0; i < 7; i++)
    {
        arr.push_back(0);
    }
    // int treearray[2 * arr.size()];
    deb(arr.size());
    vi treearray(2 * (arr.size()));
    deb(treearray.size());
    buildtree(arr, treearray, 0, arr.size() - 1, 1);
    nline;
    trav(treearray)
    {
        print(x);
    }
    nline;
    debline(sumii(treearray, 0, 8)); // here original-array-indexes are given (and as we know ki original-array is 0-index-based-Array).
    // updaterange(treearray, 3, 1);
    // debline(sumii(treearray, 1, 3));
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vi arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        solve(arr);
    }
    return 0;
}