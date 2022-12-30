/* 🌟 NOw aab apn Template dekhenge: 🌟 */
// CPP meh "generic-classes" or mtlb "generic-defination" feature hai... Jo ki bohat mastam hai...
// Toh mtlb apn har defination ko generic bana skteh haii... where Defination mtlb structure-defination , Function-defination , class-defination , union-defination or etc..etc..
// And notice ki: apn generic-defination ko hi simply and shortly template-bolteh hai.. as esseh toh sbhi defination bhi template hi hai.. but qpn generic-defination ko ek fully-fleaged template  bol skteh hai and voh fully-fleaged hoti hi hai..
// Toh jaise generic-defination-of-class  ko simply template-class bhi bol skteh hai and mostly yahi bolteh hai..
// And same for others jaise::-
// generic-function-defination ko simply template-function bol deteh hai... And same like template-structure, template-union etc..etc..

//generic mtlb general and genexral mostly in the sense of datatype k liyeh... Mtlb voh generic-defination generic mtlb general for all the datatypes... Jaise int, float , student , long etc..etc..
// thus toh general mtlb in the sense of datatype k respect meh general class or function.

#include <iostream>
using namespace std;

class Arithematic
{
    int a, b;

public:
    Arithematic(int a, int b);
    int add();
    int sub();
};
Arithematic::Arithematic(int a, int b)
{
    this->a = a;
    this->b = b;
}
int Arithematic::add()
{
    return a + b;
}
int Arithematic::sub()
{
    return a - b;
}
/* 🌟 Converting above Class(or mtlb Class-template) to Generic-Class or mtlb Template-Class: 🌟 */
// template <class datatype>
//📓-note-point: AS apn class or typename dono meh koi bhi likh skteh hai..
template <typename Dt>
class Arithematicc
{
    Dt a, b;

public:
    Arithematicc(Dt a, Dt b);
    Dt add();
    Dt sub();
};

template <class Dt>
Arithematicc<Dt>::Arithematicc(Dt a, Dt b)
//👿📓-note-point: As ek-baar Template-class banane k baad meh apnko hamesa uss Template ka datatype hamesa mention or specify krna hota hai ,otherwise voh apna syntax-error hoga,, as q ki apnne template-class define ki huee hai. then vaha pe uska datatype specify krna mandartory ho jata hai. as otherwise Compiler will get confuse.. 👿📓
//📓2-note-point:  as Template ka effect ek block tk hi rheta hai.. toh agr apn kabhi class-member-functions ko outside define kr rahe hai then vaha phir apnko vapis se template- banani hogi.
//📓Note-point:- agr class-template hai toh paka and mostly uske member-functions bhi template-function hi mtlb generic hi honge... Toh apnko unko bhi as a template-fn hi likhna hai..

{
    this->a = a;
    //📓-note-point: as hamesa particular-block-scope meh local-paramters high-priority pe hoteh hai.. that is why only apn this-pointer ka use kr rhe hai to specify ki class-variables a and b not ki yeh a and b parameters of this constructor.
    this->b = b;
}

template <class Dt>
Dt Arithematicc<Dt>::add()
{
    return a + b;
}

template <class Dt>
Dt Arithematicc<Dt>::sub()
{
    return a - b;
}

/* 🌟 Template-fucntion: 🌟 */
template <typename G, typename H>
// G fn1(G p1, G p2 = 'c', H p3)
G fn1(G p1, H p2, G p3 = 'c')
//📓1-note-point: as apn template meh as like as function ki tarah multiple-parameters bhi daal skteh hai.
//📓2-note-point: as templates meh as like as function ki tarah templates meh default(mtlb already-intilized)-parameters daal skteh hai..

//📓-note-point: as apnko hamesa default-arguemts hamesa right-most(mtlb end) meh rkhne hoteh hai..
{
    cout << " the value of p1 is " << p1 << " and " << sizeof(p1) << endl;
    cout << " the value and type of p2 is  " << p2 << " and " << sizeof(p2) << endl;
    cout << " the value and type of p3 is  " << p3 << " and " << sizeof(p3) << endl;
    return p1;
}

/* 🌟 Template-Strcture: 🌟 */ // 👍👍 as toh Template-Structure bhi Cpp meh supported hai.. 👍👍

template <typename TT, typename M>
struct student
{
    TT rollno;
    M name;
};
int main()
{
    // Arithematic a1(10, 5);
    Arithematic a(10.2, 5.4);
    //👿📓veryimp-note-point: As upar apnne float-type inputs daale hai , but yeh Arithematic-class toh int-type data leti hai , toh jab yeh inputed-values class-data-members-containers meh assign hogi , then voh phle int meh typecaste hoke assign hogi.. as esseh apnko error toh nhi milega, but apna kaam as it is nhi hoga.. 👿📓
    Arithematicc<float> a1(10.2, 5.4);
    // as hamesa ki tarah apn yaha pe object's-type-of-data (memory-structure's-type) specify kr rahe , whereas apn angle-bracket(<>) meh class-ka-type bhi specify kr rahe hai ki apnko yeh class-structure ess datatype se chahiyeh..
    //📓-note-point: As jab bhi apn object-declare krenge then declaration k time jo bhi datatype angle-bracket<> k andar specify krenge then vaha voh Template-variable uss particular datatype se replace ho jata hai...
    cout << "the sum of a 10 and 5 is  " << a1.add() << endl;
    cout << "the sub of a 10 and 5 is  " << a1.sub() << endl;
    Arithematicc<char> a2('a', 'c');
    cout << "the sum of a 10 and 5 is  " << a2.add() << endl;
    cout << "the sub of a 10 and 5 is  " << a2.sub() << endl;

    // 🎆 Template or mtlb generic-function: 🎆
    // fn1(3, 3.32);
    fn1<long, char>(3, 'd');
    //📓-note-point: as toh apnko class, function , structure or mtlb data-type(type-of-data-name) k name meh uska type specify krna hota hai , nakki uske Object-name k saat.

    // 🎆 Template-Structure: 🎆
    student<long, string> st;
    st.name = "ajay bhai";
    st.rollno = 31;
    cout << " the st.name is " << st.name << endl;
    cout << " the st.rollno is which is here displaced as long " << st.rollno << endl;

    return 0;
    //📓-note-point: as apn phle apni class likh skteh hai , and then puri class likhne k baad phir uss class ko as generic-class meh convert krenge, as yeh practice sahi hai , thik hai bcoz esseh apnko error nhi mtlb kaam aayegi...
    //👿📓-note-point: as apn Templates ka use apni array , vector , list , queue , stack etcc k liyeh data-variables and functions bana krke jab class lihenge mtlb unn sab(datas and functions) ko bind krenge then phir uss class ko apn generic-clas meh convert krenge takki voh sbhi type of data k liyeh chlti hai, sahi rahe.. 👿📓
}