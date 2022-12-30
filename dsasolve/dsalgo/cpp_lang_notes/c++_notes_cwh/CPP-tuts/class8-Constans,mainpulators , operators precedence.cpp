// YAHA pe apn Constants(mtlb Constant-Variables) , Manipulators and Operator-precedence-order k bareh meh dekhenge:
#include <iostream>
#include <iomanip>
using namespace std;

void fn2()
{
    cout << "\n";
}
// int fn1(int a)
int fn1()
{
    // cout << "i am the fn1 function";
    fn2();
    return 200;
}

int main()
{
    // 🌟 *************** Constant - Variables : ***************
    // fn1();
    // cout << "thisi" << fn1() << "good hai ji";
    cout << "thisi  " << !fn1 << "  good hai ji";
    cout << "thisi  " << fn1 << "  good hai ji";
    cout << "thisi  " << fn1() << "  good hai ji";
    // cout << "thisi  " << fn3 << "  good hai ji";
    // fn1;
    int a = 32;
    cout << "the value of a is" << a;
    a = 51;
    cout << "the value of a after it is updated or changed" << a << endl;

    // int endl =  13;

    const int a1 = 121;
    cout << "the value of const or constant a1 is " << a1 << endl;
    // a1 = 20;
    // as mtlb apn constant-variable-container or compiler ki terms meh read-only-variable ki value ko change nhi kr skteh hai. as q ki apnko error milti hai.
    // cout << "the value of a1 after updation " << a1 << endl;

    // 📓 🎆:Thus toh Constant-VArialbes or read-only-variable ka use apn tab krteh hai jab apnko apne variable ki value ki value kahi orr jagah se change nhi krne deni hoti hai ya accidently change nhi hone deni hai, then vaha apn Const-varialble ka use krteh hai and C++ coding meh apn const-variable ess tarah define krteh hai:
    // const datatype-of-vairable variablename = data_value;

    // 🌟 **************Manipulators: *****************
    // Manipulators simply c++ header-files k functions hi hai jo "i/o" ko modify krteh hai, as yeh manipulator-functions ko apnko call krne k liyeh parenthesis nhi lagane hota jin function ka koi parameter nhi hai. ( 📓📓👿note-point: as Manipulators => "keywords" nhi hoteh hai thus agr apnne Manipulators-name se hi koi variable define kr diya then vaha phir unn Variables ki hi precedence hoti hai over the Manipulators)
    // thus some C++ Manipulators:
    // as Manipulators-functions 2-types k hoteh hai:
    //  🌟1. without-paramters(mtlb without arguments) (and without-parameters wali function ko apn directly without using parenthesis use kr skteh hai.)
    /*      1.endl (as ess mainpulator-function se apn new-line-character daal skteh hai mtlb ess function ki return value "/n" hoti hai.)
            2.ws 
            2.ws
    //  🌟2. with-paramters(mtlb with Arguments) (as with-parameters wale function ko toh apnko parenthsis laga krke hi call krna hota hai.)
            1.setw() (as yeh mainpulator-function apne output-text k field ki width set kr deta hai, thus toh mtlb apn ess manipulator-function se apne output-field ki width set kr skteh hai. note-point: as yeh manipulator-function iomanip -header-file meh defined hai. thus toh mtlb apnko esko use krne k liyeh phle iomanip file ko apni current-file meh fetch krna hoga.)
            2.setfill('char') (yeh function output-field-area meh yeh inputed-character input kr deta hai.) 
            3. etc..etc for more visit bottom Link for manipulators:

            // 
    */
    cout << "ehlo" << endl;
    int am;
    am << 5;
    cout << am;
    cout << "ehlo" << endl;
    // 🍩🍩🍩🍩   in c++ why mainpulators functions are called without using parenthesis? as mainpulators-functions k liyeh apnko essehi krna hota hai. 🍩🍩🍩🍩
    int endl = 13;
    int endi = 13;
    cout << endi << endl;

    // #include <iomanip>
    cout << setw(5) << "hello brother" << setw(3) << 5 << "\n";
    cout << setw(5) << "hello brother" << setw(3) << "hello boom" << 11 << "\n";
    // 📓notice: as agr set-filed-width se jada text aa jata hai toh phir apnko voh setwidth notice nhi ho payegi.
    cout << setw(5) << "hello brother" << setw(3) << "he"
         << "\n";
    cout << setw(5) << "hello brother" << setw(4) << "he"
         << "\n";
    cout << setw(5) << "hello brother"
         << "he"
         << "\n";

    cout << setw(5) << "hello brother" << setw(3) << setfill('x') << 51;

    // *************Operator-Precedence *************
    // as jaise apn ek operator-statment meh multiple-operators use krteh hai then vaha uss operator-statemen meh Operators ki priority hoti hai mtlb precedence hoti hai mtlb jis operator ki precedence kaam voh sbse phle execute hota hai by taking its operands. thus toh bas apnko har Operators ki Precedence and associtivity dhyn meh honi chahiyeh thus takki apn apne Idea or any given problem ko sahi se code kr sake , mtlb koi glti na ho koi kami na hove.
    // thus follow the link at bottom for Operator-Precedence-Table: as apnko yaad rhne ki jarurat nhi hai bas apnko Concept-clear hona chahiyeh phir refernce toh apn easily le skteh hai.

    cout << 3 * 5 + 4 - 45 + 87;
    // 👿imp-note-point: as associvity ko refer kiya jata jab operators ki precedence same hoti hai and associvity mtlb operators-statement k respect meh na ki same-level-operators k respect meh.
    return 0;
}

// LInks:
// for "manipulators-reference" visit this: https://www.geeksforgeeks.org/manipulators-in-c-with-examples/

// for "Operator-precedence-table" visit this: https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
// or visit this: https://en.cppreference.com/w/cpp/language/operator_precedence