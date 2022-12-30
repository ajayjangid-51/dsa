// YAHA pe apn User-Defined-DAta-types-Containers( mtlb User-defined Types of data k liyeh Containers) dekhenge:
// User-Defined-DAta-types-Container banana mtlb ek Container banana for storing a user-defined type of data.
// User-Defined or Derived-datatypes bas simply premitive-types of data ka bas ek unique combination hi hota hai. mtlb jaise class-datatype or class-type-of-data voh esa data hai jismeh keys , objects , functions types-of-data hoteh hai. mtlb ek combination of types-of-data bhi apne aap meh programming and general meh ek type of data hi hota hai. thus yeh baat apnko dhyn meh rkhni hoti hai q ki essi baat pe programming-languages meh datatypes(mtlb types of data) bane hai.

// derived-datatype mtlb primitive-types-of-data ka combo. and user-defined-datatype mtlb derived-datatypes hi hota hai but bas farak itna hai ki user-defined-types-of-data meh user apne according kinhi bhi primitive-datatypes ka combo bana skta hai. thus mtlb user-defined-datatypes kinhi bhi primitive-datatypes ka combo ho skta hai. as phir uss datatype k according hi memory-part ban jati hai.

// As now aab apn User-Defined-data-types ki baat krenge, as jaise apn janteh hi hai ki combination of different types-of-data ek datatype(type of data ) hi hota hai. , thus now C++ programming meh apn apne khud k derived-datatypes bana skteh hai( thus isiliy user k duvra banyeh gayeh derived(by combination) datatypes ko simply user-defined-datatypes bolteh hai.) , mtlb jaise apn ek combination bana skteh hai primitive-types-of-data ka. thus phir ess combination k hisaab se memory meh ek memory-part banke allocate ho jata hai jismeh phir sub-combination-of-types-k-according unke size k according diff-diff memory-parts allocate ho jateh hai. thus mtlb phir apn kabhi bhi apne user-defined-datatypes ko declare , define krteh hai then memory meh uss user-defined-type-of-data wala memory-part allocate hota hai. thus yeh toh memory-allocation k respect meh apnne baat ki.

// now Structure-Catergory of User-defined-datatypes:
// as Structure-keyword se apn koi bhi mutiple-datatypes-ka-combination(mtlb ek derived-datatype) bana skteh hai. as ess user-defined k liyeh datatype-combo k datatype k liyeh sub-memory-part allocate hota hai.
// as Union-keyword se apn koi bhi datatype ka single-datatype mtlb universal-datatype bana skteh hai. jaise apnn ess user-defined-datatype meh esske datatypes meh se koi datatype store kr skteh hai. thus union mtlb enn  datatyeps-k-combo meh se koi bhi ek
// as union-keyword se jo memory allocate hoti hai voh memory ki size ess datatype-combo meh highest-size wale datatype k equal hoti hai. thus isiliy apn sirf uss datatype-combo meh se koi ek type-of-data hi ess union-user-defined-datatype meh store kr skteh hai.

// thus toh allover yeh structure, union and enum toh simply keywords hai jinseh apn apne user-defined datatypes bana skteh hai.

// As thus Now aab apn User-defined-types-of-data banane ka syntax dekhenge. mtlb enko banana dekhenge.
// As ek baar datatype banake apn phir uss datatype k variable-contaier bana skteh hai and type of data k according voh data store kr skteh hai.
// struct class14-Structures, unions and enum types of data
// {
//     /* data */
// };

#include <iostream>
using namespace std;

// as apn user-defined-datatype ko function k bahar ya function k andar bhi bana skteh hai.
struct exe_typeofdata_or_datatype
{
    int exe_id;
    int exe_rollno;
    char exe_favchar;
    double exe_phno;
};
// } ae11, ae22; as apn directly essehi bhi user-defined-datatype-variable-container ko ess declare kr skteh hai.

typedef int itni;
// typedef keyword-name aliter(other name) // as apn typedef se C++ meh reserved keywords ka aliter bana skteh hai, and yeh kaam mostly apn user-defined datatypes k liyeh hi krteh hai.
// as now abb ess user-defined-datatype k liyeh yeh struct exe_typeofdata_or_datatype hi keyword hai , and yeh aab ek mano ki keyword ban chuka for exe_typeofdata k liyeh.
int main()
{
    itni dd = 311;
    cout << dd;
    // struct exe_typeofdata_or_datatype ae1 = ae1.exe_favchar = 32; as now apn user-defined-datatype-variable-container ko directly define nhi kr skteh mtlb saat meh declare and initialize nhi kr skteh. as user-defined-datatype-variable-container ko phle apnko declare krna pdta hai and then alag se initialize krna hota hai as like this:
    typedef struct exe_typeofdata_or_datatype xx;

    struct exe_typeofdata_or_datatype ae1;
    // as thus toh yeh (struct exe_typeofdata_or_datatype) pura ess exe-datatype k liyeh keyword hai.
    ae1.exe_favchar = 'd';
    ae1.exe_id = 21;
    ae1.exe_phno = 323221;
    ae1.exe_rollno = 057;

    xx ae2;
    ae2.exe_favchar = 'z';
    cout << ae2.exe_favchar;
    cout
        << ae1.exe_favchar << endl;
    cout << ae1.exe_id << endl;
    cout << ae1.exe_phno << endl;
    cout << ae1.exe_rollno << endl;

    int exe_typeofdata_or_datatype = 101;

    // hint_datatype mtlb type of data
    union hint_datatype
    {
        int id_hint;
        int not_hint;
        double no_hint;
        char char_hint;
    };

    union hint_datatype hintfor_aju;
    hintfor_aju.char_hint = 'e';
    // hintfor_aju.id_hint = 21;

    cout << hintfor_aju.char_hint << endl;
    cout << hintfor_aju.id_hint << endl; // as esmeh phir apnko koi kuch koi bhi un-alloted container ki stored value show hogi mtlb garbage-value show hogi.
    cout << hintfor_aju.char_hint << endl;

    enum enum_1
    {
        aju,
        harry,
        qazi,
        sonny,
        david,
        naz
    };

    cout << " 🔥 enum enum 🔥" << endl;
    // cout<< enum_1.aju;
    enum enum_1 a1 = aju;
    // or apn esseh bhi kr skteh hai
    enum_1 a1 = aju;
    // as mtlb ess a1-variable meh enum_1 datatype hi aayega.
    // int enum_1 = 32; yeh yes this is possible.
    cout << a1;
    // cout << a1;
    cout << harry;

    // aju
    return 0;
}