//🔥💲🍕 AS Now YAHA apn "Parenthesis-Matching"-phenomenon k bareh meh dekhenge...  🍕💲🔥
// as "Parenthesis-Matching" k bareh meh allover apnne Parenthesis-matching-audios meh dekh hi liya hai.
// toh now aab apn "directly" "parenthesis-Matching" ko implement hi krteh hai mtlb code hi krtehh hai.
#include <bits/stdc++.h>
using namespace std;

int ParenthesisChecker(string str)
{
    stack<char> stk;
    int i = 0, length = str.length();
    while (length--)
    {
        if (str[i] == '(')
        {
            stk.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (stk.empty())
            {
                cout << "NO , it is not Balanced as stk is already empty means there is extra closing-brackets " << endl;
                return -1;
            }
            stk.pop();
        }
        i++;
    };

    //🍕
    if (stk.empty())
    {
        cout << "Yes, it is Balanced" << endl;
        return 1;
    }
    else
    {
        cout << "NO, Not Balanced" << endl;
        return -1;
    }
    //  🍕
    // 🍕 this whole can be written as in one line 🍕
    // return stk.empty() ? "Yes , it Balanced" : "No, it not Balanced";
    // return stk.empty() ? 1 : -1;
}
void Display_String(string str)
{
    // as String ko apn easily as like as array ki tarah iterate kr sktehh hai.::
    int i = 0, length = str.length();
    while (length--)
    {
        cout << str[i++] << " "; // as yaha yeh i++ , ka mtlb ki yeh i meh +1 hoga after execution of this sub-statement. toh mtlb apn phir agli statement meh "i++" likhleni koi jarurat nhi hai. as q ki dono ek hi baat hai, toh aab hamesa phli baat ko hi follow krenge...
    }
    cout << endl;
}
int main()
{
    //🍕🍕 char *exp  = "((a+b)*c)";  as apn esseh likh k bhi heap meh store kr sktehh hai. toh aab se apn hamesa essi hi cheezo ko store krenge. takki apni pointers and heap se kafi acchi dosti hojayehh.. as q ki yeh kafi acchi acchi kaam aati hai. 🍕🍕
    string exp = "(((a+b)+c)*d)";
    string exp2 = "(((a+b)+c)*d)))";
    string exp3 = "(((a+b)+c*)d)";

    Display_String(exp);
    Display_String(exp2);
    ParenthesisChecker(exp);
    ParenthesisChecker(exp2);
    ParenthesisChecker(exp3);

    return 0;
}