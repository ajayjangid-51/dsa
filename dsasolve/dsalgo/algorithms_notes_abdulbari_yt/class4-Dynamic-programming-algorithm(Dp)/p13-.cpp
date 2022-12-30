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

int nthStair(int n)
{
    //  Code here
    if (n <= 2)
    {
        return n;
    }
    else
    {
        int arr[n + 1] = {0};
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 2;
        for (int i = 3; i <= n; i++)
        {

            if (arr[i - 1] == arr[i - 2])
            {
                arr[i] = 1 + arr[i - 1];
                deb(arr[i]);
            }
            else
            {
                arr[i] = max(arr[i - 1], arr[i - 2]);
            }
        }
        return arr[n];
    }
}
int main()
{
    // cout << nthStair(4) << endl;
    deb(nthStair(4));

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨
// "dp" says that solve in the stages , mtlb ek time pe ek stage ko consider kro.. mtlb jaise,
// as toh agr apne pass only one egg, hoga tab apnko 1st-floor se start krna hai, and droppoing kr krke check krenge.. thus toh yaha minimum-of-trails toh apnko equal to voh-critical-floor-no. k equal hi krne honge.. (whereas yaha "critical"-floor mtlb voh highest-floor jaha se faik ne pe "egg" nhi tuta..)
// and now suppose ki apne pass 2-eggs, then apn minimum-trails k liyeh yeh aseh krenge ki
// and yaha worst-case ka mtlb ki egg syad only "last-florr" pe jake hi tuta ho, then vaha uss condition meh apnko usko find krne hai "minimum-trails" to do, suppose jaise egg 5th-floor pe jake break hota ho, toh yaha apnko 5-trials krne honge,, and suppose ki egg break hota on "7th"-florr then apnko 7-trails krne honge, now toh baat yeh hai ki koi bhi possible-case mtlb sbhi-possible-cases k liyeh apnko minimum-of-attempts batanee.. thus toh yaha agra apne pass 1-egg hoga, toh tab apnko minimum "k"-trails toh krne honge for any-possible-case.
// ✳️✳️✳️✳️✳️✳️