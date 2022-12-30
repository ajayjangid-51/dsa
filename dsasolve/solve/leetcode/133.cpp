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
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"
#define nline cout << "\n"
#define trav(a) for (auto x : a)
#define trav2(a) for (auto y : a)
#define range(arr) arr.begin(), arr.end()
#define deb(x) cout << #x << " = " << x << endl
#define forn(i, start, n) for (auto i = start; i < n; i++)
#define io_faster ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);

const int MOD = 1000000007;
double PI = 4 * atan(1);

void file()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
}
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
unordered_map<int, Node*> mp;
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        if(mp.count(node->val)) return mp[node->val];
        
        Node* newNode = new Node(node->val);
        mp[newNode->val] = newNode;

        forn(i , 0, node->neighbors.size()){
            newNode->neighbors.push_back(cloneGraph(node->neighbors[i]));
        }
        return newNode;
     
        
    }
};
void Solve()
{
}

int main()
{
    io_faster
    file();
    int t = 1;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}