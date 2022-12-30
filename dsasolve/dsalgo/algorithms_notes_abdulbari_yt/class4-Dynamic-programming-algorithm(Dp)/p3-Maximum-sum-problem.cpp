// 📦📦 Problem-link:-  📦📦
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

int maxSum(int n)
{
    //code here.
    int table[n];
    memset(table, 0, n);

    table[0] = 0;
    table[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        table[i] = table[i / 2] + table[i / 3] + table[i / 4];
        if (table[i] < i)
        {
            table[i] = i;
        }
    }
    return table[n];
}
int main()
{

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨
// 💡💡Tip- as apn "Dp" meh jo table banatehh hai na, uski jo index , voh apnko as requested-result maana hai, mtlb uss table meh uss index meh result-stored hai about the requested-number's-result, jaise ess problem requested n =12, then mtlb apne table meh at 12th-index pe eska answer stored hai. toh mtlb table ki index apnko aseh samajna hai. 💡💡
// 💡💡Tip-2:- as apn jaise hi "recursive-formula" banale , then simply and exactly apnko apne loop meh same ussi "recursive-formula" ki tarah hi statement likh deni hai. 💡💡 for this:- 🖼️🖼️🖼️  see pic-1 🖼️🖼️🖼️.
// ✳️✳️✳️✳️✳️✳️