// YAHA pe apn Recursion-Function k bareh meh dekhenge:
// AS Recurssion-Function simply voh functions hoteh hai jo apni return-value meh apne aap koi bhi call krteh hai. mtlb yeh mostly as like as Loop-ki tarah ho jata hai. but loop and Recursion-function meh time-variation hota hai.
// As mtlb jo kaam apn iteration-approach(mtlb loop-approach) se kr skteh hai voh kaam apn REcurssion-function-approach se bhi kr skteh hai, but yaha dono approach ki time-complexity meh kafi difference ho skta hai. thus isiliy apnko ek-baar recheck krna hota hai ki jo approach apn ne apply ki hai voh kaise kaam karegi , mtlb kaise execute hogi, thus toh phir apn easily sahi and right approach choose kr skteh hai.

// 💁‍♂️Tip: AS recursion-Concept as deto set hota hai on the tarika of general-formula for jaise factorial-of-a-number( n* (n-1)! ) , ficonacci-series((n-2) + (n-1)) etcc... , Thus mtlb apn directly enn gernal-formulaes ko directly-recursion-function meh daal skteh hai , then apnko correct-answer mil jata hai , thus isiliy yeh Recurrsion-concept se apn esi problems ko simply,easily and shortly solve kr skteh hai. mtlb directly uss general-formula ko recurssion-function-concept as it is put kr skteh hai. as bas Recurssion meh apnko base-condition(recurssion-stopping-condition) ka dhyn rkhna hota hai. as otherwise recurrssion infinite-time run hota rhta hai.

#include <iostream>
using namespace std;

int fnrec1(int p1)
{
    if (p1 < 2)
    {
        return 1;
    }
    else
    {

        return p1 * fnrec1(p1 - 1);
    }
}
int fnrec2_for_fibse(int n)
{
    // if (n == 1 || 0)
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fnrec2_for_fibse(n - 2) + fnrec2_for_fibse(n - 1);
    }
}
int main()
{
    cout << "Recurssion-functions" << endl;
    int a, b;
    cout << "Enter the value for a for the getting the factorial of a " << endl;
    cin >> a;
    cout << "Enter the value for b for the bth ficonacci-term" << endl;
    cin >> b;

    cout << "the value of " << a << " is " << fnrec1(a) << endl;
    cout << "the value of " << b << " th-terms in fibbonacci series is " << fnrec2_for_fibse(b);
    return 0;
}

// 🔥 Functional-Programming 🔥
// functional-programming mtlb ek tarika , ek soch for in terms of coding ki apn bohat sare functions bana leteh hai and phir unn functions ko compose krke , apna program bana leteh hai. thus this of programming ko apn simply functional-programming khteh hai.