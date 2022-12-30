// YAHA pe apn Class meh Static-Varialbes and Static-functions use krne k bareh meh dekhenge:
#include <iostream>
using namespace std;
static int d;

class anyclass_typeofdata1
{
    // 📓note-point: Class k har component ko mtlb part ko simply member bolteh hai.
    int a = 11;
    // static int b = 31;
    //  as member-static-variable mtlb class meh defined huyeeh static-variables ko apn esseh directly initialize nhi kr skteh hai. bcoz voh class-memory-structure meh allocate nhi hoteh hai as mtlb bus voh class se linked-ho jateh hai from static/global-memory-container se.
    // static int b;

public:
    static int b;
    void fn1(void)
    {
        b++;
        a++;
        cout << "the value of a-variable is " << b << endl;
        cout << "the value of b-static-variable is" << a << endl;
    }
};
int anyclass_typeofdata1::b = 21;
// And as static-variable by-default 0 se intialized huaa rhta hai
int main()
{
    anyclass_typeofdata1 var1, var2;
    var1.b = 300; // as static sirf ek hi baar initialize hota hai  , mtlb phir execution-cursor koi bhi baad meh static-variable-initilzing-statements ko skip kr deta hai, mtlb sirf loop meh esseh hota hai or ya recrussive-function meh esseh hota hai.

    // As apn static-variable ko class-copy mtlb employeeclass-container se access kr skteh bcoz voh classdatatype-k-parent-memory-container k 3rd-sub-parent-container for static-varibles meh allocate hoteh hai. toh mtlb uss 3rd-parenet-sub-part ko partiuclar-class-type k varialbe access toh kr skteh hai, but voh sab class-Objects k liyeh ek hi hota hai mtlb ekela hi hota hai. Mtlb jab apn xyzclass-structure allocate krteh hai memory meh then vaha pe uss memory-structure meh class-static-variable allocate hota hi nhi haii ....
    var1.b = 400;

    var1.fn1(); // 301 , 12
    var1.fn1(); // 302 , 13
    // 🎆 As note-point:: ki apnko yeh dhyn rkhna hai ki apn class-copy k Functions ko more than one times call na kare jismeh static-variable update ho raha ho, otherwise apni phir class-copy-counting distort ho jayegi or any thing voh bhi diatort ho skti hai... 🎆
    cout << "the static b is " << var1.b << endl;

    var2.fn1(); // 303 , 12
    cout << d;

    // 🔥 Static-functions: 🔥
    // static-functions voh hoteh hai jo ki static-varialbes ko access kr skteh hai, as q ki voh variables ess variable ki scope meh hoteh hai, mtlb yeh bhi dono ki time and space of exitence same hi hota hai.

    return 0;
}

// ownQuiz: Make a program which takes all the info about the order ordered on shoplift so we can make amd print a slip-of-that-product..