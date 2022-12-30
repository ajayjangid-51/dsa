#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) x.size()
#define pright __LINE__ << "👉"
#define pleft "👈"
#define rocket "🚀"
#define star "⭐"

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
int solve(vi &A, int B)
{
    // vi A = {1, 2, 3, 1, 2};
    // vi A = {1, 2, 1, 2, 2};
    // int B = 2;
    int cnt1 = 0;
    map<int, int> mp;
    int i = 0, j = 0;
    // mp[A[0]] = 1;
    // debline(distinctNums);
    while (i < A.size())
    {

        if (j <= i)
        {
            mp[A[i]]++;
            j = i;
        }
        int distinctNums = mp.size();
        print(pright), print(i), print(j), nline;

        while (distinctNums <= B and j < A.size())
        {
            if (j != A.size() - 1)
                j++;
            else
                break;
            if (j != i)
                mp[A[j]]++;
            if (mp.size() > B)
            {
                print(rocket);
                mp.erase(A[j]);
                if (j != 0)
                    j--;
                break;
            }
            distinctNums = mp.size();
            // print(j), nline;
            // debline(distinctNums);
            // if (j != A.size() - 1)
            //     j++;
            // else
            //     break;
        }
        // deb(j);
        int noofsubArrays = (j - i) + 1;
        print(j), print(i), print(star), nline;
        deb(j - i);
        cnt1 += noofsubArrays;
        if (mp[A[i]] > 1)
            mp[A[i]]--;
        else
            mp.erase(A[i]);
        i++;
    }
    // deb(cnt1);
    return cnt1;
}
int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vi A = {1, 2, 1, 2, 2};
        // vi A = {1, 2, 1, 3, 4};
        vi A = {5, 3, 5, 1, 3};
        int B = 3;

        int cnt1 = solve(A, B);
        linebreak1;
        int cnt2 = solve(A, B - 1);
        deb(cnt1);
        deb(cnt2);
    }
    return 0;
}