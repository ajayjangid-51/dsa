// Perfect-number:- a number which is equal to the sum-of-its-all-divisors- excepting it itself:-
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            int rem = n % i;
            if (rem == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    return 0;
}

// dry-run mtlb written-code ko copy meh compline krna and copy meh hi output nikalna.. and trace krna.
// debugging-statement mtlb apn apne code meh kahi kuch print-statements laga sktehh hai for jaane k liyeh ki yaha kya ho rha hai... ya phir mtlb yaha eski value kya aa rhi hai.