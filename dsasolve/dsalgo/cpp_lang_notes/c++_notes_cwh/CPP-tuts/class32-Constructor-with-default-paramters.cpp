// YAHA pe Parameterized-Constructor-with-default-Parameters k bareh meh dekhenge::
// Tip:- optional-parameters or default parameters hi hoteh hai mtlb dono baat same hi hai... realatively bola hai w.r.t function-calling(optional-parameters) and function-defining(default-parameters):
#include <iostream>
using namespace std;

class class_datatype1
{
    int a, b;
    char c;
    float d;
    // 📓1 : AS C++ progamming meh apn Objects only Class se hi bana skteh hai but language like JavaScript and Python(mtlb Dictionary) meh apn Object - directly bina class k bhi bana skteh hai.

public:
    class_datatype1()
    {
        a = 31, b = 201, c = 'd', d = 528.131, a++; // as apn esseh bhi ek-line meh ","(comma)-operator ka use krke assingation kr skteh hai kinhi bhi type-of-variables ka.
        cout << "I am default-constructor-fn mtlb means constructor with no paramters " << endl;
    }
    class_datatype1(int p1, char p2);
    // class_datatype1(int p1, char p2, float p3 = 31);  // 📓1.as constructor-fn-Prototype meh apn agruments ko initialize nhi kr skteh mtlb paramters ko default-paramters nhi bana skteh.

    // class_datatype1(int, char, float);
    class_datatype1(int p1, char p2, float p3);
    void showfn(void)
    {
        cout << " i am simply blank showfn " << endl;
    }
};
class_datatype1::class_datatype1(int p1, char p2)
{
    cout << "i am constructor with 2-paramters p1 and p2 are respectively " << p1 << " and " << p2 << endl;
}
class_datatype1::class_datatype1(int p1, char p2, float p3 = 21)
// class_datatype1::class_datatype1(int p1, char p2, int p3 = 31)
{
    cout << "i am constructor with 3-paramters p1 , p2 and p3 and where p3 is default-arguement are respectively " << p1 << " and " << p2 << " and defalult-agurment is " << p3 << endl;
}

int main()
{
    // class_datatype1 var_obj1;
    // 👿 class_datatype1 var_obj1(3, 'c'); 👿// instance mtlb part , tukda , constructor-instance mtlb constructor-k-parameters.  📓2. AS thus toh apnko error hi milta hai jab apne function-overloading meh same-no-of-unassinged-parameter ho. chaheh vase including-default-parameters toh no-of-parameters different ho, as usseh koi farak nhi pdta , farak toh sirf no-of.-unassigned-parameters se pdta hai. 📓3. thus toh ess baat ka apnko coding-interviews and coding-tests meh dhyn rkhna hai q ki vaha IDEs nhi provide ki jati hai. toh mtlb Logic k saat-saat apn Coding krni bhi acche se aani chahiyeh mtlb Coding krne k sare concepts apnko pata and dhyn meh hone chahiyeh. and coding k 3-main-point-of-view hoteh hai: 1. syntax , 2.compiler-working and decisions , 3. memory-allocation. mtlb coding-concepts sikhteh time apnko enn 3-approach se har Concepts ko dekhna hota hai. tabhi apnko Coding-Concepts acche se clear honge and hoteh hai.
    class_datatype1 var_obj1(3, 'c', 32.31);
    //class_datatype1 var_obj1(3, 'c'); // as yaha pe apnko error meh "ambiguous" milega mtlb not-clear milega q ki constructor-instance ki multiple-matching ho rhi hai.
    var_obj1.showfn();
    return 0;
}

// As IDE-apnko syntax dikhati hai , logic error nhi dikhti hai.. as logic toh apne pass hai as apn hi banteh hai toh logic ka toh apnko ko dhyn rkhteh hai.

// Question1 => agr kisi Function meh 3 arguments hai and unmeh ek default hai and orr overloaded-fn meh 2 arguments hai then vaha phir konsa function execute hoga.??
// answer=> we get error.