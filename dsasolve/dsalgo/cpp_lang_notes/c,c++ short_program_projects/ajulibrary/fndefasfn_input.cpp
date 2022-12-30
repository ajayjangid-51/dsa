#include <iostream>
using namespace std;

// void fn(int p1, void p1(int x), int p3)
// void fn(int p1, void *p2(int x, float x2), int p3)
// void fn(int p1, void (*p2)(int x, float x2), int p3) // ✔️
void fn(void (*p2)(int x, float x2), int p3 = 1, int p1 = 10) // ✔️
// void *p2(int x, float x2) as eska mtlb pointer-to-an -function. mtlb voh container meh kisi function ka address ho.
{
    // (*p2)(p1, p3);
    // as dono same hi ek hi baat hai.
    p2(p1, p3);
}

void fun1(int p1, float p2)
{
    cout << " all is awesome brother with x and x2 " << p1 << " and " << p2 << endl;
}
int main()
{
    // fn(
    //     10, void fun1(int x, float x2) { cout << " all is awesome brother with x and x2 " << x << " and " << x2 << endl; }, 2);

    // fn(10, fun1, 3);

    // fn(
    //     10, fun1() { cout << " all is awesome brother with x and x2 " << x << " and " << x2 << endl; }, 2);

    //👿📓-note-point:  as C++ meh apn as like as JavaScipt ki tarah function ko function-input k andar hi define nhi kr skteh hai , as C++ meh apnko function ko alg se define krna hoga and then phir bas uska name-input krna hota hai.. but as JavaScript meh apn function-input meh hi function ko define krke pass kr skteh hai.. but c++ meh nhi kr sktehh 👿📓

    // fn(10, fun1, 3);
    fn(fun1);
    return 0;
}