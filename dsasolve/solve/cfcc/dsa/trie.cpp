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
#define all(x) x.begin() x.end()
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak1 cout << "_______________________________" \
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
struct TrieNode
{
    TrieNode *v[26] = {NULL};
    bool we = 0;
    // TrieNode(char c) : v[c - 'a'](NULL) {}
};
class Trie
{
private:
    TrieNode *root = NULL;

public:
    Trie()
    {
        root = new TrieNode;
    }

    void insert(string word)
    {
        // debline(word);
        TrieNode *currNode = root;
        for (int i = 0; i < word.size(); i++)
        {
            if (currNode->v[word[i] - 'a'])
            {
                currNode = currNode->v[word[i] - 'a'];
            }
            else
            {
                // print(word[i]), nline;
                // deb((word[i] - 'a'));
                currNode->v[word[i] - 'a'] = new TrieNode;
                currNode = currNode->v[word[i] - 'a'];
            }
        }

        currNode->we = true;
    }
    bool find(string word)
    {
        debline(word);
        int i = 0;
        TrieNode *currNode = root;
        while (i < word.size() and currNode->v[word[i] - 'a'])
        {
            deb(word[i]);
            // debline(word[i]);
            currNode = currNode->v[word[i] - 'a'];
            i++;
        }
        // deb(i);
        if (i == word.size())
        {
            // deb(i);
            // print("😀");
            if (currNode->we)
                return 1;
        }
        return 0;
    }
    bool startsWith(string prefix)
    {
        int i = 0;
        TrieNode *currNode = root;
        while (i < prefix.size() and currNode->v[prefix[i] - 'a'])
        {
            currNode = currNode->v[prefix[i] - 'a'];
            i++;
        }
        if (i == prefix.size())
        {
            return 1;
        }
        return 0;
    }
    TrieNode *getroot()
    {
        return root;
    }
};
void solve()
{
    // vs words = {"cat", "cats", "and", "sand", "dog"};
    // string s("catsanddog");
    Trie trie;
    trie.insert("apple");
    bool ans = (trie.find("apple"));

    deb(ans);

    // trie.find("app");
    // trav(words)
    // {
    //     trie.insert(x);
    // }
    // deb(trie.find("cat"));
    // deb(trie.find("cad"));
    // deb(trie.find("cad"));
    // trie.insert("cats");

    // TrieNode *rt = trie.getroot();
    // deb(rt);
    // trav(rt->v) print(x), nline;
    // linebreak1;
    // deb(rt->we);

    /* // TrieNode *t1 = new TrieNode;
// t1->we = 1;
// deb(t1->we);
// t1->v[3] = new TrieNode;
// t1->v[4] = new TrieNode;
// t1->v[8] = new TrieNode;
// t1->v[3]->we = 1;
// t1->v[3]->v[4] = new TrieNode;
// linebreak1;
// trav(t1->v) print(x), nline;
// linebreak1;
// deb(t1->v[3]->we); */
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