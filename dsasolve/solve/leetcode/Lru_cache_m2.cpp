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
unordered_map<int, pii> mp;
int cap;
int timer;

void LRUCache(int capacity)
{
    cap = capacity;
    timer = 1;
    mp.clear();
}

int get(int key)
{
    if (mp.find(key) != mp.end())
    {
        mp[key].second = timer;
        timer++;
        return mp[key].first;
    }
    else
        return -1;
}

void set(int key, int value)
{
    if (mp.find(key) != mp.end())
    {
        mp[key].second = timer;
        timer++;
    }
    else
    {
        if (mp.size() < cap)
        {
            mp[key] = {value, timer};
            timer++;
        }
        else
        {
            int mini_time = INT_MAX;
            int mini_time_key = -1;
            trav(mp)
            {
                if (x.second.second < mini_time)
                {
                    mini_time = x.second.second;
                    mini_time_key = x.first;
                }
            }
            mp.erase(mini_time_key);
            mp[key] = {value, timer};
            timer++;
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