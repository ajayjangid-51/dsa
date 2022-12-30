//🔥💲🍕 as now apn "String-Validation" dekhenge mtlb yeh dekhenge ki "String" valid hai ya nhi hai as per the applied-condition:- 🍕💲🔥
// as jaise:- apn jab kisi-website pe apna accout create krteh hai then vaha username-fill meh and or password-fill meh apnko mention hota hai ki username can't-contain special-characters , hypen , etc..etcc  then mtlb yeh apne username-String pe ek validation-condition hai mtlb yeh condition agr fullfill hai then mtlb yeh string valid hai, otherwise yeh valid nhi hai. thus toh yaha pe apn yeh String-Validation-Checker hi banayenge..

// so toh yaha pe apni String pe Validation-Condition yeh hai ki string meh koi special-characters nhi hone chahiyehh mtlb string meh sirf uppercase-lowercase alfabets and numbers ho sktehh hai. and agr enke alava string meh koi aurr characters hai then yeh String Valid nhi hai.

// AS toh String-Validation krne k liyeh mainly 2-methods hai:-
// 1. via simply checking the strings-elements one-by-one that they are in the particular-range or not and any one-of-it in not in the range then we can directly say that "String-is-not-Valid"
// 2. using-regular-expressions

#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ps(x) printf("\n%s", x);
#define pi(x) printf("\n%d", x);
#define si(x) scanf("%d", &x);
#define ss(x) scanf("%s", &x);
#define debug(x) cout << #x << " = " << x << endl;
#define fo(i, start, n) for (int i = start; i < n; i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pair<int, int>> vi2d;
typedef map<int, int> mpii;
typedef set<int> si;

bool isValid(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        // if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))

        /*
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
        {
            // cout << str[i] << endl;
            // cout << "hello" << endl;
            i++;
            continue;
            // return 0;
        }
        else
        {
            return 0;
        }
        // ✔️✔️✔️
        */

        if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 48 && str[i] <= 57))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str[] = "ajay";
    bool a = isValid(str);
    debug(a);

    return 0;
}