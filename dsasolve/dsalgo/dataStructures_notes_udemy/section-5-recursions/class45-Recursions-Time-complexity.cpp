// as recursions ki time-complexity apn "Recurence-relation" meh likh skteh hai find-out kr skteh hai...
//
// as toh overall apn esseh bol skteh hai.. ki "Recursions" ki overall-degree of time-complexity degree of number-of-fun-call k equal hoti hai. or mtlb degree-of number-of-stack-frame k equal hoti hai.

// class-49:
//🎆 implementating-Recursions::
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗

#include <iostream>
using namespace std;

void fn1(int p1)
{
    cout << " outside " << endl;
    // 🎆 Base-condition: 🎆
    if (p1 > 0)
    {
        cout << " i am ascending!! " << p1 << endl;
        cout << " the value of p1 is " << p1 << endl;
        fn1(p1 - 1);
        cout << " i am decending!! " << p1 << endl;
        cout << " hello hi awesome " << endl;
    }
    cout << " bye bye " << endl;
}
void loopfn(int p1)
{
    if (p1 < 10)
    {
        // Ascending-phase::
        loopfn(p1); // as yaha toh yeh recursive-function apni decending-phase meh jayega hi nhi.. and yaha pe stack0verflow ho raha hai... q ki ess algorithm k according toh p1 is constant , toh mtlb usko value toh less than 10 hi hai..
        // decending-phase::
        cout << p1 << " " << endl;
        p1++;
        cout << p1 << " ";
        // loopfn(p1);
    }
}

void fn2(int p1)
{
    if (p1 > 0)
    {
        fn2(p1 - 1);
        cout << p1 << endl;
    }
}

/* 🌟 Head-recursions maane decending meh kuch kaam ho rahahai... 🌟 */
/* 🌟 Tail-recursions maane ascending meh kaam ho raha hai, wher yeh Naming actual function-call k respect meh ki gayi hai function kab call kiya gaya hah mtlb ascending k baad meh kiya gaya hai , ya asceding k phle . toh agr ascending k phle kiya gaya hai then it is "Header-recursive-fn" and if ascending k baad mtlb decending meh call kiya hai toh then it is "Tail-recursion:" 🌟 */
int main()
{
    int x = 3;
    fn1(x);

    cout << " <<<<<<<<<<<<<<<<<<<<<<<LOOP>>>>>>>>>>>>>>>>>>>> " << endl;
    loopfn(0);
    return 0;
}

// As Debugging meh apn apne -executing-cursor ko chlta dekh skteh hai... and orr bhi bhi bolhat sari bateh dekh skteh hai , jaise stack-meh kaise , kitni , kya loading ho rhi hai , mtlb stack kaise bhar raha hai, jisko Thread-bhi bol diya jata hai kabhi-kabhi , and saat meh apnko har statment ka result bhi dikhta hi hai. chaheh voh kuch interal-memory k related-istructions ho , ya output-instructions ya input-instructions..

// toh agr apnko kabhi Executing-cursor related dekhna hai ki executing-cursor kaise kaam kr raha hai, voh kaise chal raha hai, then vaha pe debugger se executing-cursor ko trace kr skteh hai mtlb dekh skteh hai..

// debugging meh ek-bar tab dabane se executing-cursor next-line pe aata jisko execute krni ya mtlb conceptually execute hogi(jo ki executing-cursor ko phle se pata hota hai.. or mtlb turant cpu-batata hai.) , and then dusri-baar tab dabane se voh jis-line pe executing-cursor hota hai voh line execute hoti hai. then phri tab dabane se aab voh next agli wali line pe jayega. and soo.onn

// thus toh debugging meh yahi hota hai ki line pe jana adn phir uss line ko execute krna and then vapis agli wali line pe chale jaana..
// toh mtlb exeucting-cursor dusri line pe aaraha toh mtlb phle-wali line execute ho chuki hai and abhi jaha voh current meh hai voh wali line abhi execute nhi huee hai.

// multip-threading mtlb multi-stacks , where thread ka mtlb ek-stack.