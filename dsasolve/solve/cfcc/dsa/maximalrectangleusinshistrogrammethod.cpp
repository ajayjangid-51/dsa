#include <bits/stdc++.h>
using namespace std;

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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
int largestRectangleArea(vector<int> &heights)
{
    stack<int> stk;
    stk.push(-1);
    int max_area = 0;
    for (size_t i = 0; i < heights.size(); i++)
    {
        while (stk.top() != -1 and heights[stk.top()] >= heights[i])
        {
            int current_height = heights[stk.top()];
            stk.pop();
            int current_width = i - stk.top() - 1;
            max_area = max(max_area, current_height * current_width);
        }
        stk.push(i);
    }
    while (stk.top() != -1)
    {
        int current_height = heights[stk.top()];
        stk.pop();
        int current_width = heights.size() - stk.top() - 1;
        max_area = max(max_area, current_height * current_width);
    }
    deb(max_area);
    return max_area;
}

int maximalRectangle(vector<vector<int>> &matrix)
{

    int m = matrix[0].size();
    int maxi = 0;

    vector<int> h;
    for (int i = 0; i < m; i++)
    {
        if (matrix[0][i] == '1')
            h.push_back(1);
        else
            h.push_back(0);
    }
    maxi = max(maxi, largestRectangleArea(h));
    for (int i = 1; i < matrix.size(); i++)
    {
        print(i);

        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '1')
                h[j]++;
            else
                h[j] = 0;
        }
        maxi = max(maxi, largestRectangleArea(h));
        deb(maxi);
    }
    return maxi;
}

void solve()
{

    vvi matrix = {{1, 0, 1, 0, 0}, {1, 0, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 0, 0, 1, 0}};
    int ans = maximalRectangle(matrix);
    debline(ans);
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