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
#define linebreak cout << "_______________________________" << "\n""\n"
#define linebreak2(x) cout << "🟢" << #x << " = " << x << "________________🟢 " << endl
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
string intToRoman(int A) {
    int n = A;
      map<int,string>  mp;
        mp[1] = "I";
        mp[2] = "II";
        mp[3] = "III";
        mp[4] = "IV";
        mp[5] = "V";
        mp[6] = "VI";
        mp[7] = "VII";
        mp[8] = "VIII";
        mp[9] = "IX";
        mp[10] = "X";
        mp[20] = "XX";
        mp[30] = "XXX";
        mp[40] = "XL";
        mp[50] = "L";
        mp[60] = "LX";
        mp[70] = "LXX";
        mp[80] = "LXXX";
        mp[90] = "XC";
        mp[100] = "C";
        mp[200] = "CC";
        mp[300] = "CCC";
        mp[400] = "CD";
        mp[500] = "D";
        mp[600] = "DC";
        mp[700] = "DCC";
        mp[800] = "DCCC";
        mp[900]= "CM";
        mp[1000] = "M";
        mp[2000] = "MM";
        mp[3000] = "MMM";
        vector<string> v;
        string ans;
        int it = 1;
        while(n!=0){
            int digit = n%10;
            v.push_back(mp[digit*it]);
            n/=10;
            it*=10;
        }
        reverse(v.begin() , v.end());
        for(auto x:v) ans+= x;
        return ans;
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