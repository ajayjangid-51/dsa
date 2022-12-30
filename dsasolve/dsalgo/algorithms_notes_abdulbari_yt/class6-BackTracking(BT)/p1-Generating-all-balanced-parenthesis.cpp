// 📦📦 Problem-link:- https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1/?category[]=Backtracking&category[]=Backtracking&page=1&query=category[]Backtrackingpage1category[]Backtracking#  📦📦
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define umap unordered_map
#define ps(x) printf("\n%s", x)
#define pi(x) printf("\n%d", x)
#define si(x) scanf("%d", &x)
#define ss(x) scanf("%s", &x)
#define deb(x) cout << #x << " = " << x << endl
#define fo(i, start, n) for (auto i = start; i < n; i++)
#define trav(a) for (auto x : a)
#define range(arr) arr.begin(), arr.end()
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vi2d;
typedef set<int> si;
typedef unordered_map<int, int> umapii;
typedef unordered_map<char, int> umapci;
typedef unordered_map<ll, ll> umapll;
typedef unordered_map<string, int> umapsi;
typedef map<int, int> mpii;
class Solution
{
public:
    vector<string> vcst;
    void countparen(int pos, int n, int open, int close)
    {
        static char str[100];
        if (close == n)
        {
            vcst.push_back(str);
            return;
        }
        else
        {
            if (open < n)
            {
                str[pos] = '(';
                countparen(pos + 1, n, open + 1, close);
            }
            if (open > close)
            {
                str[pos] = ')';
                countparen(pos + 1, n, open, close + 1);
            }
        }
    }
    vector<string> AllParenthesis(int n)
    {
        // Your code goes here
        countparen(0, n, 0, 0);
        return vcst;
    }
};
int main()
{

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨

// ✳️✳️✳️✳️✳️✳️