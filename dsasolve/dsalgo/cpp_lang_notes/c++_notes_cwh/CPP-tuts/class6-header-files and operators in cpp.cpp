// YAHA pe apn Header-files and Operators k bareh meh dekhenge:
//  🌟  Header-files(or simply boleh toh modules as C and C++ modules-files ko header-files bola jata hai): 🌟
// as header-files(or Modules) two types ki hoteh hai:
//  1.standard(System)-header-files (jo ki compiler k saat by-default hoti hai.)
//  2.User-defined-header-files ( as yeh Header-files ya User apni khudi module-file banata hai ya kisi third-party ki hoti hai mtlb yeh header-files compiler- k saat nhi aati hai. now User-defined-header files ko inlcude(mtlb import) krne ka format thoda alga hota hai. as like this:

// 🔔Tip: AS C++ meh Header-files ko apnko as like as JavaScript , Python ki tarah files ko export krne ki jarurat nhi hai. toh yeh ek +-point hai C++ language ka.
// 🔔 C++ dedicated Header-files Reference ( as Reference all about Header-files k bareh meh ki kaise kitni header-files hoti hai and and unn header-files ka kya kaam hota hai , thus mtlb esko dekh kr apn bhi apne according C++ dedicataed header-files ko apne program meh include kr skteh hai and kuch kaam kr skteh hai mtlb ek daam acche acche programs bana skteh hai. as q ki header-files or third-party-user-defined-header-files bohat kaam ki hoti hai q ki enmeh bohat sare functions hoteh hai jinseh apn bohat acche acche kaam kr skteh hai. mtlb bohat acche acche mastam scable programs jaise games , software etc bana skteh hai.
// thus for C++ header - file Reference visit this: cppreference.com or https://en.cppreference.com/w/c/header  )
#include "test.py"
#include "test2.cpp"
// as yaha double-quotes("") ka mtlb hai ki compiler ko essi folder, address meh ya gcc/include meh ess file ko dhund na hai.
// #include <test2.cpp>
// and yaha angle-brackets(<>) ka mtlb hai ki ess file ko sirf gcc k include-folder or inclue-folder k C++ folder meh hi dhundna hai.
#include "reference-image/testm.cpp"
// 📓#include "by-default-it is at c++-folder of gcc"
// #include <ajugccfile.cpp>
// #include "../c-programming/class001.c"

// #include "ajugccfile.cpp"
#include <ajugccfile>
// 📓note-point: as toh apn without .cpp -extensions wali files ko bhi include kr skteh hai and uss file meh written functions , classess , variables , objects etc ko easily use kr skteh hai. as bas apnko yeh dhyn meh rkhna hai ki angle-brackets(<>) ka use gcc-folder k liyeh krteh hai. but double-quotes("") apn allover k liyeh kr skteh hai but double-quote meh apnko gcc-files k liyeh address nhi dena hota hai.
#include "ajugccfil.cpp"
#include "ajugccfi.cpp"
//  #include "file-address or file-name")

// as including-files  existing file k folder meh hi honi chahiyeh , ya phir apnko address-provide karana hota hai , ya phir header-file compiler-folder meh bhi ho skti hai.

// 🌟🌟🌟🌟
// 🌟🎆 Note-point: AS jab apne pass koi Idea hota hai and uss idea ko krne ka logic hota hai then phir apn uss Idea ko uskeliy logic k according code krteh hai. thus isiliy liyeh apnko coding-krna aana chahiyeh. takki apn uss Idea ki acche se coding kr sake. thus isiliy apn Coding k sare concepts ki acche se samaj honi chahiyeh.
// 🌟 Operators:
// Coding meh Operators simply voh symbols hoteh hai jo ki kuch operations krteh hai, mtlb compiler enn symbols ko enke according wala kaam krta hai.
// Now Operators k operations k according Operators diff-diff types k hoteh hai. and phir enn operators ko enke Operation-field k according diff categories meh organised kiya gaya hai, thus toh yeh apne liyeh aasaan hojayega enn Operators ko and enke respective Operations ko dhyn meh rkhne k liyeh. thus toh apn enn Operators ko enki Categories k according hi dekhenge. takki apnko easily cheeze dhyn meh rhjayeh. jaise:

/* 1.Arithematic-Operators-Category:
// as Arithematic-Operators voh hoteh hai jo Arithematic-Operations krteh hai: thus toh apnko apne Idea and Logic k according kuch Arithematic-operations krne ho then Coding meh apn yeh kaam Arithematic-Operators ka use krke krteh hai. thus toh kabbhi apnko apne Idea k according kuch Arithematic-operations krne ho then simply simply Arithematic-Operators ka use krteh hai.
now apn C++ language meh kaise-konse Arithematic-Operators designed kiyeh huee hai , konse-kaise mannyeh hai unke bareh meh dekhenge.
        1.+ ("addition-opeartion" as yeh Operator apne operands ka addition-operation kr deta hai mtlb apne operands ka addition kr deta hai and operation-ki-value return kr deta hai. mtlb  as opearator ka jo Operation hota hai uss Operation krke jo value aati hai usko hi return krta hai mtlb uss operator-statement ki jagah eski return-value aajati hai mtlb hoti hai apnko esseh hi dhyn meh rkhna hai.)
        2.- ("substraction operator" yeh Opeartor substraction-operation krta hai mtlb apne operands ka substraction operation krta hai as yeh baat ko apn by-default hi samajteh hai.)
        3.*
        4./
        5.%
    💡: single-Operand-Operators( as kuch esseh operators bhi hoteh hai jo ki single-operand pe hi kaam krteh hai.)
        6.++ ("increment operator" yeh operator apne operand meh +1 kr deta hai)
        7.-- ("decrement operator" yeh operator apne operand meh -1 kr deta hai.) 
        🌟 📓note-point: as enn ++ or -- operators pe operand LHS or RHS dono side lg skta hai, but phir opearator accordingly operation krta hai mtlb agr operand LHS meh hai then yeh operators phle operation karega and in the return voh operation se operand-ki-upadated value return karega . and agr operand RHS meh hai then yeh operator operation toh baad meh karega and in the return uss operand ko hi return kr dega. thus toh yeh baat apnko dhyan meh rkni hoti hai bcoz kaee baar confusion create ho skta hai.

// 📓note-point2: arithematic-operators meh operation-result ka datatype by default-operand-datatype hi hota hai thus toh ess baat ko bhi apnko dhyn meh rkna hota hai. as jaise 4/5 ka answer 0 return-hota hai mtlb bcoz operands ka datatype int hai toh phir opeartion-result-ka-datatype int hi hoga mtlb hota hai.
*/
// 🌟 as apn janteh hai ki coding meh mainly 4-cheeze hoti hai: vaiables , functions and conditionsal and LOOps bcoz apne Idea ko Code meh covert krne k liyeh yahi cheeze hoti hai as bcoz q ki koi bhi Idea code meh convert enhi cheezo se ho jata hai. and then enn 4-cheeze k andar phir kuch sub-cheeze hoti hai jaise Operators , keywords etc.. 🌟
/* 2.Assignment-Operators:
// as Assignment-Operators varialbe-containers meh data-values assigning operation krteh hai mtlb simply varialbe-containers meh data-values assign krteh hai. thus toh kabi bhi apnko varialbe-containers meh data-value assing krni ho then vaha apn simply "Assignment-Operators" ka use krteh hai and as enn Operators-statement ki return-value null hoti hai mtlb kuch nhi hoti hai as bas yeh variable-container meh value assign kr deteh hai. : jaise:
        1.=
        1.+=
        1.-=
        1.*=
        1./=
*/
/* 3.Checking-Operators or Comparison-Operator:
// as Checking-operators check krteh hai , mtlb yeh operators apne left and right operand ko check krteh hai ki yeh particular-condition satisfy krteh hai ya nhi krteh hai and as enn Operator-statement ki return-value
 "true-(1)" or "false-(0)" hoti hai and enn Operators ka mostly use Conditionals meh hota hai bcoz yeh mastam cheez hai. jaise:
        1.== ("is equal to")
        2.!= ("is not equal to")
        2.< ("is lesser than")
        3.> ("is greater than")
        4.<= ("is lesser than or equal to")
        5.>= ("is greater than or equal to")
*/
/* 4.Bitwise-Operators:
// as Bitwise-Operators Bit-operation krteh hai mtlb given value ko bit-code meh convert kr deteh hai. as bitwise-operators ko apn baad meh aage dekhenge.
*/
/* 5.Logical-Operators:
// as Logical-operators Logical operation krteh hai, Logical-operation mtlb jaha thoda logic lgta ho mtlb jaise mtlb koi tarika lgta ho jaise yeh condition true and yeh condition false then overall-condition false hogi na etc..etc.. as accordingly. thus toh esseh logical-operation krne k liyeh apne Idea k according then apn simply Logical-Operators ka use krteh hai.
        1.&& ("and-operator" ess operator-statment ki return value true hoti hai agr dono operands ki value true hoti hai toh , otherwise es operator-statement ki return value false hoti hai.)
        2.|| ("or-operator")
        2.! ("not-operator" yeh operator true ko false and false ko true kr deta hai.)
*/
/* 6.Misc-Operators:
// AS simply boleh toh yeh Mics-Operators simply functions hi hoteh hai , as operators voh hoteh hai jo two or single operands pe operation krteh hai and functions voh hoteh hai jo kuch input leke according operation krteh mtlb kaam krteh hai. but yaha yeh Misc-functions ko Misc-Operators isiliy bola gaya hai q ki yeh functions C++ meh by-default-functions mtlb as a reserved-functions hai(note-point: as yeh reserved-keywords nhi hai , as yeh reserved-functions hai as q ki keywords kafi mastam cheez hai)  ::
        1.sizeof()
        2.<Condition>? X:Y ( as yeh operator specified-condition true hoti hai toh X return krta hai and agr specifief-condition false hoti hai toh Y-return krta hai.)
        3.cast()-fn (as yeh cast()-fn typecasting krta hai , as for using it apnko cast ki jagah voh datatype-likhna hota hai jismeh apnko inputed-value ko typecaste krna hai mtlb dusre datatype meh convert krna hai.)
        4. .(dot) and ->(arrow) Member-operator (as yeh operator reference krteh hai class , struct , union ki keys ko and enki return-value kuch nhi hoti.)
        5. ,(comma-operator as yeh operator )
        6.& ("&-pointer-operator" as yeh operator apne operand ka memory-address(mtlb memory meh jaha yeh operand-allocated hai vaha ka address mtlb pointer-data) return krta hai. thus ess Operator ki return value store krne k liyeh apnko pointer-container chahiyeh hoga.)
        7.* ("pointer-operator" as yeh star-pointer-operator in the return apne pointer-operand meh jo data store hai voh return krta hai. and 📓notice-point ki yeh "*" and "&" operators k operand RHS meh hi lgta hai. )
*/

/* 6.insertion-operator(<<) (yeh operator RHS operand ko LHS operand meh daal deta hai or concate kr deta hai)
   7.extraction-operator(>>) (yeh operator LHS operand ko RHS operand meh daal deta hai or mtlb assign kr deta hai. )
   8.scope-resolution-operator(::) (yeh operator global-variable ko specify krta hai.)
*/
// 🎆 for more Operators reference visit: https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
// Note-point&Tip: coding(mtlb code likne meh) meh and Programming( mtlb program banana ek logic nikalna and uski coding krna is knows as programming thus programming = idea+logic+coding ) meh operator-statement(mtlb left-operand operator right-operand) ki jagah operator's operation ki return value hoti hai thus toh yeh baat apnko dhyn meh rkni hoti hai thus tabhi apn easily coding(mtlb code likh payenge) kr payenge.

// #include <iostream>
// 💡AS apn gcc-folder wali files ko esseh bhi include kr skteh hai , but mostly apn yeh denote krne k liyeh ki yeh file gcc-folder ki hai mtlb yeh gcc-compiler meh by-default in-built hai. but apn user-defined-header-file(mtlb user-defined-module) ko esseh angle-bracket se import nhi kr skteh hai. bcoz angle-bracket in-built system-files k liyeh hi hai.
#include "iostream"
using namespace std;
int main()
{
        char endi[10] = "\n";
        std::cout << "hello brother" << endi;
        std::cout << "i am line 2";
        // std::add1(1, 4);  // as std ka use apn sirf gcc-by-default-standard-header-or-module-files k liyeh hi krteh hai.
        add1(1, 4);
        minus2(4, 1);
        // hlofn();
        ajugccfilefn();

        // 🌟 Operators: 🌟
        // 1.Arithematic-Operators:
        int num1 = 2, num2 = 5;
        cout << "the value of num1 + num2 = " << (num1 + num2) << endi; //7
        cout << "the value of num1 - num2 = " << (num1 - num2) << endi; //-3
        cout << "the value of num1 * num2 = " << (num1 * num2) << endi; //10
        cout << "the value of num1 / num2 = " << (num1 / num2) << endi; //0
        cout << "the value of num1 % num2 = " << (num1 % num2) << endi; //2
        cout << "the value of num1++ = " << (num1++) << endi;           //2
        cout << "the value of num1-- = " << (num1--) << endi;           //3
        cout << "the value of --num1 = " << (--num1) << endi;           //1
        cout << "the value of ++num1 = " << (++num1) << endi;           //2

        // 2.Assignment-Operators:

        // 3.Comparison-Operators:

        cout << "checking whether num1 is equal to num2" << (num1 == num2) << endi;
        cout << "checking whether num1 is not equal to num2" << (num1 != num2) << endi;
        cout << "checking whether num1 is lesser to num2" << (num1 < num2) << endi;
        cout << "checking whether num1 is greater to num2" << (num1 > num2) << endi;
        cout << "checking whether num1 is lesser and equal to num2" << (num1 <= num2) << endi;
        cout << "checking whether num1 is greater and equal to num2" << (num1 >= num2) << endi;
        // cout << "checking whether num1 is equal to num2" << num1 == num2;
        // 📓note-point: AS apnko comparison-operator-statement k parenthesis lagana hota hai. and yeh C++ meh yeh 🔔 Recommended hai ki operator-statements apnko parenthesis meh hi likhni chahiyeh.

        // 4.Logical-Operators:
        cout << "the and logical value of num1>num2 and num2==num1" << ((num1 > num2) && (num2 == num1));
        cout << "the or logical value of num1>num2 and num2==num1" << ((num1 > num2) || (num2 == num1)) << endl;

        // condition?X:Y -operator
        // cout << (5 > 2) ? "5 is good" : "2 is good" << endl; // as mtlb parenthesis lagana recommended hai   C++ meh as bcoz C++ k syntax k according.
        cout << ((5 > 2) ? "5 is good" : "2 is good");

        return 0;
}
