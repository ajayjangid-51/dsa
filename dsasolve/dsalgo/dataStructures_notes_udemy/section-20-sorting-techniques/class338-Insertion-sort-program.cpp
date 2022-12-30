#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class InsertionSorting
{
public:
    void Insertion(vector<int> &v, int index, int e)
    {
        for (int j = index - 1; j > -1; j--)
        {
            if (e < v[j])
            {
                v[j + 1] = v[j];
                v[j] = e;
            }
        }
    }
    void InsertionSort(vector<int> &v)
    {
        for (int i = 1; i < v.size(); i++)
        {
            Insertion(v, i, v[i]);
        }
    }
};

int main()
{
    // file();
    InsertionSorting c;
    vector<int> v = {7, 3, 8, 2, 1, 5};
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    c.InsertionSort(v);
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}

// 😈:but this implementation if not following the best-case time-complexity:- (means Insertion-sort in best-case it is O(n)-only, means the inside loop will not be executed..)
// so toh eske liyeh apn yeh "condition" lagayenge...

/* class InsertionSorting
{
public:
    void Insertion(vector<int> &v, int index, int e)
    {
        for (int j = index - 1; j > -1; j--)
        {
            if (e < v[j])
            {
                v[j + 1] = v[j];
                v[j] = e;
            }
        }
    }
    void InsertionSort(vector<int> &v)
    {
        for (int i = 1; i < v.size(); i++)
        {
            if(arr[i]<arr[i-1])    // *condition-applied*
                Insertion(v, i, v[i]);
        }
    }
}; */