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
void solve()
{
    // string s("25525511135");
    // string s("0100100");
    string s("10345");
    if (s.size() < 4 or s.size() > 12)
    {
        debline("false");
        return;
    }
    string s1, s2, s3, s4;
    for (int i = 0; i <= 2 and i < s.size(); i++)
    {
        s1.push_back(s[i]);
        for (int j = i + 1; j <= (i + 3) and j < s.size(); j++)
        {
            s2.push_back(s[j]);

            for (int k = j + 1; k <= (j + 3) and k < s.size(); k++)
            {
                s3.push_back(s[k]);
                s4.clear();
                for (int m = k + 1; m < s.size(); m++)
                {
                    s4.push_back(s[m]);
                }

                if (s1.size() == 0 or s2.size() == 0 or s3.size() == 0 or s4.size() == 0)
                {
                    continue;
                }
                // print("🔥");
                // deb(s1);
                // deb(s2);
                // deb(s3);
                // deb(s4);
                string s5 = s4;

                if (s5.size() > 3)
                {
                    s5 = s5.substr(0, 3);
                }
                // deb(s5);
                // print("🔥");
                // nline;
                // deb(s4);
                // print(s5);
                // nline;
                if (s1 == "00" or s1 == "01" or s1 == "010" or s1 == "001" or s1 == "000")
                {
                    // deb(__LINE__);
                    // debline(s1);
                    // s1.pop_back();
                    continue;
                }
                if (s2 == "00" or s2 == "01" or s2 == "010" or s2 == "001" or s2 == "000")
                {
                    // deb(__LINE__);
                    // debline(s2);
                    // s2.pop_back();

                    continue;
                }
                if (s3 == "00" or s3 == "01" or s3 == "010" or s3 == "001" or s3 == "000")
                {

                    // deb(__LINE__);
                    // debline(s3);
                    // s3.pop_back();
                    continue;
                }
                if (s5 == "00" or s5 == "01" or s5 == "010" or s5 == "001" or s5 == "000")
                {
                    // deb(__LINE__);
                    // debline(s5);
                    // s4.pop_back();

                    continue;
                }
                // linebreak;

                int i1 = stoi(s1), i2 = stoi(s2), i3 = stoi(s3), i4 = stoi(s4);
                // print(i1);
                // print(i2);
                // print(i3);
                // print(i4);
                // nline;
                // linebreak;
                if ((i1 >= 0 and i1 <= 255) and (i2 >= 0 and i2 <= 255) and (i3 >= 0 and i3 <= 255) and (i4 >= 0 and i4 <= 255))
                {
                    print("⭐");
                    print(i1);
                    print(i2);
                    print(i3);
                    print(i4);
                    print("⭐");

                    nline;
                    linebreak;
                }

                // if (i1 > 255 or i2 > 255 or i3 > 255 or i4 > 255)
                // {
                //     break;
                // }
                // else
                // {
                // }
            }
            s4.clear();
            s3.clear();
        }
        s2.clear();
    }
    s1.clear();
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