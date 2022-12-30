// problem-link:- https://practice.geeksforgeeks.org/problems/b6b608d4eb1c45f2b5cace77c4914f302ff0f80d/1#
#include <bits/stdc++.h>
using namespace std;
long long smallestpositive(vector<long long> array, int n)
{
    // code here
    sort(array.begin(), array.end());
    long long res = 1;
    for (int i = 0; i < n && array[i] <= res; i++)
    {
        res += array[i];
    }
    return res;
}
int main()
{

    return 0;
}