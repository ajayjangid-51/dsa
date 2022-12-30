#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    file();
    cout << "input the n" << endl;
    int n;
    cin >> n;
    bool ans = isPrime(n);
    if (ans)
        cout << "yes, " << n << " is Prime-number" << endl;
    else
        cout << "no, " << n << " is not Prime-number" << endl;
    return 0;
}