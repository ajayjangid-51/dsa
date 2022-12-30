/* 🌟 NOW apn Functions ko revise krenge: 🌟 */
// as functions ko simply modules or procedurals bhi kaha jata hai.
// As function simply ek block-of-code hota hai mtlb it is group of related-instructions for performing one ek specific task(kaam), jisko apn jab chaheh , jaha chaheh , jitni baar chaheh call kr skteh hai mtlb run kr skteh hai uss particular-block of code ko. as toh overall function ka use krne se re-usibility badhti hai in the same file or also in the diffrent-files just by importing.
// library mtlb group-of-files which contains group of related-functions. thus toh mtlb apn apne functions bana krke unki ek libray bana skteh hai. and jab chaheh , jaha chaheh uss libray k functions ko use kr skteh hai. toh mtlb function mast baval cheez hai. (and as yeh C-language ka toh top-most feature tha..)

// as CPP meh modular-programming se bhi beyond concept hai and that is object-oreinted-programming mtlb class where jismeh apn related-functions ko ek block meh likhteh hai ,combine krteh hai.
// 👿📓 as toh aab se apnko hamesa as like jaise apn react-meh coding krteh hai mtlb as like componenet-wise as same like aab apn apne programs ki coding krenge mtlb apn functional-wise coding, as mtlb apn har specific kaam k liyeh function-banayenge in same or different-files then usseh import kr lenge main()-fn wali file meh and then unn-function unke kaam k according main()-fn meh call kr lenge. as toh esseh apna code ek accha , understable , clean and achhe se manageable hoga. thus toh allover apnko apne programs banane k liyeh voh React-idea hi follow krna hai, as q ki voh bohat sahi. and ess programming and coding krne ko procedural-programming or modular-programming khteh hai.

// Monolithic-programming (as jaise apn sbhi cheezo ko main()-fn k andar likhteh hai mtlb without using any functions etc .. ko Monolithic-programming krna khteh hai.)
// procedural-programming or modular-programming.
//👿📓-note-point: as apnko hamesa procedural or modular-programming hi krni chahiyeh bcoz esseh apne code ki one of the main baat ki understandibility badhi hai , debugging assaan ho jati hai , mtlb easy ho jati hai q ki vaha ek particural function target ho jata hai ki haan k baki sab functions toh sahi se kaam kr rhe hai and ess function ki value or ka output sahi nhi aa raha hai toh apn directly and specifically uss function pe kaam kr skteh hai. 3rd-point: as apn apne program-task ko different-programmers k bich divide krke group meh kaam kr skteh hai kisi ek project pe.

// function defination ko hi function-elaboration or function-body or function-work-box khteh hai.
// function-declaration ko hi function-prototype or mtlb function ka prototype khteh or function-header or signature-of-function khteh  hai..
// actual-paramters mtlb jo cheez apn input krteh hai usko bolteh hai. and actual-paramters ki copy pass hoti hai as a formal-parameters.

//👿📓-note-point: As apn yeh wali baat note-krenge ki apn C and C++ language-programming meh apn function k andar koi orr function define nhi kr skteh.. but other-language jaise syad python and javaScipt meh apn yeh functin k andar function define kr skteh hai. haan but apn function-prototype toh de skteh hai kisi function ka kisi function meh, and as yeh prototypoing wali baat jada sahi hai, as mtlb apn needed-(but not-avialable) -function ka prototype likh skteh hai as like a "remainder" and then baad meh apn uss-function ko define kr skteh hai.👿📓

#include <iostream>
using namespace std;

int add(int p1, int p2); // as yeh function-prototype hai.( as function prototype se apnko function k main-ingridents mtlb jaise function-ki-retur-value-type , function k kitne and kaise parameters hai.)
int add(int p1, int p2)  // here in function-prototye meh p1 and p2 are acting as formal-parameters.
{
    int c = p1 + p2;
    return c;
}
int main()
{
    int a = 21, b = 31;
    int c = add(a, b); // yaha a and b are the acting as a actual-parameters. mtlb enki sirf copy pass hogi and ki actuall yeh as it is paas honge.
    //👿📓-note-point: As apn yeh kaam directly c = a+b bhi kr skteh hai, but yeh kaam function ka use krke kr rahe hai ,mtlb apn actually main()-fn ka work-load kaam kr rahe hai, mtlb agr main()-fn jada bada hoga, tab toh stack meh yeh main()-fn kafi space gain-karega and yeh space destory bhi nhi  hone wali.. but function ka use krke rahe then apne main()-fn ka work-load bhi nhi bahega. and stack meh loading-badhti hai, bcoz of activation of this function but function-end hone pe yeh vapis destroy bhi hojayega.. thus toh mtlb chote-chote kaam bhi function se krvane k yahi faydee hai.👿📓
    // where- workload mtlb loading of instructions in the memory-part.
    cout << " the additions of a and b is  " << c << endl;

    int test(int p1, char p2);
    // {
    //     cout << " all awesome the value of p1 and char-p2 is " << p1 << " " << p2 << endl;
    // }  // no as apn function k andar function-defining nhi kr sktehh..

    // using-functions means we are just reducing the work-load of main()-fn.
    test(2, 'c');
    //👿📓-note-point: as apn function meh jis function k andar-call kr rahe uss function ka content apn uss calling-fn meh as a parameter pass kr skteh hai. 👿📓
    // function's-working: and function's-allocation-in-memory:
    // as toh sbse phle stack-meh main()-fn-part meh ek int-container with name a and one other int-container with name b banega, and then usmeh phir ya container-allocation k saat meh (depending upon declaration and initialization) values-assign hojayegi. and then phir int-container with name c allocate hoga and usmeh value-assigning k liyeh.. add()-fn call hoga . toh aab ek baar k liyeh main()-fn scanning-stop hojayegi mtlb execution-control-cursor add()-fn pe chala jayega and then add()-fn execute hoga mtlb then add()-fn stack-memory meh load hoga,then phir add()-fn ka data and istructions run honge. mtlb as sbse se phle toh fn-parameters memory meh allocate honge and then phle unn paramters-containers meh passed-inputs-ki-copy assign hogi, and then phir function-body k datas and istructions allocate and execute honge. (as instruction mainly keywords se , operators se and thoda kuch syntax se hoteh hai. and baki sab cheeze data k liyeh hoti hai.) and after-that-all called-function apne return-value ko apne call-statement se replace kr deta hai and stack-memroy se destory(mtlb vanish) ho jata hai. and then execution-control-cursor phir vapis se main()-fn aajayega jaha se usneh move kiya tha , exactly same ussih jagah.
    return 0;
}
int test(int p1, char p2)
{
    cout << " all awesome the value of p1 and char-p2 is " << p1 << " and " << p2 << endl;
    cout << " all good brother " << endl;
    return 4;
};