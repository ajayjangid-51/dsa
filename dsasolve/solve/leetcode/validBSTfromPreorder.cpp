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
int solve(vector<int> &A)
{
    // M1. O(n)-time
    /* *-----------------------------------------------------------------------------------* */
    stack<int> stk;
    int mini = INT_MIN;
    forn(i, 0, A.size())
    {
        // if (!stk.empty())
        //     deb(stk.top());
        // deb(mini);
        if (!stk.empty() and A[i] > stk.top())
        {
            mini = stk.top();
            stk.pop();
        }
        if (A[i] < mini)
        {
            return 0;
        }
        stk.push(A[i]);
    }
    return 1;

    // M2. O(n^2)-time
    /* *-------------------------------------------------------------------------------* */
}
int solvi(vector<int> &A)
{
    stack<int> st;
    int root = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        if ((!st.empty()) && (A[i] > st.top()))
        {
            root = st.top();
            st.pop();
        }
        if (A[i] < root)
        {
            return 0;
        }
        st.push(A[i]);
    }
    return 1;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vi preorder = {44, 22, 11, 33, 66, 55, 77, 88};
        vi p1 = {2, 4, 3};
        vi p2 = {2, 4, 1};
        vi p3 = {44, 22, 11, 33, 66, 55, 77, 88};
        vi p4 = {44, 22, 11, 66, 55, 33, 77, 88};
        // cout << solve(preorder) << endl;
        deb(solvi(p1));
        deb(solvi(p2));
        deb(solvi(p3));
        deb(solvi(p4));
    }
    return 0;
}