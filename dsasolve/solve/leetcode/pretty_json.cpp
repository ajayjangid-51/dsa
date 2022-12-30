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
    // string s("{A:\"B\",C:{D:\"E\",F:{G:\"H\",I:\"J\"}}}");
    // string s("[\"foo\",{\"bar\":[\"baz\",null,1.0,2]}]");
    string s("{\"attributes\":[{\"nm\":\"ACCOUNT\",\"lv\":[{\"v\":{\"Id\":null,\"State\":null},\"vt\":\"java.util.Map\",\"cn\":1}],\"vt\":\"java.util.Map\",\"status\":\"SUCCESS\",\"lmd\":13585},{\"nm\":\"PROFILE\",\"lv\":[{\"v\":{\"Party\":null,\"Ads\":null},\"vt\":\"java.util.Map\",\"cn\":2}],\"vt\":\"java.util.Map\",\"status\":\"SUCCESS\",\"lmd\":41962}]}");
    // string s("{\"id\":100,\"firstName\":\"Jack\",\"lastName\":\"Jones\",\"age\":12}");
    deb(s);
    int indent = 0;
    vs v;
    string s1;
    for (int i = 0; i < s.size(); i++)
    {
        deb(s[i]);

        if (s[i] == '{' or s[i] == '[')
        {
            string s3(indent, '\t');
            s1 = s3 + s1;
            if (s1.size() != 0)
                v.push_back(s1);
            s1.clear();
            string s2(indent, '\t');
            if (s[i] == '[')
                s2.push_back('[');
            else
                s2.push_back('{');
            v.push_back(s2);
            indent++;
        }
        else if (s[i] == ',')
        {
            s1.push_back(s[i]);
            string s3(indent, '\t');
            s1 = s3 + s1;
            if (s1.size() != 0)
                v.push_back(s1);
            s1.clear();
        }
        else if (s[i] == '}' or s[i] == ']')
        {

            string s3(indent, '\t');
            s1 = s3 + s1;
            if (s1.size() != 0)
                v.push_back(s1);
            s1.clear();
            indent--;
            string s4(indent, '\t');
            s3 = s4;
            if (s[i] == ']')
                s3.push_back(']');
            else
                s3.push_back('}');
            if (s[i + 1] == ',')
            {
                s3.push_back(s[i + 1]);
                i++;
            }
            v.push_back(s3);
        }
        else
        {
            s1.push_back(s[i]);
        }
    }
    // v.push_back("}");
    linebreak;
    trav(v)
    {

        if (*x.rbegin() != '\t')
        {
            print(x);
            nline;
        }
    }
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