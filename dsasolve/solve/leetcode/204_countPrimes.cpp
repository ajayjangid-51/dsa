#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n == 0)
            return 0;
        vector<bool> sieve(n, 0);
        sieve[0] = 1;
        sieve[1] = 1;
        for (int i = 2; i * i < n; i++)
        {
            if (sieve[i])
                continue;
            else
            {
                for (int j = i * i; j < n; j += i)
                {
                    sieve[j] = 1;
                }
            }
        }
        // int count = 0;
        // for (auto x : sieve)
        // {
        //     if (x == 0)
        //         count++;
        // }
        // return count;
        return count(sieve.begin(), sieve.end(), 0);
    }
};
int main()
{
    file();
    return 0;
}