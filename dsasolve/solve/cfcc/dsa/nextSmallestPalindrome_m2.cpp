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
#define leftpoint "👈"
#define rightpoint "👉"
#define downpoint "👇"
#define uppoint "👆"
#define fire "🔥"
#define star "⭐"
#define smile "😃"
#define smile2 "👺"
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define linebreak1 cout << "_______________________________" \
                        << "\n"                              \
                           "\n"
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
string fn2(string &s)
{
    int n = s.size();

    int cry = 0;
    int mid = (n / 2) - 1;
    if (n & 1)
        mid++;
    debline(mid);
    int l = mid, r = mid + 1;
    if (n % 2 == 0)
        r = mid + 1;
    if (n % 2 != 0)
    {
        l -= 1;
    }
    // else
    //     r = mid + 1;
    while (mid >= 0)
    {
        if (cry or s[mid] == '9')
        {
            if (s[mid] == '9')
            {
                s[mid] = '0';
                cry = 1;
            }
            else
            {

                s[mid]++;
                cry = 0;
            }
        }
        // if (s[mid] == '9')
        // {
        //     s[mid] = 0;
        //     cry = 1;
        // }
        mid--;
    }
    debline(s);
    while (r < n)
    {
        deb(r);
        deb(l);
        s[r] = s[l];

        r++;
        l--;
    }
    return s;
}

void solve()
{
    // string s("19121213");
    // string s("999");
    // string s("12421");
    // string s("94187978322");
    // string s("666662");
    string s("15346717427354726");
    int n = s.size();
    // case1:- if all are 9
    bool allnine = 1;
    trav(s)
    {
        if (x != '9')
        {

            allnine = 0;
            break;
        }
    }
    if (allnine)
    {
        string ans("1");
        int t = n - 1;
        while (t--)
            ans.push_back('0');
        ans.push_back('1');
        debline(ans);
        return;
    }

    // case2:- if already palindrome
    int i, j;
    i = (n / 2) - 1, j = i + 2;
    if (!(n & 1)) // if n is even
        j--;
    deb(i);
    deb(j);
    int carry = 0;
    while (s[i] == s[j] and i >= 0 and j < n)
    {
        i--;
        j++;
    }
    if (i < 0 and j >= n)
    {
        print(smile);
        debline(fn2(s));

        return;
    }

    // case3:- if not palindrome
    // case3.1:- if left-digit is greater
    int t1 = i, t2 = j;
    deb(t1);
    deb(t2);
    bool flag = 0;
    while (t1 >= 0)
    {
        // print(t1)
        deb(t1);
        deb(t2);
        s[t2] = s[t1];
        if (s[t1] < s[t2])
        {
            // s[t2] = s[t1];
            flag = 1;
        }

        t1--;
        t2++;
    }
    if (flag)
    {

        debline(fn2(s));
        return;
    }
    debline(s);

    return;
    // case3.2:- if left-digit is smaller
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