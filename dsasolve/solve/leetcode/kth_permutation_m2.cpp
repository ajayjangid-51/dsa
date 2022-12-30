#define vi vector<int>
string s;
vi v;

int factorial(int n, int k)
{
    if (n == 1 or n == 0)
        return 1;
    int ans = n;
    n--;
    while (n != 0)
    {
        if (ans > k)
            return ans;
        ans *= n;
        n--;
    }
    return ans;
}

void fn(int n, int k)
{
    if (n == 1)
    {
        // s.push_back(v[0]);
        s += to_string(v[0]);
        v.erase(v.begin());
        return;
    }
    int facto = factorial(n - 1, k);
    int index = k / facto;
    if (index == 0)
    {
        // s.push_back(v[0]);
        s += to_string(v[0]);

        v.erase(v.begin());
        fn(n - 1, k);
    }
    else
    {

        int rem = k % facto;
        if (rem == 0)
        {
            index = index - 1;
            rem = factorial(n - 1, k);
        }

        // s.push_back(v[index]);
        s += to_string(v[index]);

        v.erase(v.begin() + index);
        fn(n - 1, rem);
    }
}
string getPermutation(int A, int B)
{
    v.clear();
    s.clear();
    for (int i = 1; i <= A; i++)
    {
        v.push_back(i);
    }
    fn(A, B);
    return s;
}