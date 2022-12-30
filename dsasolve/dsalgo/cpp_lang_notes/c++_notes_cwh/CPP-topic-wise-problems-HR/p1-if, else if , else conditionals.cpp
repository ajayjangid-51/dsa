// p1.
/*Given a positive integer , do the following:

If 1<= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n >9 , print Greater than 9.

*/
// as apn yaha simply and directly switch-case bhi use kr skteh hai bcoz switch-case sirf situations k liyeh hotah hai. but apnko yaha if-else condtionals hi use krni hai.

// as apn enn problems meh orr bhi bohat sari choti-choti sikteh hai jaise , cin.ignore()-fn etc..etc..
// #include "iostream"
#include <bits/stdc++.h>
// #include <stdc++.h>
// as apni ess stdc++.h file meh apni sab-ki-sab files included hai , thus esko include krna mtlb unn sab-file ko include krna, thus toh mtlb yeh ek mastam cheez hai, as apn aab yeh stdc++.h-file hi hamesa use krenge as yeh sahi hai esseh toh.
using namespace std;
int main()
{
    double n;
    cout << "Enter the between 1 and 10^9" << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "one" << endl;
    }
    else if (n == 2)
    {
        cout << "two" << endl;
    }
    else if (n == 3)
    {
        cout << "three" << endl;
    }
    else if (n == 4)
    {
        cout << "four" << endl;
    }
    else if (n == 5)
    {
        cout << "five" << endl;
    }
    else if (n == 6)
    {
        cout << "six" << endl;
    }
    else if (n == 7)
    {
        cout << "seven" << endl;
    }
    else if (n == 8)
    {
        cout << "eight" << endl;
    }
    else if (n == 9)
    {
        cout << "nine" << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }
    // cin.ignore()

    return 0;
}

// class70-Vector in Cpp-STL;
// visit this: https://www.geeksforgeeks.org/vector-in-cpp-stl/