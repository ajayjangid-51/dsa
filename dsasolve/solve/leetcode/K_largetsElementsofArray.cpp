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
void swap(vector<int> &A, int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
void Heapify(vector<int> &A, int n)
{
    for (int i = (n / 2) - 1; i > 0; i--)
    {
        int j = 2 * i + 1; // Left child for current i
        while (j < n - 1)
        {
            if (A[j] < A[j + 1])
                j = j + 1;
            if (A[i] < A[j])
            {
                swap(A, i, j);
                i = j;
                j = 2 * i + 1;
            }
            else
                break;
        }
    }
}
int Delete(vector<int> &A, int n)
{
    int x = A[0]; // Max element
    A[0] = A[n - 1];
    int i = 0;
    int j = 2 * i + 1;
    while (j < n - 1)
    {
        if (A[j] < A[j + 1])
            j = j + 1;
        if (A[i] < A[j])
        {
            swap(A, i, j);
            i = j;
            j = 2 * i + 1;
        }
        else
            break;
    }
    return x;
}
vector<int> solve(vector<int> &A, int B)
{
    // first creating Heap of vector-A inplacingling..
    vector<int> v;
    v.push_back(-1);
    for (auto x : A)
    {
        v.push_back(x);
    }
    // Heapify(v, v.size() - 1);
    Heapify(A, A.size());
    nline;
    trav(A)
    {
        print(x);
    }
    nline;
    vector<int> ans;
    for (int i = 0; i < B; i++)
    {
        int temp = (Delete(v, v.size()));
        deb(temp);
    }
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
        vi A = {36, 191, 843, 289, 107, 41, 943, 265, 649, 447, 806, 891, 730, 371, 351, 7, 102};

        solve(A, 16);
    }
    return 0;
}