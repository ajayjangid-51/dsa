// as mtlb ess method meh apn operands ko stack meh include nhi krteh , mtlb operands ko toh directly hi postfix-expression meh assign krtehh hai.
// as apn stack meh unhi operators ko insert krteh hai jinka weight(mtlb precedence) already stack meh present se kaam hona chahiyeh(mtlb chote k upar bada aa skta hai , and bade snd equal k upar element nhi aayega.), and agr jada hota hai and then toh stack-meh-present operators ko nikalna hai and unko postfix-exp meh appedn kr dena hai.. and last meh agr stack is not empty then simply yeh krna hai ki while(!stack.empty()){ postfix.append(stack.top(); stack.pop();}

// and method-2 meh apn operands ko bhi stack meh insert krtehh hai , in the way ki apn operands ko sbse highest-precedence detehh hai. and baki toh sab is same as method1.

// thus toh noww aab apn ess-procedure ko implement krenge mtlb eska code likhenge.. step-by-step.

#include <bits/stdc++.h>
using namespace std;

void PrintString(string string)
{
    int i = 0, length = string.length();
    while (length--)
    {
        cout << string[i] << " ";
        i++;
    }
    cout << endl;
}
int main()
{
    string exp = "a+b*c-d/e";
    int i = 0, length = exp.length();
    char expi = 'x';
    // cout << "the length of string is " << length << endl; // Debugging meh yellow-hover-line ka mtlb abhi yeh line-execute nhi huee hai, mtlb apn jab next-button dabanyenge tab yeh hogi.
    string postfix;
    stack<char> stk;
    while (length--)
    {
        // cout << "the exp[i] is " << exp[i] << endl;
        expi = exp[i];
        // if (exp[i] != '+' || exp[i] != '*' || exp[i] != '-' || exp[i] != '/')
        // if (exp[i] != '+' && '*' && '-' && '/')
        if (exp[i] != '+' && exp[i] != '*' && exp[i] != '-' && exp[i] != '/')
        {
            postfix.push_back(exp[i]);
        }

        else if (exp[i] == '+' || exp[i] == '-')
        {
            if (stk.empty())
            {
                stk.push(exp[i]);
            }

            else if (stk.top() == '*' || stk.top() == '/' || stk.top() == '+' || stk.top() == '-')
            {

                char x = stk.top();
                stk.pop();
                postfix.push_back(x);
            }
        }
        else if (exp[i] == '*' || exp[i] == '/')
        {
            if (stk.top() == '*' || stk.top() == '/')
            // == meh "||" ka use hota hai and
            // != meh "&&" ka use hota hai.
            {
                char x = stk.top();
                stk.pop();
                postfix.push_back(x);
            }
            else
            {
                stk.push(exp[i]);
            }
        }
        i++;
    }
    while (!stk.empty())
    {
        char x = stk.top();
        stk.pop();
        postfix.push_back(x);
    }

    cout << "Printing Strings..." << endl;
    PrintString(exp);
    PrintString(postfix);

    return 0;
}
