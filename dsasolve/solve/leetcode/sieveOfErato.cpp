#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int sieveofErato(int n)
{
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
    int count = 0;
    // for(auto x:sieve){
    for (int i = 2; i < n; i++)
    {
        if (sieve[i] == 0)
            count++;
    }
    return count;
}

int main()
{
    file();
    cout << sieveofErato(10) << endl;
    return 0;
}