/* 🌟 AS YAHA pe apn debugging krna dekhenge.. mtlb programm meh se bug find-out krna dekhenge.. as where bug mtlb program chal toh raha hai, mtlb koi error or warning nhi de raha hai, but thoda diff-tarah se chal raha hai mtlb apne according perfectly nhi chal raha, apn jaise chahteh hai vase nhi chal raha..  and as toh uss particular cheez ko , code ko bug khteh hai , and as debugging krne ka mtlb hai bug ko nikalna or mtlb bug ko sahi krna..🌟 */
// and now debugging kuch ess tarah ki jati hai.. As debugging meh programm ko thukdo-thukdo meh , line-by-line meh execute kiya jata hai and unka result dekha jata hai mtlb unke particular result ko trace kiya jata hai. takki apnko pata chal sake ki actual meh bug hai kaha pe , konsi-line pe hai.

// setting brake-point: mtlb brake-point tk program smotthly and normally execute hojayega and brake-point k baad meh programm line-by-line execute hoga.
// for setting the brake-point just left-click on the the left-side of line-number.
// as apn multiple-break-points bhi set kr skteh hai..
// now after setting break-point >> go to debug-option and click on "start-debugging" or press F5 in Vs-code >>

//📓-note-point: AS OVerall apn programm ki working ekdam clearly dekh skteh hai , samaj skteh hai. and as apn debugging se apne concept ko bhi acche se check kr skteh hai..
// as debbugging learning and developing dono k liyeh mast powerfull tool hai..

/* 🔗🔗🔗🔗🔗🔗🔗 
 Visit for official guide about debugging from vscode:https://code.visualstudio.com/docs/editor/debugging 
 :
 🔗🔗🔗🔗🔗🔗🔗 */
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    cout << " the intial value of sum is " << sum << endl;
    int A[] = {2, 4, 6, 8, 10}; //📓-note-point: as break-point wali line execute nhi hogi , voh toh bas just about to execute haii.. as jaise hi apn "Enter"-press krenge then tab yeh line-exeucute hogi and then again-enter press krne pr jo agli line about to execute hai voh execute hogi.

    for (int x : A)
        sum += x;
    //👿📓-note-point: CPP meh indentation sirf 1-statement k liyeh valid hai.  👿📓
    // cout << " the x is " << x << endl;
    cout << " the sum of array A is " << sum << endl;

    return 0;
}