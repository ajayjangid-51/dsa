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
#define debline(x) cout << "๐Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
                       << "\n"                              \
                          "\n"
#define linebreak2(x) cout << "๐ข" << #x << " = " << x << "________________๐ข " << endl
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
string solve()
{
    // string A("kmfzx");
    string A("kbyyxoioalnhadcqqvszhledptqpnprgdyclayzwyynckvyffzeizbugnviixaukvwixvbpihbawjfpeatacqlwgiutndpugwgyejvghcynmmhavtciaycxckvddnmigvhamkgemotudubxhvaegadxjdmbepyhcpvbfsftvcrufzoklcgkevcyerlzrjgbcdyghacbglmwvguopmtkxcqpmyffbatklrfpoalpyypxlkabddevjdpgyhplpqygbdmoyonlvfzpnnfdngmhfnsqoyyl");
    vector<int> v(26, 0);
    for (int i = 0; i < A.size(); i++)
    {
        int t = A[i] - 97;
        v[t]++;
    }
    string ans;
    vector<bool> donei(26, 0);
    for (int i = 0; i < A.size(); i++)
    {

        if (donei[int(A[i] - 97)])
            continue;
        ans.push_back(A[i]);
        donei[int(A[i] - 97)] = 1;
        debline(v[A[i] - 97]);
        string tmp = to_string(v[A[i] - 97]);
        // char c = v[A[i] - 97] - '0';
        // debline(c);
        // ans.push_back((v[int(A[i] - 97)] + '0'));
        // ans.push_back(c);
        ans += tmp;
    }
    debline(ans);
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
        solve();
    }
    return 0;
}