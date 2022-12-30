// YAHA pe apn Variable-Container-Scope k bareh meh dekhenge:
// as Scope variable-container k liyeh define hota hai ,and as memory-management k terms meh boleh toh Scope ka mtlb hai ki ek voh time-period jab tk variable-container k liyeh memory meh ek memory-part allocated hota hai. as agr variable k liyeh memory-allocated nhi hogi then thus toh mtlb exection-time terms meh voh variable hai hi nhi. thus toh mtlb agr apn kisi variable-container ko out-of-scope use krteh hai then apnko error milti hai. bcoz execution ki terms meh voh variable-container exists hi nhi krta.
// (as variable-container hamesa apni stored-value ko hi represent krta hai.)

// thus toh allover apnko kisi bhi defined-Variable-container ko use krteh time uske Scope k bareh meh dhyn rkhna hota hai otherwise apnko error mil skti hai.
// as yeh "Scope ka Idea" programming meh esliy apply kiya gaya hai takki memory- ko acche se ek effiecient-way meh use kiya ja sake.

// 🌟 as toh Scope ko apn simply ess tarah define kr skteh hai ki "time-period of existence in the Memory-during-execution-of-program kitna and kaise hota hai."   🌟

// 🔔Thus toh now aab apn VAriable-containers ka Scope dekhenge ki unka Scope mtlb time-period of existence in the Memory-during-execution-of-program kitna and kaise hota hai.
/*
// AS Variable-containers ka Scope depend krta hai ki apn uss kisi Variable-container ko kaha define kr rhe hai.
// as toh apn kisi bhi VAriable-container ko 2-jagah define kr skteh hai:

// 1.Global-variables
// 🌟 1.outside-the-work-Box (mtlb curly-braces{}) as agr apn outside the Work-Box define krteh hai then phir toh uss variable-container ko apn kahi bhi kaha bhi use kr skteh hai.  as eseh defined variables ko simply shortly Global-Variables bolteh hai. as Global through the program running-time-period tk available rhteh hai.

// 2.Local-variables
// 🌟 2.inside-the-work-Box (mtlb curly-braces{} k andar) as apn inside-the-work-box variable-container ko define krteh hai then apn ess variable-container ko sirf ess work-box meh hi use kr stkeh hai , memory-managment ki terms meh boleh toh yeh Variable-container jab yeh eska Work-box execution time-period tk hi ess Variable-container k liyeh memory meh work-box ki allocated memory meh memory-allocated hoti hai. thus toh ek bar work-box k liyeh allocated-memory vanish toh mtlb voh uske varialbe-container k liyeh bhi memory vanish ho jati hai , thus toh Actually esliy apn uss inside-the-WorkBox defined variable ko uss work-Box k outside use nhi kr skteh. as esseh defined variables ko simply and shortly Local-Variable bolteh hai. as toh Local-variable only work-box k running time-period tk hi available hoteh hai.
*/

// 💡 In terms of writing-Code not in Terms of Exeucution of code
// as hamesa Execution-of-code ki terms meh hi apnko har codes ko samajna hota hai , as bcoz agr apn essko samaj gayeh toh apn writing-code ki terms meh aaram se apne-app hi samaj janyenge. thus toh hamesa apnko Allocation , Execution ki terms meh har code-lines ko dekhana hai.

// AS now apn Code-Writing ki terms meh Scope ko define kr skteh hai ki Scope mtlb voh region-of-code-file jaha apn defined variable ko use kr skteh hai. mtlb voh region jaha uss variable-container ka use krna valid hai.

// 🔔 📓note-point: as Local and Global variable k name same ho skteh hai , but global-variable ki jagah hamesa local-variable persidence leta hai. mtlb vaha local-variable hi matter krta hai as like this:

#include <iostream>
// as inclue-file krne se mtlb voh include file apne program meh as it is paste ho jati hai. thus tabbhi toh apn eske function ko use kr stkeh hai.
using namespace std;

int a_lgvariable = 101;
int gvar1 = 32;

void fn1()
{
    int localvar1 = 212;
    cout << localvar1 << "\n";
    cout << gvar1 << "\n";
}
int main()
{
    int a_lgvariable = 31;
    cout << a_lgvariable << "\n"; // as toh yaha 31 hi print hoga. bcoz local-variable ki persidence hoti hai over global-variable.

    cout << gvar1 << "\n";
    // gvar1 = 1001;
    // or agr apn gvar1 naam se hi enn main()-fn meh variable define krde then toh phir toh yeh local "gvar1" -variable hi matter karega. as phir global-variable kuch matter nhi karega q ki as apn janteh hi hai.

    // and 📓Notepoint ki apna C++ and C Program main()-fn se hi mtlb main()-fn k accordingly hi hi execute hota hai.
    fn1(); // as abhi abb toh globle-variable "gvar1" ki value 1001 print hogi q ki as apnne fn1()-fn ko call krne se phle hi value ko update kr diya hai.
    // Notice-point: as yaha pe fn1()-fn call huaa hai toh aab stack-memory meh yeh function load hoga mtlb eske liyeh ek alag memory-allocate hogi and phir yeh function-execute hoga as tab tk baki niche wali cheeze execute nhi hogi mtlb niche-wale code-lines ka execution abhi paused hai and ek baar jab yeh called function apna kaam krke function ki value return kr deta hai then voh return-value uss function ki jagah se replace ho jati hai and aage wale code-lines ka execution vapis se resume ho jata hai and 🔔notice-point ki yeh called-fn apne parent-function jismeh yeh call huaa hai usseh kuch bhi link nhi krta(mtlb eske liyeh alag stack meh alag hi memory allocte hoti hai) thus mtlb apn apne ess function eski parent-fn ki kuch bhi cheeze access nhi kr pateh hai, thust toh yeh baat apnko dhyn meh rkhni hoti hai , bcoz essi baat ko dhyn meh rkhteh huee apnko code likhna hota hai otherwise apnko error mil skti hai agr apnne kuch ess baat k accordingly code-write nhi kiya hai toh.

    // thus toh apnko code execution k time memmory meh kaise allocate hoke execute hota hai voh apnko important dhyn meh rkhna hai , mtlb hona chahiyeh. as esseh phir coding krna mtlb programm banana very easy and feel krna ho jata hai.
    gvar1 = 1001; // as yaha apnne function ko call krne k baad meh global-variable ki value ko update kiya hai , thus toh fn1() toh gvar1 ki value 32 hi print karega.

    a_lgvariable = 43;
    cout << a_lgvariable << "\n"; // as toh yaha pe bhi local-variable hi update hoga , naki eske same naam wala global-variable update hoga. as bcoz local-variable presidence leta hai.

    return 0;
}