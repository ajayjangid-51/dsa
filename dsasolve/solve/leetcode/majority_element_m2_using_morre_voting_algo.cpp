#include <bits/stdc++.h>
using namespace std;
int majorityElement(const vector<int> &A)
{
    // this  Moore’s Voting Algorithm-solution:-
    int me_index = 0, cnt = 1;
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] == A[me_index])
            cnt++;
        else
            cnt--;
        if (cnt == 0)
        {
            me_index = i;
            cnt = 1;
        }
    }
    return A[me_index];
}
