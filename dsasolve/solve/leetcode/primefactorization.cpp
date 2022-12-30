#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
vector<int> primefactorization(int n)
{
    vector<int> v;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        v.push_back(n);
    return v;
}
int main()
{
    file();
    cout << "input the number for its Prime-factorization:-" << endl;
    int n;
    cin >> n;
    vector<int> ans = primefactorization(n);
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}