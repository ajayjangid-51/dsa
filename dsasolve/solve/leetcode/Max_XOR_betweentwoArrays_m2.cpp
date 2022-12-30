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
#define line1 cout << "🛑_______________________________🛑" \
                   << "\n"                                      \
                      "\n"
#define line2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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

struct trie
{
    bool end = 0;
    trie *next[26] = {0};
};
void insert(trie *root, string word)
{
    trie *p = root;
    debline(word);
    for (int i = 0; i < word.size(); i++)
    {
        if (!p->next[word[i] - 'a'])
        {
            p->next[word[i] - 'a'] = new trie;
        }
        p = p->next[word[i] - 'a'];
    }
    p->end = 1;
}
bool search(trie *root, string word)
{
    trie *p = root;
    deb(word);
    for (int i = 0; i < word.size(); i++)
    {
        if (!p->next[word[i] - 'a'])
            return 0;
        p = p->next[word[i] - 'a'];
    }
    // return p->end;
    return 1;
}
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    // Compare the number of good words
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
vector<int> solve(string A, vector<string> &B)
{
    trie *root = new trie;
    string st;
    trav(A)
    {
        if (x == '_')
        {
            insert(root, st);
            st.clear();
        }
        else
        {
            st.push_back(x);
        }
    }
    insert(root, st);
    vector<pair<int, int>> v;
    for (int i = 0; i < B.size(); i++)
    {
        string st;
        int cnt = 0;
        for (auto x : B[i])
        {
            if (x == '_')
            {
                if (search(root, st))
                    cnt++;
                // cout << st << endl;
                st.clear();
            }
            else
            {
                st.push_back(x);
            }
        }
        // cout << st << endl;
        if (search(root, st))
            cnt++;
        v.push_back({i, cnt});
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> ans;
    for (auto x : v)
    {
        deb(x.second);
        ans.push_back(x.second);
    }
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
        vector<string> B = {"water_is_cool", "cold_ice_drink", "cool_wifi_speed"};
        solve("cool_ice_wifi", B);
    }
    return 0;
}