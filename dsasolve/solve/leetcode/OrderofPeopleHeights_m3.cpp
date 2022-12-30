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
#define forn(i, start, n) for (auto i = start; i < n; i++)

int buildTree(int n, vi &treearray, int start, int end, int index)
{
    if (start == end)
    {
        treearray[index] = 1;
        if (start >= n)
            treearray[index] = 0;
        return treearray[index];
    }
    int mid = (start + end) / 2;
    treearray[index] = (buildTree(n, treearray, start, mid, (2 * index)) + buildTree(n, treearray, mid + 1, end, ((2 * index) + 1)));
    return treearray[index];
}
int indi = 0;
void rquerry(vi &treearray, int start, int end, int num, int index, char c)
{
    if (start == end)
    {
        indi = index;
        debline(indi);
        return;
    }
    int mid = (start + end) / 2;
    int diff = end - start;
    deb(diff);
    deb(num);
    if (diff == 1)
    {
        // debline(num);
        print("😀");
        print(num);
        if (num == 0)
        {
            if (treearray[2 * index] == 1)
            {
                // put in left.
                return rquerry(treearray, (mid + 1), end, num, ((2 * index)), 'r');
            }
            else
            {
                // put in right.
                return rquerry(treearray, (mid + 1), end, num, ((2 * index) + 1), 'r');
            }
        }
        else
        {
            return rquerry(treearray, (mid + 1), end, num, ((2 * index) + 1), 'r');
        }
    }
    else
    {
        if (treearray[index * 2] > num)
        {
            return rquerry(treearray, start, mid, num, index * 2, 'l');
        }
        else
        {
            return rquerry(treearray, (mid + 1), end, (num - treearray[((2 * index))]),
                           ((2 * index) + 1), 'r');
        }
    }
}

void update(vi &treearray, int index)
{
    treearray[index] -= 1;
    for (int i = index / 2; i >= 1; i = i / 2)
    {
        treearray[i] = treearray[2 * i] + treearray[(2 * i) + 1];
    }
}
vector<int> order(vector<int> &A, vector<int> &B)
{
    vector<pii> v;
    int n = A.size();
    forn(i, 0, n)
    {
        v.push_back({A[i], B[i]});
    }
    int x = 2;
    while (n > x)
    {
        x = (x << 1);
    }
    int mm = x;
    deb(mm);

    vi arraytree(2 * mm, 0);
    buildTree(n, arraytree, 0, (mm - 1), 1);
    trav(arraytree)
    {
        print(x);
    }
    linebreak;

    sort(range(v));
    vi ans(n);
    trav(v)
    {

        rquerry(arraytree, 0, mm - 1, x.second, 1, 'm');
        update(arraytree, indi);
        deb(indi);
        ans[indi - mm] = x.first;
    }
    linebreak;
    trav(ans)
    {
        print(x);
    }
    linebreak;

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
        vi A = {86, 92, 49, 21, 62, 27, 90, 59};
        vi B = {2, 0, 0, 2, 0, 2, 1, 3};
        // vi A = {86, 77};
        // vi B = {0, 1};
        order(A, B);
    }
    return 0;
}