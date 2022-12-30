// YAHA pe apn "this"-pointer k bareh meh dekhenge:
#include <iostream>
using namespace std;

// thus toh "this"-keyword ka use mostly use 2-jagah hota hai: 1. tab hota hai jab functions-parameters ka naam and class-members ka dono same hoteh hai , ya ho jateh hai toh. thus vaha pe apn this-keyword ka use krke yeh specify krteh hai ki yeh ess class-ka-member-data hai.
// 2. jab apnko class-k kisi member function se apnko voh class-object hi return krvana ho tab apne pass ek hi tarika and that is ki use of "this"-keyword as orr apne pass koi tarika nahi hai return-value meh class ko return krvana mtlb class-ka-address provide krna.
// and actual meh this ek pointer hai , jo ki jis class meh present hai uss class-ko-point-krta hai. mtlb this-pointer meh jis meh voh present hai uss class-ka-address store hota hai.(mtlb in the sense ki class-object k liyeh compilation time pe voh this-keyword pointer meh resolve ho jata hai , compiler uss this-keyword meh uss class-object-container ka address store kr deta hai. thus esliy apn bolteh hai ki "this"-keyword ek pointer hai.)
class A
{
    int a;

public:
    // void setdata(int a)
    void setdata(float a)
    {
        a = a; // as yeh code-line koi galat nahi hai , mtlb apne-aap meh yeh code-line bhi sahi ki paramter a meh apnne a assing kr diya hai. ya a-member-data meh a data-member hi assign kr diya hai but yaha pe local-variable hi hai mtlb parameter hi hai q ki hamesa local-varialbe ki priority first hoti hai. thus isiliy apnko error nhi milti hai , but yeh yaha apni soch k according wala kaam nhi hota, thus toh yeh apne logic , apne algorithm k liyeh error ban skta hai, thus essi cheez ko durr krne k liyeh apn simply "this"-keyword ka use krteh hai.
        // as yeh "this" ek pointer(mtlb object-pointer) hai toh jab apn pointer se kisi object k member ko access krteh hai then phir voh apn arrow-opearator(->) se krteh hai, as q ki voh arrow-operator(->) voh kaam krta hai.
        this->a = a;
        // toh apn esseh "this"-keyword ka use krteh hai jo actual meh ek pointer hai.
    }
    A &fnreturn_classitself() // yaha A& ka mtlb hai ki ess function ki return-value koi address hai mtlb A-class-object-ka-address.
    {
        return *this;
        // implicit-call apnko dikhta nhi hai.
        // explicit-call apnko dikhta hai.

        // 📔📔📔 As toh yeh ek bohat mastam cheez hai ki apn function se pure-class-Object ko hi return kr skteh hai , and libraries-functions meh esseh bohat hota hai, and yeh hona bhi chahiyeh q ki apna kaam bohat aassan and easy ho jata hai q ki just ek cheez krne pr apnko pura object mtlb uske sare data-members and members-functions mil jateh hai , jinseh apn bohat sare kaam kr skteh hai. and apn krteh bhi hai and apnne kiya bhi hai, as in node.js and express , and mongodb meh bhi.. toh mtlb esa krna bhi chahiyeh and apnko eski samaj bhi aab hai and honi chahiyeh.
        // 👿 📓note-point: As apn kisi class ko sirf uske member-function se hi return-krva skteh hai , mtlb kisi orr other , outer function se return- nhi krva skteh.
    }
    void getdata(void)
    {
        cout << "the value of a is " << a;
    }
};
A obj111;
A fn()
{
    //return *this; // 👿 📓note-point: As apn kisi class-template ko sirf uske member-function se hi return-krva skteh hai , mtlb kisi orr other , outer function se return- nhi krva skteh.
    return obj111;
}
int main()
{
    A obj1;
    obj1.setdata(10);
    obj1.getdata();
    // cout << obj1.fnreturn_classitself();
    obj1.fnreturn_classitself().getdata(); // 👿📓:note-point ki as esseh multiple-dots(.) meh sbse phle wala function sbse phle run hota hai and sbse-baad wala function sbse baad meh run hota hai , tabbhi toh apn esseh phir function-ki-return value k according uss return-value meh koi function present toh single-line meh usko bhi call kr skteh hai.
    // 👿📓:notepoint2: jab function-input meh koi function call huaa hota hai , then tab vaha phir input meh sbse andar wala function sbse-phle call hoga and phir bahar-wala and so onn.

    int e;
    e = e;
    cout << "allo good" << endl;
    fn().setdata(4);
    fn().getdata();

    return 0;
}