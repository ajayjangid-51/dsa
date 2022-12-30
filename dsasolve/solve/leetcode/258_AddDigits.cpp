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
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
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

// method1:-
int Sumupdigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int addDigits(int num)
{
    while (num > 9)
    {
        num = Sumupdigits(num);
    }
    return num;
}

// method2:-
int addDigits(int num)
{
    while (num > 9)
        num -= 9;
    return num;
}
void Solve()
{
    int num;
    cin >> num;
    // cout << addDigits(num); Method1:- O(n*n)-time
    // method2:- O(1)-time
}

int main()
{
    io_faster
    file();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}