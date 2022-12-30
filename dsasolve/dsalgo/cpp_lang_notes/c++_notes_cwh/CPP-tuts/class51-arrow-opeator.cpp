// AS YAHA pe apn Pointer-to-object(mtlb object-k-address k store krne wale pointers) and Arrow-Operator k bareh meh dekhenge:
// as mtlb apn jab Objects ka pointer banteh hai , then vaha apn "arrow-operator(->)" ka use krke unn Objects k members ko access kr skteh hai. as like this:

// As Arrow-operator(->) se apn object-pointer jis object ko point kr raha hai uss object-k members ko acccess kr skteh hai.
#include <iostream>
using namespace std;

class basecl1
{
    int a, b;

public:
    char c = 'x';
    void setpfn(int p1, int p2);
    ;
    void showpfn();
};
void basecl1::setpfn(int p1, int p2)
{
    a = 21 + p1, b = 582 + p2;
}
void basecl1::showpfn()
{
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of c is " << c << endl;
}
int main()
{
    basecl1 varobj1;
    varobj1.setpfn(10, 4);
    varobj1.showpfn();

    basecl1 *ptr = &varobj1; // as toh apnne varobj1-named-container ka address ess ptr meh store kr diya hai.

    // as apn dynamically-Heap meh bhi "new"-keyword se pointer allocate kr skteh hai as like this:
    basecl1 *ptrr1 = new basecl1;
    // *(ptr)->setpfn(42, 41);
    (*ptr).setpfn(42, 41); // as apn ess tarah object-pointer se uss object-k-members ko access kr skteh hai.
    // and 📓:note-point: As yeh upar-wala kaam apn easily mtlb directly arrow-operator(->) ka use krke bhi kr skteh hai. jaise as like this:
    // as toh mtlb apn simply esseh bol skteh hai ki yeh ptr->   (*ptr) meh resolve ho jata hai.
    ptr->setpfn(31, 41); // as toh apn pointer se directly uss object-k-content ko access kr skteh hai, simply with the help of arrow-opearator(->).
    // thus toh choice apni hai apnko kya use krna hai , but bas apnko pata hona chahiyeh ki haan esseh bhi ho skta hai , q ki syad orr log dusre tarike se comfortable toh apnko easily pata chal jayeh ki haan yeh kya kr raha hai , ya yaha ess code ka kya mtlb hai.
    ptr->showpfn();

    // creating array of objects. dynamically in the heap by the help of operators.
    basecl1 *ptrr111 = new basecl1[3];

    ptrr111->setpfn(3, 1);
    (ptrr111 + 1)->setpfn(10, 11); // as yaha pe vohi concept lgta hai ki jab apn ek koi array declare krteh hai then vaha pe uss array se naam se hi ek uss array-container ko point krne wala ek pointer bhi ban jata hai , and thus essi baat ka apnko vice-versa bhi hota hai , thus essi cheez ko hi apply yaha kiya gaya hai.
    ptrr111->showpfn();
    (ptrr111 + 1)->showpfn();
    // ptrr1[0].setpfn(4, 5);
    // ptrr1[0].showpfn();  // as yeh toh array wala syntax ho gaya thus uske toh phir .(dot) hi kaam krta hai , but pointer k liyeh toh arrow-opeartor(->) kaam krta hai.

    return 0;
}

// as toh apn uss container ko Object bolteh hai jismeh container meh multiple data and multiple functions hoteh hai.

// cache ek memory ka naam hai jo ki cpu k ram se jada pass meh hai.