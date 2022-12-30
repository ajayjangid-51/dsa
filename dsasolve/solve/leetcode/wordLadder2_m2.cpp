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
void findEndWordByBFS(const string &beginWord,
                      const string &endWord,
                      const vector<string> &wordList,
                      unordered_map<string, vector<string>> &children)
{
    unordered_set<string> dict(wordList.begin(), wordList.end()), current, next;
    current.insert(beginWord);
    while (true)
    {
        for (string word : current)
        {
            dict.erase(word);
        }

        for (string word : current)
        {
            string parent = word;
            for (int i = 0; i < word.size(); i++)
            {
                char t = word[i];
                for (int j = 0; j < 26; j++)
                {
                    word[i] = 'a' + j;
                    if (dict.find(word) != dict.end())
                    {
                        next.insert(word);
                        children[parent].push_back(word);
                    }
                }
                word[i] = t;
            }
        }

        if (next.empty())
            return;

        if (next.find(endWord) != next.end())
            return;
        current.clear();
        swap(current, next);
    }

    // return false;
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
        vs dict = {
            // "hot", "dot", "dog", "log", "lot"

        };
        unordered_map<string, vs> mp;
        // findEndWordByBFS("hit", "cog", dict, mp);
        findEndWordByBFS("bb", "ab", dict, mp);
        trav(mp)
        {
            print(x.first);
            trav2(x.second) print(y);
            nline;
        }
    }
    return 0;
}