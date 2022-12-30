// YAHA pe apn Inline-Functions (and mtlb Function ki inlining krna), Default-arguments and Contants-Arguments k bareh meh dekhenge:

// 🌟  Inline-functions: 🌟
// inline-funcions simply voh function hoteh hai jinki apni call ki jagah unka work-box aa jata hai. mtlb voh staements or code-lines phir as a simple statement or mtlb expression ki tarah hi ho jati hai. thus mtlb phir vaha function ka memory meh load hone ka koi role nhi hota , but function ki baat abhi bhi retain- rhti hai ki apn koi bhi unn functioin -statements meh changement krna chahteh hai then voh apn directly uss    function-defination meh kr skteh hai,thus toh voh changment pure sabhi expression meh reflect ho jata hai. thus toh ek bohat mastam baat hai.
// as inline-function se bas function-overhead nhi banta jo ki chote-chote function k liyeh sahi hai. q ki vaha unn function ka stack meh overhead create and destroy krne meh jada time lagta hai in the comparison of ki unn function k work-box's-statements ko use krne meh. thus esseh apna programm efficient banta hai apn apni function-ease hai usseh bhi use kr skteh hai apni coding ko fast and easy krne k liyeh.
// AS function-inlining ka mtlb hai ki function k work-box's-statements ko as it is function se bahar nikal k vaha function-call ki jagah replace kr dena hota hai.

// inline-function simply voh function hoteh hai jo ki compiler se request kiyeh jateh hai compiler aab mere call ki jagah sirf-mere work-box ko hi rkh dena , thus esseh esse krne se called-function stack meh as a overhead call nhi hota hai. thus esseh time save hota hai of loading the function in the stack as overhead and unloading the function from stack.
// now apn kisi function ko inline ess tarah krteh hai mtlb ess tarah uss function ko inline-function banateh hai. as by simply using inline-keyword.
/* some important bateh about Inline-functions: as kisi function ko inline-banana by using inline-keyword is ek request hai command nhi hai. mtlb agr function inline-function banne k liyeh like hoga then voh function inline-function banega , otherwise nhi banega. and agr inline-keyword se inline-function banane ki command hoti then toh phir surely function inline banta. 
// As toh now aab apn voh kuch bateh dekhenge ki apni inline-request se function inline-ban skta and nhi ban skta.
    1.agr dedicated-function meh loops ho then nhi banega.
    2.agr dedicated-function recursive-function tab bhi inline nhi banega.
    3.agr function-ki-return-value hoti hai toh (mtlb void k alava kuch hoti hai toh) bhi inlining nhi hoti.
    4.agr function meh static-variables ho.
    5.agr function meh goto or switch-statment ho tab bhi inlining nhi hogi.
*/
// 💁‍♂️For more aobut inline-functions visit bottom-link:-

// 🌟  Default-Arguments(or default-parameters): 🌟
// 📓note-point1: as function meh default-paramters ko hamesa rightmost- rkhne hoteh hai to the regular-paramters voh paramters jinki value by-default-initialize nhi kiyeh jateh hai.
#include <iostream>
using namespace std;

/* this is good awesome */ // yeh suggestion meh dikhta hai toh mtlb yeh kafi acchi baat hai , thus toh aabse apn professional-programmer ki tarah function-defination k just upar wali line meh uss function k bareh likhenge ki what this function is for and some kuch other imp things.

// int fnwhde_arg(int p1, int p2 = 10, char p3 = 'd', float p4, int p5); // as yaha we are missing the order-of writing function-parameters.

// int fnwhde_args(int p1, float p4, int p5, int p2 = 10, char p3 = 'd')
// int fnwhde_args(int p1, float p4)

int fnwhde_args(int p1, float p4, const int p5, int p2 = 10, char p3 = 'd')
{
    int sum = p1 + p2;
    // p5++;    // 📓 as yaha pe apn yeh esseh nhi kr skteh bcoz yeh parmater constant-parameter hai.📓
    cout << "the default-parmater P3 is " << p3 << " which you actually know that it actually exists or not" << endl;
    cout << " and the value of p2 parmater which is also i think you don't know  is " << p2 << endl;
    // return 54.22;
    return 'e';
    // as yeh return-value apne function-k-return-datatype meh phle typecast hoti hai and then return-hoti hai mtlb yeh return meh value apne function-return-datatype-meh typecast hoke phir return hoti hai.
}
int main()
{
    // cout << fnwhde_args(3, 64.78);
    /* suggestion =[
        int fnwhde_args(int p1, float p4)
        int fnwhde_args(int p1, int p2 = 10, char p3 = 'd', float p4)      
    ] meh apnko function-defination k niche wali line meh jaha function-define hai uske just upar wali comment-lines ko dikhata hai, q ki voh assumption hota hai voh commented-line ess function k bareh meh batati hai. */

    fnwhde_args(4, 4, 67.77);
    /* int fnwhde_args(int p1, int p2 = 10, char p3 = 'd', float p4 = <error>)  as yaha suggestion meh p4 = <error> likha huaa aa raha and yeh indicate krta hai ki apn order-miss kr rhe hai. mtlb apnko uninitialized-parameters phle mtlb left-most-side meh rkhne hoteh hai.  as bcoz yeh accordingly setted hai in the terms ki jab function ko call krteh time jo arguments-input kiyeh jateh hai toh voh agruments in the line hi mtlb as per-indexing k according indexed-parameters meh pass kiyeh jateh hai. thus agr apn pre-initialized-paramters(mtlb default-parameters) phle mtlb kinhi uninitialized-paramters k bich meh introduce krva deteh hai then phir vaha pe voh as-per-indexing-passing-approach-concept sahi nhi banta thus isiliy apno pre-initailized-arguments(mtlb default-arguments) rightmost meh likhne hoteh hai.*/

    return 0;
}

// Visit this for more about inline-functions:: https://www.geeksforgeeks.org/inline-functions-cpp/