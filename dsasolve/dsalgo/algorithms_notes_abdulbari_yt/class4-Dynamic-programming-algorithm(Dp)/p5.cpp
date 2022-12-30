#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 1, y = 0, z = 3;
    cout << "hello ji" << endl;
    if (x && (++y || (z % x == 0)))
        cout << x + y + z;
    else
        cout << x + y + z + 1;
    return 0;
}