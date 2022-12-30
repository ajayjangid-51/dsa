#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void enqueue(int x, stack<int> &s1)
{
    // if (s1.empty())
    // {
    s1.push(x);
    // }
}
void dequeue(stack<int> &s1, stack<int> &s2)
{
    if (!s1.empty())
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int x = s1.top();
                s1.pop();
                s2.push(x);
            }
        }
    }

    s2.pop();
}
void queuefront(stack<int> &s1, stack<int> &s2)
{
    // cout << "hey sexy " << endl;
    // cout << "the s2.top is " << s2.top() << endl;
    if (!s2.empty())
    {
        cout << s2.top() << endl;
    }
    else
    // (!s2.empty())
    {
        if (!s1.empty())
        {
            while (!s1.empty())
            {
                cout << "good" << endl;
                int x = s1.top();
                s1.pop();
                cout << "popped from s1" << endl;

                s2.push(x);
                cout << "x is pushed in s2" << endl;
            }
        }

        cout << s2.top() << endl;
    }
}
int main()
{
    stack<int> s1, s2;

    int q;
    cin >> q;
    while (q--)
    {

        int a;
        cin >> a;
        if (a == 1)
        {
            int x;
            cin >> x;
            enqueue(x, s1);
        }
        else if (a == 2)
        {
            dequeue(s1, s2);
        }
        else if (a == 3)
        {
            queuefront(s1, s2);
        }
    }
    return 0;
}
