#include <iostream>
#include "class77-Namespace-in cpp.cpp"
using namespace std;
using namespace stmcc; // as now mtlb apnne apne stmcc-namespace-content ko yaha apni ess file meh as as it is fetch kr liya hai. mtlb eske variables ko apnne as a global-variable and function ko defined-function bana liya hai.
// as toh apne yaha apna khuda namespace banake use kiya hai, jo ek mastam baat hai.
using stmcc::fn1; // as apn stmcc-namespace ka fn1-function sirf copy kr rhe hai.

// int var1 = 100;
using ::tt;

int main()
{
    cout << "hello bill-gates sir" << endl;
    // stmcc::var1 = 190;
    // cout << stmcc::var1 << endl;
    // var1 = 13;
    int var1 = 10; // 📓1:- notepoint: as agr apn namespace k variables , functions apne ess file meh alag se define kr deteh hai then phir vaha apna using namespace bhi kaam nhi karega , mtlb phir toh apnko apne namespace k variable, function ko use krne k liyeh (::)-operator ka use krna hi padega.
    cout << var1 << endl;
    cout << ::var1 << endl;
    cout << stmcc::var1 << endl;
    fn1(4, 10);
    cout << "the value of tt is " << tt;
    return 0;
}
