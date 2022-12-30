#include <bits/stdc++.h>
using namespace std;

int Maxinstack(stack<int> p1)
{
    int max = p1.top();
    while (p1.top() != -1)
    {
        if (max < p1.top())
        {
            max = p1.top();
        }
        p1.top()--;
    }
    return max;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    stack<int> s;
    while (N--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int q12;
            cin >> q12;
            s.push(q12);
        }
        else if (q == 2)
        {
            s.pop();
        }
        else
        {
            cout << Maxinstack(s) << endl;
        }
    }
    return 0;
}
