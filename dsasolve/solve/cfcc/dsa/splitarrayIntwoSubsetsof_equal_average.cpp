#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool fn(int i, int sum, int sz, vector<int> &A, vector<vector<vector<bool>>> &dp)
    {
        if (sz == 0)
            return sum == 0;
        if (i >= A.size())
            return false;
        if (!dp[i][sum][sz])
            return false;

        if (A[i] <= sum)
            if (fn(i + 1, sum - A[i], sz - 1, A, dp))
            {
                return dp[i][sum][sz] = 1;
            }

        if (fn(i + 1, sum, sz, A, dp))
        {
            return dp[i][sum][sz] = 1;
        }

        return dp[i][sum][sz] = 0;
    }

    bool splitArraySameAverage(vector<int> &A)
    {
        int n = A.size();
        int tsum = 0;
        for (auto x : A)
            tsum += x;
        vector<vector<vector<bool>>> dp(n, vector<vector<bool>>(tsum + 1, vector<bool>(n, true)));

        for (int i = 1; i <= sqrt(n); i++)
        {
            if ((tsum * i) % n == 0)
            {
                int s2 = i * tsum;
                s2 /= n;
                if (fn(0, s2, i, A, dp))
                    return 1;
            }
        }
        return 0;
    }
};