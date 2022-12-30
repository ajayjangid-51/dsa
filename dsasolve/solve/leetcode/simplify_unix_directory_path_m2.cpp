string simplifyPath(string A)
{
    stack<string> stk;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        string s;
        if (A[i] == '/')
            continue;
        while (i < n and A[i] != '/')
        {
            s.push_back(A[i]);
            i++;
        }
        if (s == "..")
        {
            if (!stk.empty())
                stk.pop();
        }
        else if (s == ".")
            continue;
        else
            stk.push(s);
    }
    string ans("/");
    stack<string> stk2;
    while (!stk.empty())
    {
        stk2.push(stk.top());

        stk.pop();
    }
    while (!stk2.empty())
    {
        ans += stk2.top() + '/';
        stk2.pop();
    }
    if (ans.size() > 1)
        ans.pop_back();
    return ans;
}
