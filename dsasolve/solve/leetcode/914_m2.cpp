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
bool hasGroupsSizeX(vector<int> &deck)
{
    int arr[10000] = {0};
    sort(deck.begin(), deck.end());
    for (auto x : deck)
    {
        arr[x]++;
    }

    int g = -1;
    int first;
    for (int i = 0; i < 10000; i++)
    {

        if (!arr[i])
            continue;
        cout << "arr[i] = " << arr[i] << endl;
        cout << " the g = " << g << endl;
        if (g == -1)
        {
            g = -2;
            first = arr[i];
            continue;
        }
        int gcc;
        if (g == -2)
        {

            gcc = gcd(first, arr[i]);
            g = gcc;
            continue;
        }
        else
            gcc = gcd(g, arr[i]);
        cout << " the gcc = " << gcc << endl;

        if (gcc != g)
            return 0;
        g = gcc;
    }
    cout << " g= " << g << endl;
    if (g < 2)
        return 0;
    return 1;
}
int main()
{
    file();
    vector<int> deck = {1, 1};
    cout << hasGroupsSizeX(deck) << endl;
    return 0;
}