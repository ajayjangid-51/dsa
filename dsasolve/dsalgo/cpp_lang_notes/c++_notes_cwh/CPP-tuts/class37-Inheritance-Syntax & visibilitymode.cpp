// YAHA pe Inheritance ko use krna dekhenge mtlb Inheritance-syntax dekhenge and Visibility-mode and Derived-Class and Base-Class intialization for memory-allocation k bareh meh dekhenge:

// Inheritance's-Visibility-mode(private , public)
// as BAse-class voh hoti hai jismeh koi inheritance wali cheez nhi hoti hai.
// {{ relacing-thing }}

// inheritance-syntax:
/*
class {{derived-class-name}} {{: visibility-mode}} {{base-class-name}} 
{
    class-content:
}
// as yeh kaam apn JavaScript meh toh :(colon) ki jagah "extends"-keyword se krteh hai.

// 🔥 Visibility-Mode 🔥
// as yaha visibility-mode ka mtlb yeh hai ki yaha jo apn base-class-ka-public-content( as base-class-k-private-content ko apn in any-case inherit nhi kr skteh..) apni ess class meh fetch kr rhe hai , voh fetch-content ko apnko kaise rkhna hai , mtlb public rkhna hai ya private krna hai. as agr apn public rkhteh hai then voh class-content apni ess current-class k public-portion meh fetch hoga, and orr agr apn private rkhteh hai then voh content apni ess current-class k private-portion meh fetch hoga. and voh class-content by-default private meh hi fetch hota hai.

/
*/
#include <iostream>
using namespace std;

class employeeclass
{
    int id;
    double salary;
    int pfn1(int p1)
    {
        id = p1;
        cout << "the Id provided to employee is " << p1 << endl;
        return 2;
    }

public:
    int eroll;
    // eroll = 21;
    char emfavchar = 'z';
    int pfn2(int p1)
    {
        id = p1;
        cout << "Hello I am pfn2 and the Id provided to employee is " << p1 << endl;
        return 899;
    }
    employeeclass()
    {
        cout << "I am default-Constructor of employeeclass 🈂️  " << endl;
        employeeclass(10, 'c', 3);
    }
    employeeclass(int p1, char p2, int p3)
    {
        salary = double(p1);
        eroll = p3;
        cout << "the salary is setted as p1 and is  " << p1 << endl;
        cout << "the char p2 is " << p2 << endl;
    }
    // eroll = 1000;
    // 📓1.note-point: As apn esseh ess tarah class k ek baar declared-variables ko class meh vapise kahi orr jagah access krke uski value ko update nhi kr skteh.. as yeh kaam apn kisi member-function banake hi kr skteh hai..  mtlb apn classess-compents ko only initialize nhi kr skteh , mtlb ya toh declare kr skteh hai , ya phir define kr skteh hai. and only intialization toh apn sirf kisi function se hi kr skteh hai.
    // emfavchar = 'd';
};

// Deriving the Class:
// class programmerderivedclass : private employeeclass
class programmerderivedclass : public employeeclass
{
    // eroll = 111;

public:
    // this->eroll = 111;
    // eroll = 111; // as apn inherited-content ko kisi fn se hi access kr skteh hai.
    // emfavchar = 'g';
    int dckdck = 211;
    int dfn1()
    {
        employeeclass(10, 'v', 100);
        eroll = 2321;
        cout << "good boyd" << endl;
        pfn2(100);
        cout << emfavchar << endl;
        return 220;
    }
    // Derived-class's Constructor-fn.
    // programmerderivedclass(int p1, int p2, char p3)

    /*
    programmerderivedclass()
    { // as toh Base-Class ka bhi ek Default-Constructor hona chahiyeh. bcoz jab ess derived-class call hoti hai voh vaha pe phir uss BAse-Class bhi call hoti hai.
        // this.emplo
        // employeeclass(p1, p3, p2);
        cout << "all good i am derived-class's constructor-fn" << endl;
    };
    */
    programmerderivedclass(int p1, char p2, int p3)
    {
        cout << "I am Derived-class Parameterized-Constructor-fn with 3-parameters " << endl;
    }
};
int main()
{

    // employeeclass bvar_obj1(3, 'r', 32);
    programmerderivedclass var_obj1(3, 'c', 32); // 📔📔imp-note: as toh derived-class meh sbse phle uske base-class ka default-constructor-run hota hai and then ess derived-class ka constructor-fn run hotah hai.
    // and Base-class meh apnko default-contructor-banana jaruri hi hota hai. q ki derived-class meh Object-intializatioin k time phle base-class ka constructor-fn call hota hai q ki vaha BAse-class bhi memory-meh-allocate hoti hai (mtlb ess derived-class k memory-structure meh Base-class ka structure bhi add hota hai na isiliy Base-class meh phir constructor jaruri hai q ki constructor hi in the return memory-structure allocate krta hai as yaha pe toh apn jaise derived-class object-create kr rhe hai, thus mtlb voh eski BAse-class toh memory-meh allocate nhi hopayegi q ki yaha pe apnne yeh datatype bhi declare nhi kiya hai, thus isiliy phir jab derived-class object declare hota hai tab phir voh Base-class ka default-Constructor-fn call hoke Base-class k liyeh memory-allocate hoti hai and then ess derived-class ka constructor-fn call hoke ess derived-class k liyeh memory-structure allocate ho jati hai. )

    // as esseeh apn Base-Class k Parameterized-Constructor-fn ko call nhi kr skteh as toh yeh cheez phir apn  Base-class ya Mostly-derived-class k parameterized-constructor meh call krteh hai....
    // mtlb agr apn derived-class k default or parameterised-constructor ko call krteh hai then tabhi sbse-phle Base-class ka default-constructor-fn hi call hota hai.📔📔

    cout << var_obj1.dckdck << endl;
    cout << var_obj1.dfn1() << endl;
    cout << var_obj1.emfavchar << endl;
    cout << var_obj1.pfn2(10) << endl;
    cout << var_obj1.eroll << endl;

    // as agr ess derived-class meh koi constructor-fn defined nhi hai toh mtlb q ki base-class ka content as it is fetched hai toh mtlb phir base-class ka constructor-fn run hoga.
    // as derived-class ka by-default se defualt-constructor ban jata hai jo ki apne Base-class k constructor ko bhi call krta hai.
    // var_obj1.

    return 0;
}