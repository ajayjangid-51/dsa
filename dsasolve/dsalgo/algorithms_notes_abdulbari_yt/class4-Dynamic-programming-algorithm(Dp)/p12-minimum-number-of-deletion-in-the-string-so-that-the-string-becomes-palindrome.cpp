// 📦📦 Problem-link:- https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions/0/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&problemStatus=unsolved&page=1&query=category[]Dynamic%20ProgrammingproblemStatusunsolvedpage1category[]Dynamic%20Programming 📦📦
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
// int fn(int i, int j, string str)
// {
//     if (j <= i)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int z = i + 1; z < j; z++)
//         {
//             if (str[i] == str[z])
//             {
//                 return 1 + fn(i + 1, z, str);
//             }
//             // else
//         }
//         return fn(i + 1, j, str);
//     }

//     // return 0;
// }

int LPSviaDp(string str)
{
    int n = str.length();
    int mat[n][n];
    fo(i, 0, n) mat[i][i] = 1;
    fo(cl, 2, n + 1)
    {
        fo(i, 0, n - cl + 1)
        {
            int j = i + cl - 1;
            if (str[i] == str[j] && cl == 2)
                mat[i][j] = 2;
            else if (str[i] == str[j])
            {
                mat[i][j] = mat[i + 1][j - 1] + 2;
            }
            else
            {
                mat[i][j] = max(mat[i][j - 1], mat[i + 1][j]);
            }
        }
    }
    return mat[0][n - 1];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string str;
        cin >> str;
        //📔📔Note-point:- as yeh "minimization"-problem hai, and esko apn "greedy" se bhi solve kr sktehh hai, but agr apn esko sahi se dekhe toh mtlb koi legit tarika nhi yaha "greedy" follow krne ka , mtlb apne simply characters and yaha minimum-deletions k liyeh sbhi characters ka weightage same hi hai. so toh mtlb yaha apnko "dp" hi follow krni hai.
        // so mtlb we can also say that we want that longest-sub-sequence( LS(mtlb longest-sub-sequence)) which is palindrome. so toh mtlb we can return the answer as ( N - LS.length()), toh ek simple and naive approach toh yeh haki apn sari possible sub-sequences find krle and unko palidrome k liyeh check krle.. and then atlast simpy sub-sequcence-palindromes meh longest sub-sequence-palindrome mtlb "LPS(longest-palindromic-sub-sequence" ko select kr lena hai.

        /* bad-code
    int N = 13;
    string str = "geeksforgeeks";

    int x = fn(0, N, str);
    // deb(x);
    cout << N - ((2 * x) + 1) << endl;
    */
        cout << (N - LPSviaDp(str)) << endl;
    }

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨

// ✳️✳️✳️✳️✳️✳️