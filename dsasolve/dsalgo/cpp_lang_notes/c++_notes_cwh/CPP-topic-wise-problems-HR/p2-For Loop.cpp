// p2.
/*  use a for loop to increment a variable through a range
p2-link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?h_r=next-challenge&h_v=zen
*/
//  inclusive interval[a , b] ka mtlb ki a and b bhi included hai mtlb it is same like closed-bracket.

// 🔥🔥 problem solve hogi kaise nhi apn sare din, raat uski k solution k bareh meh sochenge na , solution paka and sure milega. bas problem-question ko sahi se samaj na hai. 🔥🔥

#include <iostream>
#include <cstdio>
// as yeh cstdio-module-file same deto stdio.h wali file hi hai, bas cPP meh esko cstdio naam rkh diya gaya hai. and esseh apn mainly input/output-streams k liyeh use krteh hai. and as apnko yahi cstudio k i/o-stream functions use krne chahiyeh yeh multiple inputs k liyeh fast hai.

using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number between 1 and 10^9" << endl;
    cin >> a >> b; // as yeh new-line meh input lega one-by-one.
    // cout << "all godd";
    for (a; a <= b; a++)
    {
        // as phle apnkko ek raw-algorithm bana lena hota hai q ki phir usko code meh apply krna bohat aasaan ho jata hai.
        if (a == 1)
        {
            cout << "one" << endl;
        }
        else if (a == 2)
        {
            cout << "two" << endl;
        }
        else if (a == 3)
        {
            cout << "three" << endl;
        }
        else if (a == 4)
        {
            cout << "four" << endl;
        }
        else if (a == 5)
        {
            cout << "five" << endl;
        }
        else if (a == 6)
        {
            cout << "six" << endl;
        }
        else if (a == 7)
        {
            cout << "seven" << endl;
        }
        else if (a == 8)
        {
            cout << "eight" << endl;
        }
        else if (a == 9)
        {
            cout << "nine" << endl;
        }
        else if (a > 9)
        {
            if (a % 2 == 0)
            // as %(modulus)-operator apnko LHS/RHS ki remainder-value deta hai.
            {
                cout << "even" << endl;
                // cout << a % 4;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
// 🔥🔥 problem solve hogi kaise nhi apn sare din, raat uski k solution k bareh meh sochenge na , solution paka and sure milega. bas problem-question ko sahi se samaj na hai. 🔥🔥

// 👍 Raw-algo::
// if a
// == 1 print one if a == 2 print two if a == 2 print two....son onn.else
