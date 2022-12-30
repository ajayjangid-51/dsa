// 📦📦 Problem-link:- https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1category[]Dynamic%20Programming 📦📦
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

int minOperations(string str1, string str2)
{
    // Your code goes here

    int m = str1.length(), n = str2.length();
    int len = 0;
    int mat[m + 1][n + 1] = {};
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (str1[i - 1] == str2[j - 1])
                mat[i][j] = 1 + mat[i - 1][j - 1];
            else
                mat[i][j] = max(mat[i - 1][j], mat[i][j - 1]);
        }
    }
    return (m - len) + (n - len);
}

int main()
{

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨
// 💡💡Tip- as yaha ess problem meh toh just apnko trick lagani thi to get the answer , and voh trick hai based upon the length of "LCS" , thus toh ess problem ko solve krne k liyeh apne "LCS" honi chahiyeh, and "LCS" toh "DP"-approach se find hoti hai, thus toh mtlb yeh problem bhi "dp"-approach se hi hogi , mtlb voh "LCS" apnko "DP" se hi nikalna hoga,, okay toh apnko dhyn rkna hai.. ki kahi koi problem simply trickly toh solve nhi ho rhi hai, mtlb ki main-part apnko aata hi hai, and bas vaha apnko trick lagani hoti hai.  💡💡
//👿📔imp-Note-point:- "Dp" meh bohat sari problem sub-sequences se related hoti hai, jaise yeh problem khud hi hai. and mtlb bohat sari problems "sub-sequces" k concept solve hoti hai.
// ✳️✳️✳️✳️✳️✳️