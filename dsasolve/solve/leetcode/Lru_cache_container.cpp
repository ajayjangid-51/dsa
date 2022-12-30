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
unordered_map<int, int> mp;
int cap;
queue<int> que;

void LRUCache(int capacity)
{
    mp.clear();
    cap = capacity;
    while (!que.empty())
        que.pop();
}

int get(int key)
{
    if (mp.find(key) == mp.end())
        return -1;
    // if key is present in que. then pop that key from that place push it onto end(mtlb hru(height recently used))
    int sz = que.size();
    while (sz--)
    {
        if (que.front() != key)
            que.push(que.front());
        que.pop();
    }
    que.push(key);
    return mp[key];
}

void setii(int key, int value)
{

    if (mp.find(key) != mp.end())
    {
        int sz = que.size();
        while (sz--)
        {
            if (que.front() != key)
                que.push(que.front());
            que.pop();
        }
        que.push(key);
        mp[key] = value;
        return;
    }
    else if (mp.size() == cap)
    {
        int last = que.front();
        que.pop();
        mp.erase(last);
        mp[key] = value;
        que.push(key);
        return;
    }
    que.push(key);
    mp[key] = value;
}

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        LRUCache(1);
        setii(2, 1);
        setii(2, 2);
        debline(get(2));
    }
    return 0;
}