int solve(string A)
{
    stack<char> stk;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')
            stk.push('(');
        else
        {
            if (stk.empty())
                return 0;
            else
                stk.pop();
        }
    }
    // if(stk.empty()) return 1;
    // else return 0;  or
    return stk.empty();
}
