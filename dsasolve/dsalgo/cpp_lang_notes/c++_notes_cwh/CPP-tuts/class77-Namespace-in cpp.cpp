// YAHA pe apn namespace-keyword k bareh meh dekhenge:
// as simply boleh toh Thus toh namespace ek template hi hai as like as class ki tarah .. jismeh apn outside-present variable and functions k deto-same naam se bhi variable , functions bana skteh hai as voh toh obvious hai.

// Thus using keyword se apn uss template ko declare kr skteh hai mtlb uss template-code ko apne program-code meh as it is fetch kr skteh hai mtlb ki memory-allocate ho jati hai. for the variables na ki functions k liyeh , as Functions ki sirf template hi fetch ho jati hai.
// And yeh using namespace apn kahi bhi kr skteh hai...
// Mtlb globally bhi or kisi Function k andar bhi as kisi Function k andar krteh hai then voh sara code apne Function k andar fetch hojayega..but uske andar Function defination huee toh syd error aa skti hai...
// Thus toh apn namespace ka ek bas simple-template banane k liyeh use krteh hai, and phir according cheezo ko use krke memory-meh-allocate krteh rhenge. Thus esseh apna program bhi efficient rhega mtlb jitni kaam memory-space khani chahiyeh utni kaam space khayega...
// Thus toh mtlb module-files banane k liyeh yeh namespace-templating ek mastam approach hai...

// Scope mtlb time and timeperiod-of-existance in allocated-memory-part:
// as kisi bhi function meh defined kiyeh gayeh variables ka Scope-same hota hai , thus unka time-of-existance in the memory same hota hai, thus same scope meh multiple-containers ko same name nhi kiya ja skta , thus isiliy apn same-scope meh variables, functions ka naam same nhi rkh skteh hai , q ki same-scope voh cheez krna koi sense wali baat nhi hoti.
// thus same scope ka mtlb time-of-existance and allocated-memory-part ka same hona.

// 🔔 But agr apn same-naam se variables , functions banana chahehteh hai then phir yeh kaam apn "namespace"-concept se kr skteh hai.

// Scope-resolution-operator(::) scope-resolution-operator se apn simply current-memory-part se other-memory-part se link kr skteh hai. and apn (::)-operator ka use tab krteh hai jab apn kisi-memory ka code ka use kisi orr memory-meh kr rhe hai toh.
#include <iostream>
// using namespace std;
// AS toh yaha using-namespace ka mtlb hai ki apn ess std-namespace-container k content ko apn ess programm ki default varialbe , function-defination memory meh meh daal rhe hai. toh mtlb phir esske container k content mtlb variables , functions etc ko apn easily as like jaise apne orr functions ki tarah directly use kr skteh hai. and apn agr yeh nhi krteh hai then phir apnko hamesa scope-resolution-operator(::)  ka use krna padega , mtlb apnko har baar apne default-memory or stack-memory se uss namespace-std-memory se linked hona padega.

//using std::cout; // as mtlb simply ess statement-ki-jagah cout-variable aa gaya hai.
using std::endl; // as mtlb essehi "endl"-fn ki template aa gayi ess using-statement ki jagah.
// as toh using ::variablename-or-function-name ka mtlb hai ki apn uss namespace ka variable or function apne code meh fetch kr rhe hai as mtlb agr voh variable hai toh mtlb voh variable toh mtlb uss variable k liyeh memory-allocate kara di hai. and function hai mtlb sirf uss function ki template fetch kr rhe and then phir uss function ko use kr skteh hai.
int tt = 21;
//using ::tt; // as yeh cheez unnamed-namespace k liyeh use hoti hai. or just simply global-fn or global-varialbes k liyeh use hoti hai. mtlb yeh use hota included-file k global-spacce meh variables k liyeh.

int fnn_1()
{
    using std::cout; // as toh apn esseh kr skteh hai q ki using-statment simpy namespace-template se5 current-scope meh fetch krna hi hota hai.
    cout << "all good brother I am fnn_1-fn " << endl;
    return 10;
}

namespace stmcc
{

    float var1 = 31;
    // var1 = 31; // apn esseh phle only declare krke phir only initialize nhi kr skteh.
    // std::cout << "the value of var1 from inside the namespace stm" << enl;
    // cout << "the value of var1 from inside the namespace stm" << endl;
    int fnn1(int p1)
    {
        using std::cout;
        cout << "the answer is p1+1  = " << p1 + 1;
        return 21;
    }

    int fn1(int p1, char p2)
    {
        using std::cout;
        cout << "good brother good" << endl;
        // 📓 ; as jab bhi function define krteh hai then mtlb apn stack-memory meh hai mtlb in the sense ki yeh function running time pe stack-memory meh hi load hoga. isiliy in the terms of ki yeh apna function kaha load hoga runtime pe voh important hai bcoz esseh pata chal jata hai ki koi error toh nhi aaygegi ya agr aati hai toh bhi apn phir usseh easily samaj , counter kr skteh hai.
        return fnn1(p1);
    }
    // fnn_1();
    //fn1(1, 'd'); // 📓1:- as namespace toh simple memory-part-hai stack-memory-se-alag toh mtlb esseh meh function call krne ka koi mtlb nhi hai, q ki function-calling toh sirf stack-part meh hoti hai, and as apn janteh hai ki sare function stack-memory meh hi load honge mtlb hoteh hai. thus apn function-defination k andar toh other-fns ko call kr skteh hai, but namespace-memory-part meh kaise kr skteh hai mtlb nhi kr skteh hai.

    // as as apn kisi function ko call kisi function meh hi kr skteh hai , bcoz apn janteh hai ki bcoz of issue of stack-memory-allocation. and main()-fn toh default hi stack-memory meh loaded hota hai.
} // namespace stmcc

// As ess namespace se ek alag hi simply ek memory-part( not in stack-memory-part ) allocate ho jata hai and uss-memory-container ko apn name(identifier) bhi dedeteh hai and then uss memory-container meh jo chaheh voh cheeze define kr skteh hai. mtlb kisi cheez ko call nhi kr skteh hai , q ki voh apnne namespace meh explain-kr rhkha hai.

// using namespace stm;

int main()
{
    int var1;
    var1 = 10;
    // float var1;
    // var1 = 31;
    // namespace stm
    // namespace stm
    // {
    //     float var1;
    //     var1 = 31;
    // } // namespace stm
    int tt = 100;

    using std::cout;
    cout << tt << endl;
    cout << ::tt << endl;
    cout << var1 << endl;
    // cout << stm::var1 << endl;

    return 0;
}

// 🌟; AS now aab apn namespace orr bhi kafi sare bateh jaan skteh hai ki:
// 1.apn namespace meh class bhi define kr skteh hai
// 2.apn namespace meh class declare kr skteh hai and uss class ko namespace k bahar initialize kr skteh hai by using (::)-operator ka use krke kr skteh hai.
// // Using-keyword se apn namespace k members ko current-scope meh la skteh hai mtlb as it is fetch kr skteh hai , mtlb use kr skteh hai. mtlb apne current-alloacte-memory meh la skteh hai jis memory meh apn kaam kr rhe hai , jaise agr apn
// mtlb yaha memory-part-linking approach se ho jata hai ya phir simply copy-paste ho jata hai. but mostly memory-linking se hi hota hai.

// visit this for more on namespace : https://www.geeksforgeeks.org/namespace-in-c/

// visit this for using-keyword in cpp: https://www.educative.io/edpresso/what-is-the-using-keyword-in-cpp
