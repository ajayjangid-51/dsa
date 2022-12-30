// YAHA pe apn Variable-Referencing and TypeCasting k bareh meh dekhenge:
//
// 🌟1. scope-resolution-operator(::) -:
// as scope-resolution-operator global-variable ko specify krta hai ki mtlb yeh global-variable hai. thus eska use apn mostly tab krteh hai jab global and local operator ka name same hota hai and apnko specificly global-varialbe use krna hai then vaha phir apn scope-resolution-operator ka use krteh hai. as like this:
// cout << ::gvar1;
// literal mtlb value , jaise string-literal mtlb string-ki-value

// 🌟2. note-point: AS Coding meh jis datatype ki memory-size badi hoti hai uski priority jada hoti hai. mtlb jaise 43.2 ka datatype as double hi mana jata hai (as toh eskliy apn phir 43.2f lagteh hai takki apn specify kr sake ki yeh ek float-value hai , yeh cheez apno function-overloading meh krni important hoti hai as mtlb esseh toh nhi hoti q ki vaha toh apn phle hi specify kr deteh hai as its datatype) , and jaise int and float ka arithematic-operation hota hai toh operation-result ka datatype float hota hai.

// float a = 45.3;
// float a = 45.3f; // or bcoz case- matter nhi krta.
// float a = 45.3F  // as yaha toh apnko suffix("f") specify krna jaruri nhi hai bcoz voh appne phle hi specify kr diya hai ki yeh ess variable ka datatype float hai. as eski need toh function-overloading krne k time hoti hai.

//  👍  Typecasting:  👍
// AS Typecasting means ki kisi-variable-container k datatype ko dusre-datatype meh change krna , thus toh phir uss Container meh changed datatype wala data hi assign hota hai. and as in terms of memory-allotment: TypeCasting se variable-container k liyeh jo phle allocated memory-part hota hai voh badal jata hai updated database wale memory-part meh voh varialbe-container allocate ho jata hai.
// now C++ -coding meh apn Typecasting ess tarah krteh hai mtlb ess syntax meh krteh hai q ki essi syntax ko commpiler samjta hai mtlb essi syntax k according compiler ka compilation hota hai.

#include <iostream>
using namespace std;

int gvar1 = 31;
int gvari = 5;
int main()
{
    // scope-revolutin-operator:
    int gvar2 = 21;
    int gvar1 = 10;
    cout << gvar1;
    cout << ::gvar1;
    cout << ::gvari;
    cout << gvari;

    // datatype-priority:
    float fi = 33.2;
    float fii = 33.2f; // as yaha need nhi hai apnko specify krne k liyeh ki yeh float-number hai.
    cout << "the datatype means memory-size of fi" << sizeof(fi) << endl;
    cout << "the datatype means memory-size of fii" << sizeof(fii) << endl;
    cout << "the datatype means memory-size of 43.4" << sizeof(43.4) << endl;
    cout << "the datatype means memory-size of 43.4f" << sizeof(43.4f) << endl;
    cout << "the datatype means memory-size of 43.4F" << sizeof(43.4F) << endl;
    cout << "the datatype means memory-size of 43.4l" << sizeof(43.4l) << endl;
    cout << "the datatype means memory-size of 43.4L" << sizeof(43.4L) << endl;

    cout << endl;
    cout << endl;

    // *******Reference-Variable********
    // as Referece-variables mtlb voh "variable-name" jo kisi varialbe ka psedo name hai, mtlb vooh variable-name uss variable ko represent krta hai mtlb uska reference(mtlb address hi rkhta hai mtlb voh as. like this hota hai varii1 => *(&var) )
    //  and "Variable-referencing" ka mtlb ek variable ko multiple names dena.
    // int bri;
    int brim;
    int vari1 = 31;
    // as yaha int-specify kiya toh mtlb yeh sure hai ki ess variable meh koi int-datatype hi aayega.
    int &bari = vari1;
    int &bri = vari1;       // as ess bri-naam se koi variable-phle se then yaha pe phir refernce-variable vala concept kaam nhi karega. as yaha pe phir "pointer-operator" wala concept kaam krta hai.
    int varii1 = *(&vari1); // or yeh cheez apn directly bhi kr skteh hai.
    int &variii1 = vari1;
    //  mtlb yaha pe varii1 and &variii1 same-same hai.
    cout << vari1 << endl;
    cout << bari << endl;
    cout << "the varii1 is " << varii1 << endl;
    cout << "the variii1 is " << variii1 << endl;
    cout << bri;
    cout << &brim;
    // Typecasting:
    cout << int(43.31) << endl;
    cout << float(vari1) << endl; // or as like this: bcoz C++ meh apn typecasting esseh dono tarike se kr skteh hai.
    cout << (float)vari1 << endl;

    // 🔔Tip: as toh typecasting se apn kisi int-container meh float-datatype ko int meh typecastre krke store kr skteh hai as like this:
    int inti1 = int(56.241);
    int inti2 = (int)56.241;

    // as bas apnko Coding-krna acche aana chahiyeh mtlb Coding-concepts ekdam acche se clear hona chahiyeh. thus phir toh apn easily real-life-problems or kaise bhi problems ko code meh covert kr skteh hai.

    return 0;
}

// As reference-variable meh jab koi variable assign hota hai then vaha phle uss assigned-variable ka adress access hoke uss address value access hoti hai thus reference-variable kuch ese hota hai..
// Int &rfvar = var1;
// As apn esko esseh bhi dekh skteh hai..Int &rfvar = *(&var1);
