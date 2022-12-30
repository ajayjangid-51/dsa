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
#define bstart(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
#define bend cout << "🛑_______________________________🛑" \
                  << "\n"                                      \
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
string multiple(int A)
{
    if (A == 1)
        return "1";

    queue<int> que;
    que.push(1);
    vb visited(A, 0);
    vector<int> p(A);
    vector<bool> num(A);
    p[1] = 1;
    while (!que.empty())
    {
        int rem = que.front();
        que.pop();
        debline(rem);
        if (rem == 0)
        {

            break;
        }
        visited[rem] = 1;
        int r0 = (rem * 10 + 0) % A;
        int r1 = (rem * 10 + 1) % A;
        if (!visited[r0])
        {
            que.push(r0);
            visited[r0] = 1;
            num[r0] = 0;
            p[r0] = rem;
        }
        if (!visited[r1])
        {
            que.push(r1);
            num[r1] = 1;
            p[r1] = rem;
            visited[r1] = 1;
        }
    }
    string ans;
    int currnum = 0;

    while (currnum != 1)
    {
        debline(ans);
        deb(num[currnum] + '0');
        char c = num[currnum] + '0';
        deb(c);
        deb(p[currnum]);
        ans.push_back(c);
        currnum = p[currnum];
    }
    deb(ans);
    ans.push_back('1');
    reverse(range(ans));
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
        multiple(55);

        // 🔥finally accepted , but jo baat phle apnne boli thi vohi sahi hai ki solution ekdam simple-straight-forward hota hai, bas apnko usss solution k aas-pass milta julta thoda kuch sochlena hai.... baki phir aage aaram se easily hojayega.
    }
    return 0;
}