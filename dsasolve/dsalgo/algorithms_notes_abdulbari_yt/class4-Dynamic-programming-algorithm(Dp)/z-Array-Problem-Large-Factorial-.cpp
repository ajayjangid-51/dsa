// 📦📦 Problem-link:- https://practice.geeksforgeeks.org/problems/large-factorial4721/1#  📦📦
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

// long long fac(int num){
//     if(num ==0 || num== 1){
//         return 1;
//     }
//     else{
//         int rtn=num;
//         for(int i = num-1;i>=1;i--){
//             rtn*= i;
//         }
//         return rtn%1000000007;
//     }
// }
vector<long long> factorial(vector<long long> a, int n)
{
    // vector<long long> rtn;
    // for(int i =0;i<n;i++){
    //     rtn.push_back(fac(a[i]));
    // }
    // return rtn;
    int maxi = *max_element(a.begin(), a.end());
    long long arr[maxi + 1];
    arr[0] = 1;
    for (int i = 1; i < maxi + 1; i++)
    {
        arr[i] = (arr[i - 1] * i) % 1000000007;
    }
    vector<long long> rtn;
    for (int i = 0; i < n; i++)
    {
        rtn.push_back(arr[a[i]]);
    }
    return rtn;
}

;
int main()
{

    return 0;
}

//🧧Important-things🧧
// 🎗️🎗️🎗️🎗️🎗️🎗️🎗️🎗️💠
// 🌈🌈 💡Hint💡 or Default-Solution or Efficient-Approach or Idea:🌈🌈
// 💡💡Tip-as toh Tip-of-the-problem mtlb Tip-from the problem yeh hai ki hai ki agr apne aglo ki time-limit excedd aa rhi hai, then mtlb apnko apne algo ko thode sahi se design krna hoga mtlb given "time-compleixty" and "space-complexity" ko dhyn meh rkhtehh huyehh krna hoga. now agr apnko simply and easily given complexities ko samajna hai, then simply the put value-of-our-given-or-not-given-Example-Problem into that given complexities and phir dekhana hai ki kya essa koi procedure ho skta hai, jismeh apnko itna hi kaam krna pde.. jaise yaha ess problem meh given time is O(max(A)+N) , so toh agr esko apne example se relate kre then mtlb for that example the time-complexity will be O(6+3), thus toh eska mtlb apnko phle 6-elements pe working krni hogi and then phir 3-elements mtlb size-of-array pe working krni hai. thus toh yaha se hi idea lg jata hai ki apn ek O(max(array))-size ka array lelenge and then uss araray meh sbhi factorials store krlenge.. and atlast loop ko "size-of-array(n)"-times chala krke required-value extract krlenge.. so allover apnko given "complexities" ka asehi use krna hai for getting the idea to construct the better "algorithm".  💡💡
// 💡💡Tip-2:- as agr time-comeplexity meh "+" sign hai then it means ki algo meh 2(or multiple)-loops alg-alg honge or ya phir vaha merging use ho rhi hogi.   💡💡

// ✳️✳️✳️✳️✳️✳️🚨 Trick-Section (Trick in the Problem):- 🚨

// ✳️✳️✳️✳️✳️✳️