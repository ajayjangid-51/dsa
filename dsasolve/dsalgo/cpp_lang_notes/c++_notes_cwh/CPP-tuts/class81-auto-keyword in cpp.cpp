// YAHA pe apn auto-keyword k bareh meh dekhenge:
// as toh apn "auto" ka use simply datattype ko na specify krne k liyeh use kr skteh hai, mtlb apne jaise python , JavaScript meh hota hai na ki apnko specify nhi krna pdta node ka datatype.

// visit Link: https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/

#include <iostream>
using namespace std;

int main()
{
    auto a = 12;
    cout << " the value of a is  " << a << endl;
    cout << " the  " << typeid(a).name() << endl;
    return 0;
}