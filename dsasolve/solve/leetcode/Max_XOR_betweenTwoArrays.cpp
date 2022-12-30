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
struct TrieNode
{
    bool end = 0;
    TrieNode *next[2] = {0};
};
void Insert(TrieNode *root, int word)
{
    TrieNode *p = root;
    for (int i = 31; i >= 0; i--)
    {
        int leftbit = (word >> i) & 1;
        if (p->next[leftbit] == NULL)
        {
            p->next[leftbit] = new TrieNode;
        }
        p = p->next[leftbit];
    }
}
bool Search(TrieNode *root, int word)
{
    TrieNode *p = root;
    for (int i = 31; i >= 0; i--)
    {
        int leftbit = (word >> i) & 1;
        if (p->next[leftbit] == 0)
            return 0;
        p = p->next[leftbit];
    }
    return p->end;
}
int maxXor(TrieNode *root, int num)
{
    int maxxor = 0;
    TrieNode *p = root;
    for (int i = 31; i >= 0; i--)
    {
        int leftbitoposite = ((num >> i) & 1) ? 0 : 1;
        if (p->next[leftbitoposite])
        {
            maxxor <<= 1;
            maxxor |= 1;
            p = p->next[leftbitoposite];
        }
        else
        {
            maxxor <<= 1;
            maxxor |= 0;
            p = p->next[!leftbitoposite];
        }
    }

    return maxxor;
}
// int solve(vector<int> &A, vector<int> &B)
// {
// }

int main()
{
    io_faster
    file();
    int t = 1;
    //	cin >> t;
    while (t--)
    {
        // solve();
        TrieNode *root = new TrieNode;
    }
    return 0;
}