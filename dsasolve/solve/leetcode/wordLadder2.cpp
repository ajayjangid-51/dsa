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
void wordladder1(string start, string end, vs &dict, map<string, vs> &mp, int &ans)
{
    int d = 0;
    queue<string> que;
    que.push(start);
    unordered_set<string> st;
    trav(dict)
    {
        st.insert(x);
    }
    while (!que.empty())
    {
        // d++;
        int lsize = que.size();
        while (lsize--)
        {
            string s = que.front();
            que.pop();
            for (int i = 0; i < s.size(); i++)
            {
                string temp = s;
                for (char j = 'a'; j <= 'z'; j++)
                {
                    temp[i] = j;
                    if (temp == s)
                        continue;
                    if (temp == end)
                    {
                        // ans = d + 1;
                        mp[s].push_back(end);
                        // return d + 1;
                    }
                    if (st.find(temp) != st.end())
                    {
                        mp[s].push_back(temp);
                        que.push(temp);
                        st.erase(temp);
                    }
                }
            }
        }
    }
}
void dfs(string node, map<string, vs> &mp, vs &v, set<vs> &res, int ans)
{
    v.push_back(node);
    for (auto x : mp[node])
    {
        dfs(x, mp, v, res, ans);
    }
    if (v.size() == ans)
    {
        // res.push_back(v);
        res.insert(v);
    }
    v.pop_back();
}
vector<vector<string>> findLadders(string start, string end, vector<string> &dict)
{
    // int dist = 5;
    map<string, vs> mp;
    int ans = 0;
    wordladder1(start, end, dict, mp, ans);
    trav(mp)
    {
        print(x.first);
        trav2(x.second) print(y);
        nline;
    }
    // vs v;
    // set<vs> res;
    vector<vs> res2;
    // // debline(ans);
    // dfs(start, mp, v, res, ans);
    // trav(res)
    // {
    //     trav2(x) print(y);
    //     nline;
    // }
    // trav(res)
    // {
    //     res2.push_back(x);
    // }

    return res2;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // vs dict = {"hot", "dot", "dog", "lot", "log", "cog"};
        vs dict = {"hot", "dot", "dog", "lot", "log"};
        // vs dict;
        findLadders("hit", "cog", dict);
        // findLadders("bb", "ab", dict);
        // vs dict = {"gig", "cig", "mom", "tom"};
        // findLadders("dom", "okk", dict);
    }
    return 0;
}