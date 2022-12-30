#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s)
{
    stack<char> st;
    // string::iterator it;
    std::string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        if (*it == '(' || *it == '{' || *it == '[')
        {
            st.push(*it);
        }
        else if (*it == ')' || *it == '}' || *it == ']')
        {
            if (st.top() > -1)
            {
                char x = st.top();

                st.pop();
                if (x == '(')
                {
                    if (*it != ')')
                    {
                        return "NO";
                    }
                }
                else if (x == '{')
                {
                    if (*it != '}')
                    {
                        return "NO";
                    }
                }
                else if (x == '[')
                {
                    if (*it != ']')
                    {
                        return "NO";
                    }
                }
            }
        }
    }
    if (st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
