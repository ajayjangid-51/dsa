// Some other Datatypes(mtlb some other Types of Data) k liyeh Containers dekhenge:
// AS now YAHA Pe apn Pointers k bareh meh dekhenge:
// As Pointers bhi simply ek Datatype(mtlb ek Type of data mtlb pointer-data) k liyeh Containers hi hoteh hai. as mtlb enn Pointer-Container meh "memory-container-Address-type-of-data" store hota hai. as yeh memory-container-Address bhi ek type ka data hota hai , as but yeh integer , float etc.. data jaisa nhi hota. jisko simply pointer bola jata hai.

// 🌟Pointer or reference ka mtlb ek hi hai mtlb dono ka mtlb address hi hota hai.. jaise a ka reference mtlb a ka address. jaise "a" ka rederence dena mtlb "a" ka address dena.
#include <iostream>
using namespace std;

int main()
{
    int b = 31;
    // int a = &b;
    // int *a2 = b; // as apn janteh hi hai ki datatype-container meh vohi datatype store ho skte hai toh thus pointer-continer meh bhi sirf pointer-data hi store hoga na.
    int *ai = &b;
    cout << &b << endl;
    cout << ai << endl;
    // as pointer-datatype-container k liyeh yeh keyword hota hai: <int*>

    // * (deferencing-operator) 📓note-point: as int* meh * star alag cheez hai and single * alag cheez hai mtlb single * toh ek operator hai and int* toh ek pointer-datatype-k-liyeh-keyword hai.
    // as yeh *(derefrencing-operator apne RHS meh jo operand(as espe pointer-operand lgta hai) lgta hai ussmeh stored value return krta hai. as like this:)
    cout << "the stored value at ai-pointer is " << *ai << endl;
    cout << "the stored value at ai-pointer is " << *(&b) << endl;
    // cout << "the stored value at ai-pointer is " << *b << endl; // 👿 as ess *b ka koi sense nhi hai na q ki *-operator toh sirf pointer-operand lgta hai na, and thus tabhi toh voh phir uss pointer mtlb address-datatype meh jo value store hai voh return krta hai.

    // Pointer's Pointer: mtlb apn Pointer's Pointer-datatype-container meh pointer's Pointer mtlb POinter ka address store kr skteh hai. and pointer's pointer-datatype-k liyeh yeh "int**" keyword hota hai.

    // 📓👿 int **c = &b;
    // 📓👿: as yeh galat hai bcoz apn janteh hi hai ki yeh pointer's-pointer datatype-container hai mtlb toh esmeh toh Pointer's-pointer hi store hoga na .
    int **c = &ai;
    cout << "the address of pointer => ai mtlb ai's pointer mtlb pointer's-pointer = " << c << endl;
    cout << "the value of pointer => ai mtlb ai's pointer mtlb pointer's-pointer = " << *c << endl;
    cout << "the value of pointer => ai mtlb ai's pointer mtlb pointer's-pointer = " << **c << endl; // or
    cout << "the value of pointer => ai mtlb ai's pointer mtlb pointer's-pointer = " << *(*c) << endl;
    cout << "the value of pointer => ai mtlb ai's pointer mtlb pointer's-pointer = " << *(&ai) << endl;
    return 0;
    // 📓notepoint and Tip: as kisi bhi cheez k liyeh ek accha base hona chahiyeh , thus toh apnko phle hamesa acche base pe focus krna hota hai and krna hai , takki aage phir koi cheez complez na lage , as mtlb koi cheez complex nhi hoti , as voh ek weak-base ki vajah se complex lgti hai, thus toh aaj tak koi bhi cheeze Complex nhi hai , as voh complex lgti hai pr hoti nhi hai. and complex bcoz of weak-base lgti hai.
}
// as mutiple-datas ko apn simply Array bolteh hai.

// operator-stament or operator-expression (voh expression jismeh operators and uske Rhs and Lhs meh operands hoteh hai.)

// oops ka use krna mtlb class ka use krna mtlb class ka acche se use krna mtlb class ki sari properties hoti hai unko use krna, takki apna program accha and mast bane.

// Pointer-Arithematic mtlb Pointer(mtlb addresses ) pe Arithematic operation krna. jinseh apn memory k orr kaee address pe ja skteh hai. mtlb apn address k saat khel skteh hai.
