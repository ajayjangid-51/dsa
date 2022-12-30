#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Push(vector<int> &arr, int x, int &top)
{
    if (top == -1)
    {
        top++;
        // arr.push_back(max(x , arr[top]));

        arr.push_back(x);
    }
    else if (top >= 0)
    {
        top++;
        arr.push_back(max(x, arr[top - 1]));
    }
}
void Pop(vector<int> &arr, int &top)
{
    if (top > -1)
    {
        arr.pop_back();
        top--;
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> arr;
    int top = -1;
    while (N--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int x;
            cin >> x;
            Push(arr, x, top);
        }
        else if (q == 2)
            Pop(arr, top);
        // else cout << *max_element(arr.begin() , arr.end()) << endl;
        else
            cout << arr[top] << endl;
    }
    return 0;
}
