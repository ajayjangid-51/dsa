// YAHA pe apn Constructor and Constructor meh Default-Contructor k bareh meh dekhenge:
// As Constructor simply ek function hi hota hai jiski koi return-value nhi hoti. AS Constructor-fn simply class k liyeh define hota hai. and eska naam same as-it-is class-name k equal hi hota hai.
// AS jab bhi apn class-copy mtlb object mtlb class-Object ko memory meh allocate krteh then uss class-memory-structure meh constructor-function k liyeh bhi ek sub-memory-part hota hai jismeh constructor-fn load hota and yeh constructor-fn as turant hi invoke mtlb execute ho jata hai jab class-memory-structure memory meh allocate hota hai.... Mtlb coding ki terms jab koi class-typeofdata declare hota hai tab..
// 🔔 And "destructor-fn" allocateed class-memory-structure ko memory se dissallocate  kr deta hai..

// 🌟 AS NOw toh Constructor-fn 2 types k hoteh hai:
// 1.jinke parameters nhi hoteh hai.( Default-Constructor)
// 2.jinke parameters hoteh hai. (Parameterised-Constructor)

// thus now abhi YAHA toh phle apn Default-Constructor k bareh meh dekhenge and agli class30 meh Parameterised-Constructor k bareh meh dekhenge:

// 🌟 Main use of Constructor-fn.
// 📓1-notepoint: As class meh constructor ka use apn class-components ka initialization krne k liyeh krteh hai and some code likteh hai jo apnko class-object banteh hi apne-app execute krvane hai bcoz usseh class-copy mtlb class-object banateh hi mtlb memory-allocate hoteh hi voh allocated-memory meh constructor-fn ko compiler apne-aap hi invoke mtlb call kr deta hai mtlb voh constructor apne-aap hi execute ho jata hai...
// Mtlb constructor-fn k liyeh by-default hoti hai and thus toh apn eska use krteh hai..

#include <iostream>
using namespace std;

class class_obj1
{
    int a, b, c;

public:
    // void cclass_obj1(int p1, int p2)
    // class_obj1(int p1, int p2)
    class_obj1()
    // NOte-point: As apnko Constructor (mtlb auto-invoking-fn of the class as the class-variable allocated or mtlb declared) hamesa public meh define krna hota hai , otherwise apna constructor-fn execute nhi hota hai, q ki private-part and public-part k liyeh alag-alag memory allocate hoti hai and dono ka ek-dusre se koi link nhi hota.
    {

        a = 21;
        // a = p1;
        cout << " a is assigned" << endl;
        b = 22;
        // b = p2;
        cout << " b is assigned" << endl;
        c = a + b;
        cout << "hello brother i am a Constructor-fn and i automatically get invoked when any variable of this class_obj1-type-of-data is created " << endl;
        showfn();
        // 📓1. Note-point: As toh apn Constructor-fn meh Member-functions ko bhi call kr skteh hai irrespect of the Scope of the Member-functions.
    }
    void showfn();
};
void class_obj1::showfn()
{
    cout << "the assined value by class-constructor-fn is listed below: " << endl;
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of c which is a+b " << c << endl;
}

int main()
{

    // NOw apn Contructor ko do tarike se call kr skteh hai , mtlb do tarike se apn usemeh parameters passs kr skteh hai.
    // 🌟 1.implicit-call
    // class_obj1 varobj1();   📓2. as default-Constructor-fn toh apne app hi call ho jata hai jab apn class-variable declare krteh hai , but parameterised-Constructor ko apnko call krna hota hai usko bhi apn enn dono-tariko se call kr skteh hai. as like this by inputing the paramters of parameterised-constructor-fn::
    // class_obj1 varobj1(p1 , p2 ...);

    // class_obj1 varobj1; // 📓3. note-point: AS agr class- meh Constructor-fn define hai then phir toh apnko class-variable declare krteh time useeh implicit or explicit call krna ho hota hai. as apn phir essehi sirf only class-variable declare krke memory-structure allocate nhi kr skteh. thus toh apnko esseh krna hota hai.

    // 🌟🌟
    // Constructor-function-Calling
    // 1.if Constructor-fn is defined and
    // class_obj1 varobj1; // as esseh apn nhi kr skteh hai agr apne Class meh Constructor-fn defined hai.

    // 2. if constructor-fn is not-defined.
    // class_obj1 varobj1;
    // class_obj1 varobj1();  // esseh nhi kr skteh hai bcoz ess class meh koi constructor-fn nhi hai jo ki class-variable declaration mtlb memory-structure-allocation time execute ho jata hai.
    class_obj1 varobj1 = class_obj1(); // as esseh kr skteh hai agr constructor-fn nhi hai toh bhi.
    // 📓4: As agr constructor-fn nhi hota hai toh phir essehi implicit-way toh use nhi kr skteh, but Explicit way ko toh apn use kr skteh hai. 👿 as agr apn esseh krteh then apne class-k sabhi variables 0(zero) se initialize ho jateh hai.
    // varobj1.cclass_obj1(4, 8);
    varobj1.showfn();
    // 🌟 2.Explicit-call : AS explicit-call meh apn directly constructor-fn ko hi call krteh hai.. and phir voh constructor-fn apni class-object ko return-bhi kr deta hai...phle khud execute hoke..
    // and As other-languages meh new-keyword mtlb creating a new copy-of-class .... but C++ language meh "new"-keyword nhi hota hai.

    // class_obj1 varobj1 = class_obj1(); // class-varialbe-declaration and default-constructor-fn-Call-calling.
    // class_obj1 varobj1 = class_obj1(p1 , p2 ); // class-varialbe-declaration and parameterised-constructor-fn-Call-calling.
    // varobj1.showfn();
    return 0;
}

//🔥Tip: 👿🔔 As jab bhi apnko koi error mile toh directly bas voh line-no pe focus karo ki error konsi line meh hai.. as mtlb uss error-suggestion le focus nhi karo q ki voh error-suggestion dieect computer jaise without emotional tarike meh likhi hoti hai mtlb puri explain nhi kari hoti .thus toh phle  apnko voh error-line pe apn accordingly-syntax-coding galti-dekhni hai and then phir uss suggested error ko dekhna hai ki compiler-way-of-spealing meh usseh kya khteh hai..  as Thus toh esseh apni shandarr-samaj badhegi ki haan esseh kuch bola jata hai professionally and formally..