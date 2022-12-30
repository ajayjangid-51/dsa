#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int xnmodm(int x, int n, int m)
{
    if (n == 0)
        return 1 % m;
    long long u = xnmodm(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1)
        u = (u * x) % m;
    return u;
}

// On applying Fermat-theorm and Eular-thoerm , our xnmodm-fn will be little optimized.
int xnmodm2(int x, int n, int m)
{
    // if(m is prime)  return (1*x)%m;
}
int main()
{
    file();
    cout << xnmodm(2, 8, 17) << endl;
    cout << xnmodm(2, 7, 17) << endl;
    return 0;
}