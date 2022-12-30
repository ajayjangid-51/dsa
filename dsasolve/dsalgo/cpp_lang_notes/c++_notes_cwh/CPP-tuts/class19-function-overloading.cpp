// YAHA pe Function-Overloading k bareh meh dekhenge:
// Function-Overloading means ki ek hi naam se multiple-functions banana, but unn functions k no-of-parameters change hoteh hai but datatype-of-paramter change hone se koi farak pdta hai. thus phir jab bhi overloaded-functions ko call kiya jata hai then according to given no. -of arguments, matching-function call ho jata hai.
// AS jaise koi 2-overloaded-function jinke no-of-parameters bhi same hai, but unka datatype diff hai , thus vaha pe toh phle-defined-function hi call hoga chaheh inputed-arugments ka datatype same hai k nhi hai , and agr same nhi hoteh then phle voh agruments function-paramters-datatype meh covert kr diyeh jateh hai and then function execute ho jata hai as like this:
// as overload-function name memory-k-respect meh hai.
#include <iostream>
using namespace std;

float fn1(int a, int b)
{
    return a + b;
}
// int fn1(float a, float b)
int fn1(int a, int b, int c)
// thus toh now aab yeh fn1()-fn overloaded-function khelayega bcoz ess naam se orr bhi functions hai.
{
    // return a + b + c;
    cout << "goody boy brother";
    int c = 21;
    return a + b + c;
    //yaha eska  "cannot overload functions distinguished by return type alone" ka mtlb hai ki functions oveloading sirf return-value or function-work-Box diff hone se ya rkhne se nhi ki ja skti hai. mtlb function-overloading sirf tab hoti hai jab no-of-paramters or datatypes-of-parameters diff hoteh hai mtlb hone chahiyeh and mostly no-of-parameters diff hone chahiyeh , as agr no-of-parameters same hoteh hai and but voh-datatype diff hoteh hai toh bhi function overloading nhi ho skti hai( 📓:notepoint:- as ess baat ka error apnko vs-code function-define krteh time nhi batata hai. )
    // thus toh overloaded-functions meh particularly and mainly no-of-parameters diff hone chahiyeh, and datatype of parameters diff hone se koi mtlb nhi hai agr no-of-parameters same hai toh mtlb apn phir voh overloaded-function define nhi kr payenge.
}
float fn1(int a, float b, float c) // as esseh function-overloading nhi hoti hai. bcoz esa overload-function phle upar predefined hai jismeh no-of-parameters same hai , as toh mtlb no-of-parameters diff hone chahiyeh for overload-functions
{
    return 3.21;
}
float fn1(int a, float b, float c, char e)
{
    return 3.21;
}
int main()
{
    // cout << fn1(2.34, 4.87) << endl;
    // yaha error-suggestion meh apno yeh show ho raha hai ki more than one-instance is matching of the overloaded function , mtlb functions-ka-naam match ho raha and function k no-of-paramters bhi match ho rhe hai then phir mtlb voh toh nhi chalega. function-overloading-concept k according apn functions ka naam same rkh skteh hai but no-of-parameter same nhi rkh skteh hai.

    cout << fn1(2.34, 4.87) << endl;
    // 📓:notice-point: as agr apn function k defined-paramters-datatype k alava koi dusre datatype-ka-input pass krteh hai then vaha pe phle voh agruments uss defined-paramter-datatype meh convert hoteh hai. and then phir function meh execute hoteh hai. as toh yeh baat apnko dhyn meh rkni hai, q ki kabhi kabhi apnko esseh lag sktah hai ki ess function meh apnko eske defined-paramater's-datatype k input hi dene honge otherwise apnko error show hogi, toh mtlb esseh nhi hota.

    // fn1(2, 321.32, 33.11);
    return 0;
}