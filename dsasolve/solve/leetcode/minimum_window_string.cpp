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
#define deb(x) cout << #x << " = " << x << endl
#define debpair(pair) cout << #pair << ".first = " << pair.first << " " << #pair << ".second = " << pair.second << endl
#define debline(x) cout << "👉Line-" << __LINE__ << ": " << #x << " = " << x << endl
#define linebreak cout << "_______________________________" \
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
void solve()
{
    string s = "ADOBECODEBANC";
    string t = "ABC"; // here our min_cnt = 3, as yaha min_count mtlb minimuly apnko yeh etne characters chahiyehh.
    unordered_map<int, int> mp1;
    trav(t)
    {
        mp1[x]++;
    }

    // two-pointer method + hashmap.
    unordered_map<int, int> mp2;
    int cnt = 0;
    int start = 0; // here "start" is first-pointer(of two pointers)
    int minlen = INT_MAX;
    int startindex = -1;

    for (int j = 0; j < s.size(); j++) // here "j" is second-pointer( of two-pointers)
    {
        mp2[s[j]]++;
        // if(current-character is legit mtlb is needed-required-character but not extra-character then we increment our min_cnt).
        if (mp2[s[j]] <= mp1[s[j]])
        {
            cnt++;
        }
        if (cnt == t.length())
        {
            // so now moving pointer-i to discard all non-required or extra-character from the current-substring(which is from index i to j).
            while (mp2[s[start]] > mp1[s[start]])
            {
                mp2[s[start]]--;
                start++;
            }
            int len = j - start + 1;
            if (minlen > len)
            {
                minlen = len;
                startindex = start;
            }
        }
    }
    if (startindex == -1)
    {
        debline("soorry");
    }
    else
    {
        debline(s.substr(startindex, minlen));
    }
    // yaha main-idea of solving this problem is yeh hi hai ki apnko ek baar required-substring milne se apn left-side se discard uhi krna nhi chalu krdenge, mtlb apn discard tabhi krenge jab uss character ki excess hogi otherwise discard bilkul hi nhi krenge..(toh mtlb apn question k starting time meh sahi the ki meh agr esko discard krdunga toh syd yeh aage mile ya na mile , toh solution or answer yehi tha ki agr voh character excess meh hai then tabhi apn discard krenge otherwise nhi krenge.. bas itni hi baat thi and yeh question mainly two-pointer-algo ka hai, but jo discard krne and na krne wali cheez apnko map se hi pata chl skti hai, toh isiliy yeh question ka map ka bhi kafi accha question hai.).

    // /* *-------------------------------------------------------------------------------* */  method2: apn ess problem ko sliding-window-technique se bhi kr sktehh hai.
    // visit-this for this:-https://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/
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
/* 
 // mtlb apn from left-se jo mtlb kaam ka character nhi hai uska hatatehh chlenge..(whereas jo character patter-ka-character nhi hai voh toh obviously kaam ka nhi hai and pattern-ka-character jo ki extra meh hai voh bhi kaam ka nhi hai and ), toh mtlb apn dono bina kaam k character discard(or mtlb remove ) krenge. and saath hi meh apni jo valid-substring hai in actual-string uske liyeh usmeh characters k basis apn map-update krtehh rhenge.. and now discard krtehh-krtehh agr koi apnko kaam-ka-character discard krna pada toh apn phir pointer-j ko aage move krenge for fullfilling that kaam-ka-character which we have discarded.
 */