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
int hamming(string s1, string s2)
{
    int d = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            d++;
    }
    return d;
}
int solve(string A, string B, vector<string> &C)
{
    set<string> st;
    // st.insert()
    trav(C)
    {
        st.insert(x);
    }
    // st.erase("hot");
    C.push_back(B);
    queue<string> que;
    que.push(A);
    map<string, bool> visited;
    map<string, int> distance;
    distance[A] = 0;
    while (!que.empty())
    {
        string s = que.front();
        que.pop();
        if (s == B)
        {
            debline(distance[B]);
            return distance[B];
        }

        for (int i = 0; i < C.size(); i++)
        {
            string s1 = C[i];
            deb(s1);
            if ((visited.find(s1) == visited.end()) and (hamming(s, s1) == 1))
            {
                debline(s1);
                visited[s1] = 1;
                distance[s1] = distance[s] + 1;
                que.push(s1);
            }
        }
    }
    return distance[B];
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        vs C = {"hot", "dot", "lot", "dog", "log"};
        solve("hit", "cog", C);
    }
    return 0;
}