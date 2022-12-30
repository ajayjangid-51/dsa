// YAHA pe apn CPP meh Pre-processors-statements(or mtlb Pre-Processor-directives) k bareh meh dekhenge:
// Pre-Processor-Statements voh Statements hoti hai jo ki compilation hone se phle execute hoti hai.
// // and preprocessor-commands meh apnko semi-colon lagane ki jarurat nhi hai. bas apnko new line character mtlb new-line use krni hoti hai for other-pre-processor-command.
// yaha # ka mtlb hai ki yeh Pre-Processed hoga , mtlb esko(#) follow krne wala code Pre-Processing meh hoga , or mtlb pre-processing k time hoga. as preprocess-commands or directives ko simply "#" se denote kiya jata hai for compiler kiii yeh "pre-processing" command hai.
// And yeh Pre-Processor apn apne programm meh kahi pr bhi place kr skteh hai , mtlb kahi pr bhi define kr skteh hai and compiler sabse phle enn pre-processor-commands mtlb pre-process-directive ko hi search krke utha hai.

// AS mtlb Pre-Processor ka jo output hota hai voh cheez phir aage compile hoti hai and compiler essi ka hi wait kr raha hota hai ki jab pre-processing end hove and apna output return kare mtlb apna kaam krde. uss kiyeh huee kaam ko compiler compile krta hai.

#include <iostream>
#include "cmath"
// as toh ess cmath-file meh only-preprocessor hi hai , and yeh yeh file apni ess file meh as it is fetch hojayegi and then as ess file meh sirf-preprocessor hai then mtlb ess included-ki sirf pre-processing hogi and compilation hoga hi nhi q ki esmeh toh sirf pre-processor-statemenst hai mtlb koi processing-code nhi hai.
// as toh yeh sab included-files , included-file meh included-files and so..on and our-written-file ek single-file banjayegi. thus phir ess single-file ko apnko dekh k samajna hota hai.
using namespace std;

// Preprocessor-directives:
// as Directives(mtlb pre-Processor-Commands)
// as preprocessor-directives ka most use hota for defining macros , evaluating-conditional-statments , source-file-inclusion , pragma-directive , line-control and error-detection.
// Now Pre-Processing meh apn bohat sare kaam Kr skteh hai (c++ k according), and kuch kaam esseh krna most-important bhi hoteh hai pre-processing meh krvane k liyeh jaise:
/* 
     1.other-files ko include krna.
     2.macros define krna.
     3.conditions-check krna.
     4.some kuch orr other kaams.
*/
// As NOw YAHA pe apn Mainly yahi 4-tarah ki Pre-Processing krna dekhenge:
/* 🌟 1. Macro-defining:
// 2.#define (ess command se apn macro(mtlb ek fragment(tukda or part or block) of code mtlb ek block of code banteh hai and ess macro name mtlb ek identifier diya jata hai. and yeh sab kaam apn #define keyword se krteh hai.) as yeh pre-processor hai toh mtlb esseh actually apna apne programm meh used defined-macro-key actual meh preprocessing-time meh macro-fragment of code se replace ho jati hai.)  and agr apn offically and formally boleh toh essehe bol skteh hai: The #define creates a macro, (where macro is the association of an identifier or parameterized identifier with a token string). After the macro is defined, and if defined-macro-identifier is used in our-file(mtlb source-file) then the compiler can substitute the token string for each occurrence of the identifier in the source file. as like jaise:

#define macro-template macro-expansion
// like: jaise: 
#define litxyz 10; // thus yaha pe  litxyz is a macrotemplate and 10 is macro-expansion , and thus apn apne program meh macro-template use krteh hai and compilation k phle mtlb pre-processing meh macrotemplate -> macroexpansion se replace ho jati hai.

// mtlb litxyz as 10 , as mtlb aaab se litxyz ki value 10 hai thus mtlb aab se yeh litxyz ess 10 ko hi point kr raha hota hai mtlb eski jagah 10 hota hai mtlb replace ho jata hai and yeh kaam pre-processing k time hi ho jata hai. na ki compoilation k time hota hai. as mtlb yeh litxyz as a ek identifier hai mtlb  ess litxyz ko koi orr aab as a identifier use nhi kr skta hai.

👍Macro-with-Arguments: as macro-with-arguments same as like as function ki tarah hi hoteh hai. and pre-processing meh yeh macro-fn apne work-Box se replace ho jateh hai. and yeh macro-fn apn ess tarah define krteh hai c++ coding-syntax k according.. as like this:
#define fn(a, b) (a + b)

// thus toh preprocessing k time yeh fn(a, b) simply (a+b ) se replace ho jayega. as mtlb macro-template simpy macro-expansion se replace ho jati hai.
*/
/* 🌟 2. File-Inclusion:
// ‘<‘ and ‘>’  as yeh cheez se compiler directly standard-folder(mtlb gcc) folder meh dekhta hai.
*/
/* 🌟 3. Conditional-Compilation: (mtlb appn enseh pre-processing meh hi conditions laga skteh hai.)
// AS conditional-compilation-preprocessor-commands se apn block of code conditionally allow kr skteh hai for compilation , or simply just skip kr skteh hai from the compilation.
// as #ifdef and #endif k bich likha huaa block of code conditionally compile hoga on the basis on ki voh macro defined hai ya nhi hai. agr voh macro-defined nhi hai then yeh code compile nhi hoga mtlb apna compiler ess block-of-code ko simply skip kr dega , thus toh yeh mostly library-files meh hota hai. mtlb apn kisi orr fuction se koi macro-define kr skteh hai and phir uske according voh block-of-compile ho jata hai and apn usko phir easily use kr skteh hai.
// as thus toh Conditional-compilation-pre-processor-statements k use se apn apne compilation-time ko ek significant ammout se decrease kr skteh hai and indirectly apn apne program ki effiency badha skteh hai.

// 2. #ifndef and #endif k bich ka code tab compile hota hai jab specified macro- defined "nhi" ho , mtlb yeh #ifndef just opposite hai #ifdef ka.
//3. and now #if , #elif , #else and #endif ladder as same deto as if , else-if and else-ladder ki tarah hi hai.

// 🔔🔔 And as apn enn sab preprocessor-commands ko enn conditionals meh daal skteh hai.
*/
/* 🌟 4. Other-directives:
    1.#undef ( as pre-processing-derivate mtlb command se apn existing macros ko undefine kr skteh hai mtlb unheh remove kr skteh hai.) as like this:
    2.pragma-preprocessors:
    // as pragma-preprocessors-Commands se apn kuch features ko turn-on and turn-off kr skteh hai:
    kafi types k hoteh hai:
    //  1.pragma startup (ess preprocessing se specified function main()-fn k execute hone se phle hi execute ho jata hai.)
    //  1.pragma exit (esseh specified-fn main()-fn k just end hone se phle execute ho jata hai.) 
    // 📓:notepoint: as yeh pragma-startup and exit pre-processor gcc-compiler meh supported nhi hai toh same results k liyeh follow this code for gcc-comipler: 
    🔔 void __attribute__((constructor)) func1(); 
void __attribute__((destructor)) func2(); 🔔 
    
    // 3.pragma-warn (as esseh apn compiler-warnings ko hide kr sketh hai.)
    // 

*/
/* 🌟5. Line-Control:
// as line-control-pre-Processor-command se apne errors ka jo address(mtlb file-name and line-no.) show hota hai usseh change mtlb edit kr skteh hai. thus toh esseh krne se uske command k baad meh jo bhi erros aayenge unn sab ka address apne jo edit kiya hai voh hi aayega. as like this:

#line line-number "file-name"
#line 111 "nici"

*/
/* 🌟6. Errro Pre-processor-command: ess pre-processor-command se apn Compilation ko about kr skteh hai and jo message apn dena chahteh hai on the abortion of program voh apn ess tarah de skteh hai.

#error message-for-error
*/

#define litxyz 13
#define litxyzi 3
#define fn(a, b) (a + b)
// #define gg
#ifdef gg
int fnzi(int p1)
{
    cout << "good awesome hai" << endl;
    return 10;
}
#endif
#ifdef litxyz
// constexpr int fn1(int a, int b)
int fn11(int a, int b)
{
    cout << "hello brother alright the macro with name litxyz is actually present mtlb actually defined hai "
         << endl;
    return a + b;
    // as yeh greyed esliy hota hai ki yeh denote krta hai ki yeh statement execute nhi hogi ,bcoz ess naam se koi bhi macro-defined nhi hai.
    // fnzi(5);  // as eska macro defined nhi hai toh yeh satement execute nhi ho skti.

    // as toh agr apn ess function ko call krteh hai then agr ess naam se macro defined tab hai call hojayega , other yeh call nhi hoga , mtlb apnnkoo error bhi milti hai.

    // 📓📓2-notepoint: AS mtlb program ki har cheez ek saat compile nhi hoti hai , mtlb line by-line-hoti hai. and agr bich meh preprocessor-statement milti hai toh compilation ek bar pause ho jata hai and phle pre-processing hoke phir vapis comiplation start hota hai, thus toh isiliy scope-matter krta hai, mtlb esseh nhi hota hai ki first of all phle sari sabhi pre-processor-statements ek saat hoke execute hoti hai, as hota toh sabhi kaam line-by-line top to down hi hota hai , mtlb pre-processing and compilation one-by-one codes ka hota hai , na toh compilation ek saat hota hai , na hii pre-processing ek saat hoti hai. sab one-by-one top-down line-wise hota hai. mtlb jaise line-3 compile ho gayi and line-4 meh koi pre-proccessor-statement aagayi then voh compilatio stop hoke phle pre-processing hogi and then phir vapis se compilation resume hojayegi. toh jaise line-10 meh koi macro-used kiya gaya hai but uss macro-ka-preprocessor line30 meh then phir toh voh line-10 meh macro compile nhi ho payega , bcoz pre-processor toh line-30 meh define hai thus voh toh jab execution-cursor line-30 pe jayega tab pre-processed hoga. thus isiliy apnko yeh baat ka ek-dam dhyn rkhna hai. mtlb confuse nhi hona hai ki pre-processor-statements ek saat phle-phle ho jati hai.
}

// as mtlb ess naam se koi macro-defined then toh yeh statemenst execute ho jayenge , but defined nhi hai then yeh statements execute nhi honge.
#endif
#define macro2 11
// #define macro3 10
#if (macro2 > 10) // as mtlb agr yeh macro2 -macro hai toh yeh eske wali statements compile hogi otherwise nhi hogi. and as apn esmeh conditions bhi apply kr skteh hai.
// and pre-processor-conodtionals meh apn and senoir-programmers sirf mostly functions hi likhteh hai.
void fnn1()
{

    cout << "good boy i am fnn1-fn " << endl;
    // as grey-color ka mtlb ki yeh function hai hi nhi mtlb , yeh function compile hoga hi nahi.
}
#elif macro3 // as agr yeh macro3 hai yeh function compile hojayega .
int fnn2(float p1)
{
    cout << "this is macro3";
}
#else        // as agr koi macro nhi hai toh phir yeh toh compile ho hi jayega.
int fnn3(float p1)
{
    cout << "this is macro4";
}
#endif       // as apnko #endif lagana jaruri hai.

int main()
{

    cout << litxyz;
    // #include <iostream>  // 📓1. as apn esseh nhi kr skteh, mtlb apni pre-processor-commands bhi line-wise hi execute hoti hai.
    // int litxyz = 21; // as yeh #define "macro-identifier" hai toh apn esko as a identifier use nhi kr skteh hai.
    cout << "the sum of 3 and 5 is " << fn(3, 5) << endl;

    cout << litxyzi << endl;
#undef litxyzi
    // cout << litxyzi << endl;
    // int litxyzi = 21;

    // int a, a;

    fn11(2, 10);
    // cc

#line 111 "nici"
    // jdj
    //     jkgeio
    cout
        << "nice bro";

#define goo
#ifndef gooo
#error sorry program will not be compiled
#endif

    fnn1(); // agr macro3 macro is greater 10 then yeh fn-compile hoga otherwise compile nhi hoga and agr compile nhi hoga toh apn esko use nhi kr skteh.

    return 0;
}
// 🎆🎆 coding meh searching main cheez hoti hai , har cheez ko search karo ki yeh kya hota hai , eska use kya hota hai and kaise hota hai.
// visit this for all preprocessor-directives::
//  https://www.geeksforgeeks.org/cc-preprocessors/
// and https://www.geeksforgeeks.org/cpp-preprocessor-directives-set-2/
// or visit cplusplus.com
