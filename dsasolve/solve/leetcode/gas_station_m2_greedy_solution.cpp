#include <bits/stdc++.h>
using namespace std;

// greedy-solution, bas yehi hai ki jo bhi gas[i] and need[i] ki value hai, usko consider krtehh chalo and , and aage agr "tank" ki value -ive hoti hai, toh apn basically, simply "start-index" ko as a "i+1" lelenge... (aab but question yeh uthaa hai ki "i+1" hi apn q le rhe hai, mtlb apn previous-start and i+1  k bich ki bhi koi bhi value le sktehh hai. toh eska javab nhi hai, q ki greedy-solution ka reason dena thoda lamba hoga,(mtlb thoda copy meh counter-usecases consider krke explanation de sktehh hai.),esliy apn kafi baar greedy-solution as a fact ki tarah bhi treat kr letehh hai. and agr apn reason samjane ki kosis kre toh apn aseh bol sktehh hai ki apn copy meh some possible-counter-cases consider krke reason de sktehh hai.).
int canCompleteCircuit(const vector<int> &A, const vector<int> &B)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < A.size(); i++)
    {
        sum1 += A[i];
        sum2 += B[i];
    }
    if (sum1 < sum2)
        return -1;
    int tank = 0;
    int start = 0;
    for (int i = 0; i < A.size(); i++)
    {
        tank += (A[i] - B[i]);
        if (tank < 0)
        {
            start = i + 1;
            tank = 0;
        }
    }
    return start;
}
