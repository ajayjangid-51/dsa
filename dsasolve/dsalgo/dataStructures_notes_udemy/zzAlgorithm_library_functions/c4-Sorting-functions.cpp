//🔥💲🍕 4. Sorting-functions (mtlb Functions-for-Sorting) 🍕💲🔥
//💲🍕 1.sort()-function:- 🍕💲
// iterator mtlb address mtlb pointer hi.

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    vi varr = {4, 6, 3, 8, 32, 21, 32, 3, 32};
    sort(varr.begin(), varr.end());
    for (int i = 0; i < varr.size(); i++)
    {
        // cout << endl;
        cout << varr[i] << " ";
        // cout << endl;
    }
    return 0;
}
