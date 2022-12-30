// YAHA pe apn CPP k sare sbhi Specifiers k bareh meh dekhenge:
// as yeh  sabhi types-of-data k liiyeh specifiers hoteh hai , jaise yeh int , float , dobuble etc..etc.. sab specifier hai jo apnko variable-define krne se phle specify krne hoteh hai.

#include <iostream>
using namespace std;

// Some-imp-Specifiers:
// 🌟🌟1. constexpr( as yeh specifier c++11 version  meh introduce mtlb add mtlb embed kiya gaya tha , and eska main implementing-Idea yeh tha ki program-performance ko increase krna badhana.) as mtlb ess specifier se computaion compile-time pe hoti hai na ki run-time pe. as q ki compilation toh ek baar hi hota hai but runnnig of program toh bohat baar hota hai, thus toh esseh agr compilation-hone meh time increase hota hai but , run-time pe time save hota hai thus toh overall yeh ek mastam cheez hai for increasing the performance of our program.  ( as similar to template metaprogramming) ..
// as toh Overall simply apn esseh bol skteh hai ki "constexpr"-keyword(or specifier) se apn apne variable ya function compile-time pe hi evaluate ho jateh hai.

// some-kuch bateh jo apnko dhyn meh rkhni hai kisi bhi function ko "constexpr" banane k liyeh.
// constexpr vs inline functions:
// as inlining se function-call apne function-body(mtlb function work-box) se replace ho jata hai, but yeh experssions toh run-time pe hi execute hoteh hai , but constexpr se toh expression compile-time pe execute , evaluate hoteh hai.

// 🔔 for more about "constexpr":visit this :
// https: //www.geeksforgeeks.org/understanding-constexper-specifier-in-c/

constexpr int fnwhichevaluateatcompiletime()
{
    cout << "hello i am constexpr-fn so it already get evaluated at compile-time only so now at run-time i am just like hard-coded-thing which is actually good." << endl;
    int a = 32;
    cout << "the value of a is " << a << endl;
}

// 📓1-notepoint: as apn programm-runtime(not compilation-time) time ko time-command se measure kr skteh hai. as toh actual meh boleh toh mtlb time-period of program running meh kafi farak pdta hai.

// 🌟🌟 2.

int main()
{
    cout << "we called constexpr-fn " << endl;
    fnwhichevaluateatcompiletime();

    return 0;
}