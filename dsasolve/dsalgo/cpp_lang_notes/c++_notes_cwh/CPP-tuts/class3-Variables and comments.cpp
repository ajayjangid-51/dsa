// YAHA pe apn C++ Programming meh Variables and Comments k bareh meh dekhenge:

// Low-level and High-level Langugage:
// as C++ , C  ek Low-level language hai mtlb yeh language hardware k kafi pass hai mtlb kafi low height pe hai from the hardware as khne ka mtlb hai jo C++ program likhteh hai thus mtlb uss apne likhe huee programm and machine-level-code k bane meh bohat jada intermediators functions nhi hai , block-of-code nhi hai jo ki apne likhe huee code thoda aur set krteh hai , filter krteh as like jaise datatypes ka filter krna etc..etc.. thus toh yeh kaam C++ -language meh written Code k liyeh nhi hota thus isiliy bolteh hai ki C++ language ek Low-Level language , as mtlb Low-language meh likhe huee programms kafi fast hoteh hai.

// as jaise Python , JavaScript yeh sab languages high-Level languages hai , mtlb enn languages meh likhe huee codes kafi filter-process se gujarteh hai.

// note-point 💡 as assmbly-language C and C++ se bhi jada low level hai  and machine-level-code(mtlb 0 and 1 combination) toh actually actual-hardware code mtlb current-flow-combination hai jiske according voh hardware step-by-step kaam krta hai.

// 🌟1: Variables:
// as Variables simply memory-containers hi hoteh hai jismeh apn data(where data mtlb information in electrical -form) store kr skteh hai.
// as now C++ meh Variables ko define krteh hai time apnko uss Variables k Data-type ko specify krna hota hai , as where Variable ka Data-type mtlb Variable meh jo data store ho raha hai uss data ka type , as mtlb voh data integer ho skta hai , character ho skta hai , float-number ho skta hai , string ho skti hai. thus toh mtlb simply apnko Variable-define (only declare) krteh time uska variable ka data-type specify krna hota as mtlb yeh syntax hai but apn esko syntax se nich samajteh as apnko esko feel krteh hai.

// as now C++ Langauge meh kafi sare Data-types hai mtlb kafi sare Data k types hai , thus toh apnko pata hona chahiyeh ki kaise-kaise data-types hoteh hai mtlb kaise-kaise types k data hoteh hai. thus toh apn aab Types ko Data dekhenge mtlb diff-diff all Data-types dekhenge in C++ language or any koi si bhi language. (detailing all things)
// 🌟 DAta-types:(mtlb ess-ess tarah ka datas hota hai.)
// as overall DATA-types 3 major types k hoteh hai::
// 1.Primitive Data (mtlb simple data or general types of data jo toh apn janteh hi hai jaise integer , )
//      1.int (jaise: -1 , -4 , 0 ,3 , 42 , 3 , 5  enn esseh datas ko apn int data mtlb integer data bolteh hai)
//      1.float (jaise: 2.11 , -2.33 enn datas ko apn float-data bolteh hai.)
//      1.char
//      1.double
//      1.boolean  ( true or false and boolean ka most and important use conditional-statements meh hota hai.)
// 2.Derived Data (mtlb derived data from primitive data)
//      1.array
//      1.pointer
//      1.reference
//      1.function (esko apn acche dekhenge ki yeh function datatype kaise aur mtlb function data kya and kaise hota hai.)
// 3.Abtract or User-defined Data (mtlb user k accordingly defined data as mtlb programming meh apn apne khud k kuch data define or designed kr skteh hai and phir usseh use kr skteh hai.)
//      1.structure
//      1.union
//      1.enum
//      1.typedef
//      1.class

// 🌟 :Datatype-Modifiers: 🌟
// as datatype-modifiers se simply apn data-k-type ko modify kr skteh hai.

// thus toh overall apn yeh sab type k datas ko store kr skteh hai, and accordingly phir use krke apna program bana skteh hai. as
// as Programming meh mainly 3-cheeze hoti hai:
// 1. Containers 2. Functions , 3.Loops
// Tip 🔔: as and phir apne code meh jab bhi apn uss variable-container ko use krenge then vaha voh variable-container uski value ko hi denote krta hai , as apnko esseh maan k chalna hai ki uss variable-container ki jagah uski valu hi hai . and as yehi cheez apnko function k liyeh maan ki chalni hai ki uss function ki jagah uski return-value hi hoti hai.

// 🌟 Comments 🌟
// C++ language meh apn double-forward-slash(//) ka use krke single-line comment daalteh hai.
// and multi-line-comments apn /**/ ka use krke daalteh hai.
// jaise as like this

// i am the single-line-comments jo ki kuch bhi koi bhi text ho skta hai.
/* i am 
multi-line comment jo ki koi bhi kuch bhi ho skta hai.
*/

#include <iostream>
using namespace std;

int main()
{
    // C++ meh Variables ko define krne ka yeh syntax as like C-language syntax ki tarah hi hai.
    // datatype variable-container-name  = data-value-to-be-stored

    // syntax of declaring:
    // datatype variable-name;

    // initialization-sytaz:
    // variable-name = data-to-be-stored;
    int var1 = 32;

    int var2;  // yaha pe apnne variable ko sirf declare kiya hai
    var2 = 51; // yaha pe apnne variable ko initialize kiya hai. (note-point: as variable ko initialize krne se phle apnko variable ko declare krna hota hai.)

    char afor_apple = 'a';

    // as apn ek saat same datatype multiple-variables define kr skteh hai as like this:
    int a = 31, b = 41;
    // as yeh esseh likhna recommended hai bcoz program esse clean and understanabl hota hai.
    char char1 = 'b', char2 = 'c'; // as character-data ko apnko single-quotes('') meh likhna hota hai.
    cout << var1;
    cout << "hello bros kaise ho";
    // as python ya JavaScript ki tarah print-statement meh at the end by-default compilation k time \n nhi lgta hai, thus toh mtlb apnko khud yeh \n(new-line-character or escape-sequence-character) lagana hoga.

    // as C++ programming meh spaces matter nhi krti hai.

    cout << "the value of var1 is" << var1 << "the value of var2 "
         << "is " << var2;

    //  as toh C++ programming meh apn ess tarah string and variables ko concinate krteh hai. mtlb apn ess tarah strings meh variables use kr skteh hai.

    cout
        << "hello bros kaise ho" << var1 + 3;
    // as toh C++ meh apn ess tarah strings and variables ko concinate krteh hai.
    return 0;
}

// 🎆 Rules for naming the Variable-continers::
