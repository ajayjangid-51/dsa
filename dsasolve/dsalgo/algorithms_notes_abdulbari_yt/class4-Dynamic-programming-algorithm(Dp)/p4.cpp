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

int NumberOfPath(int a, int b)
{

    //code here
    if (a == 1 && b == 1)
    {
        return 1;
    }
    else
    {

        int table[a + 1][b + 1] = {0};
        table[a][b] = 0;
        table[a - 1][b] = 1;
        table[a][b - 1] = 1;
        for (int i = a; i >= 1; i--)
        {
            for (int j = b; j >= 1; j--)
            {
                if (i <= a && j + 1 <= b)
                {
                    table[i][j] += table[i][j + 1];
                }
                else
                {
                    table[i][j] += 0;
                }
                if (i + 1 <= a && j <= b)
                {
                    table[i][j] += table[i + 1][j];
                }
                else
                {
                    table[i][j] += 0;
                }
                // table[i][j] = table[i][j+1]+table[i+1][j];
                // ans[i][j]=ans[i-1][j]+ans[i][j-1];
            }
        }
        return table[1][1];
    }
}
int main()
{

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨
// 💡💡Tip-as yaha ess problem meh bhi apn ne voh "dp"-approach lagayi hai, ki first try to get the result of fundamental-sub-problem mtlb sbse phle apnko last 💡💡
//👿📔imp-Note-point:- as ess problem meh apnko sirf no.-of-solutions pucha tha, thus toh apne ne jo last meh "dp"-approach lagateh hai na ki "taking-stages-decisions" voh apn ne nhi kiya, as apnko simply no.-of-combitorics pucha tha na ki sbse-optimal-combitorics pucha hai.
//📔📔Note-point:- as "greedy" se apn "no.-of-combitorics" nhi bata sktehh hai, mtlb sirf "optimal-result" bata sktehh hai. wheras "dp" meh apn dono cheeze baata sktehh hai, thus isiliy "dp" ka wide hota hai. as q ki "dp" meh apn sare solutions create krke unmeh se optimal-solution pick-up krtehh hai, isiliy.
// ✳️✳️✳️✳️✳️✳️