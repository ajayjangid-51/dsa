#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    file();
    int a, b;

    // for (int i = 0; i < 12; i++)
    // {
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    // }
    return 0;
}