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
int lengthOfLastWord()
{
    string A("Hello World  ");

    string s(A);
    if (s.length() == 0)
        return 0;
    int cnt = 0;
    int j = s.size() - 1;

    while (s[j] == ' ')
    {
        print("hi");
        s.pop_back();
        j--;
    }
    print(s);
    print("xx");
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            break;
        }
        cnt++;
    }
    return cnt;
    // ess question meh ek chota sa test-case tha,, jo ki apnne consider nhi kiya and voh that ki string k last meh kisi word k bajayeh "spaces" bhi ho sktehh hai. toh mtlb apn aseh baat ka dhyn rkhna hai,,, aage problem-solving.
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        int x = lengthOfLastWord();
        debline(x);
    }
    return 0;
}