// YAHA pe apn Virtual-Functions k bareh meh dekhenge:
// Virtual-Functions simply member-functions( mtlb kisi class meh defined-huyeh) hoteh hai jo Base-class meh declare and define kiyeh jateh hai and but phir kisi derived-class meh override(mtlb re-define mtlb same ussi prototype se but diff defination se define hona) kiyeh jateh hai.
// as Virtual-Functions simply voh functions hoteh hai jinki derived-class meh overriding ki ja skti hai.
// thus toh apnko lgta hai ki ess function ko override krna chahiyeh in the derived-class then apn phir class meh function ko as a Virtual-function declare , define krteh hai.

// as jab apn derived-class k variable(mtlb object) ko point krteh hai in the base-class-type-pointer. then phir vaha pe .....

// and then apn phir exactly uss derived-class meh exactly uss redefined-function ko call kr skteh hai:
// As virtual-functions ka mostly use runtime-polymorphism k liyeh hota hai.

// and now apn Virtual-functions ko "virtual" se declare krteh hai as like this:

/*
// 🎆 Rules for defining Virtual-functions  🎆
// Virtual-Functions-Rules (mtlb Virtual-Function define krteh time apnko kuch bateh dhyn meh rkhni hoti hai: )
//  1. virtual-function kisi class ka friend-function nhi banna chahiyeh. and virtual-fn static nahi ho skteh hai. q ki asii koi feature cPP meh add nhi ki gayi hai.
//  2. as kisi bhi class ka virtual-distructor-fn ho skta hai but virtual-constructor-fn nhi ho skta.
// 3.they are accessed by object-pointers.
// 4.as virtual-fn ko derived-class meh re-define krna jaruri nhi hai.
*/

// 📓: as toh virtual-function ka use isiliy hota hai ki apn base-class k function ko acche se baad meh override kr sake mtlb acche se re-define kr sake mtlb functions-overding se apn conf and apn sirf virtual-functions ki hi overiding kr skteh hai mtlb apn virtual-functions ko hi override kr skteh hai.thus toh kabhi apnko function-overriding krni ho then apnko phle uss function ko uski class meh as a virtual-function define krna hoga. q ki tabhi overriding krne ka koi sense hoga, otherwise overriding krne ka koi mtlb nhi hai. as q ki jab class meh virtual-function hota hai , then compiler khud apnne app uss class k object meh ek VPTR bana deta hai. and phir according apn derived-class-object-address base-class-type-pointer meh daal deteh hai and then phir pointer se function ko access kr leteh hai by using "->" -operator.

// as toh kisi bhi function ko virtual-function banane se , phir agr base-class-type-pointer meh derived-clas-object ka address assign huva ho , and then phir ussi pointer se apn uss virtual-function ko access kare then vaha phir uss virtual-function ka derived-class meh agr overidden-function present hai , defined hai ,then phir vaha pe voh overidden-function hi run hoga. otherwise phir voh hi Base-class wala function(virtual-fn) hi run hoga.

// 🎆 As toh apn yeh sara kaam(mtlb base-class-pointer banana and phir useh derived-class-object ko pointt krvana mtlb uss pointer meh derived-class-object ka address assign krna, and then phir apna base-class ya derived-class se overridden-fn ko access krna, takki runtime-polymorphism hove.  ) apn sirf and sirf runtime-polymorphism krne k liyeh krteh hai , q ki esseh krne se hi runtime-polymorsphim hoti hai and polymorphism se bhi kuch apne faydee hai. toh yeh all-over apn sab sirf-or-sirf runtime-polymorphism krne k liyeh hi krteh hai. 🎆

//📓-note-point: inherited-function mtlb voh function jo ki inheritance meh defined hoteh hai mtlb derived-class k functions.

// thus toh virtual ek keyword hai jisseh apn rumtime-polymorphism kr rahe hai , then apn runtime-polymorphism meh derived-class k function ko call kr skteh hai. mtlb yeh bhi kr skteh hai virtual-keyword se.
#include <iostream>
using namespace std;

class basecl
{
    int a, b;

public:
    int c, d;
    void setabcd()
    {
        a = 3, b = 41, c = 49, 58;
        cout << "the value of a is " << a << endl;
    }

    // now after seeing that ki yeh setabcd()-fn jo apnne derived-class meh re-define kiya hai mtlb override kiya hai(note-point: override-fn and overload-fn function thode alag hoteh hai mtlb override-fn toh exactly same hoteh hai , whereas overload-fn meh no.of parameters and or datatypes diff hoteh hai.) voh fn apn ess base-class-Object se call nhi kr pa rahe hai.

    virtual int vrfn(int p1) = 0; // as yeh apna pure-virtual-function hai.
    // int vrfn(int p1)
    // {
    //     cout << "i am the virtual-fn of the basec1-class which is also a base class of derivedc1-class" << endl;
    // }
};

class derivedcl : public basecl
{
public:
    void setabcd()
    {
        cout << "i am setabcd-fn of derived-class which as actually as a re-defined of setabcd-fn of base-class " << endl;
    }
    int vrfn(int p1)
    {
        cout << " i am the vrfn-fn which is defined in derivedc1-class and i am defined by function-overiding means that ki yeh exactly same function ess class k base-class meh hai." << endl;
    }
};
int main()
{

    derivedcl varobj1;
    varobj1.setabcd(); // as apn yaha pe
    varobj1.vrfn(10);

    //basecl varobj11;    // 👿📓note-point: as yeh apnko yaha error milega ,as q ki apn yeh basec1-class "abstract class" hai and abstract-classes ka object nhi banta.
    //varobj11.setabcd(); // as apn yaha pe derived-class meh jo apnne ess setabcd()-fn ko override kiya gaya tha , uss overridden-setabcd()-fn ko apn call nhi kr pa rahe hai.  thus toh esko krne k liyeh phir apn virtual-fn ka use krteh hai.
    //varobj11.vrfn(3);

    cout << "now using virtual-fn as like this:" << endl;

    int a = 21;
    // basecl *bp1 = &varobj11;
    basecl *bp1;    // as yaha apnne base-class memory-structure k address ko store krne wala pointer banaya hai(as pointers meh datatyep-specify krna jaruri hota hai q ki syad particular types-k-container k liyeh diff jagah pe pointer hoteh honge etc..as like that.). mtlb yeh pointer base-class-memory-structure k address ko store krta hai orr mtlb kisi orr cheez k address ko store nhi krta hai jaise : int a yeh store nhi karega.
    bp1 = &varobj1; // as yeh apn kr skteh hai.
    bp1->vrfn(2);   // Yaha "->(arrow-operator) ka mtlb hota hai ki ess bp1-address pe mtlb yeh address jis container ka hai usmeh koi cheez, thus toh apn ess tarah address(mtlb pointer) ka use krke bhi uss address pe present functions ko access kr skteh hai. and jab apn kisi class-memory-structure k function ko access krteh hai then vaha uss class k virtual-fn ka newly-overridden function hi point hota hai. and agr uss base-class meh voh overridden-function as a "virtual"-specified nhi hai then phir uss base-class ka hi function-run hoga.
    derivedcl *vp1;
    vp1 = &varobj1;
    vp1->vrfn(3);
    vp1->setabcd();

    return 0;
}

// compiletime(mtlb early-binding)
// runtime (mtlb late-binding)

// as agr class meh virtual-fn hota hai then as jab bhi apn derived-class ka object banateh hai , then vaha compiler ek pointer create krta hai of Vtable-container. where ess Vtable-container meh derived-class k functions k pointers-hoteh hai mtlb address-variables hoteh.
// as but yeh Vtable toh phle se hi bani huee hoti hai.

// algorithms meh apn diff-diff tarike dekhteh hai , sikhteh hai diff-diff task , cheezo ko solve krne k liyeh.