/* 🌟 Converting C-program to C++ -program 🌟 */
#include <iostream>
using namespace std;

class Rectangle
{

    int length;
    int breadth;

public:
    // void intializefn(Rect p1, int p2, int p3) // as aab eski jarurat nhi hai,,, q ki apn apn classes ki madad yeh sara kaam kr rahe hai..
    void intializefn(int p1, int p2)
    {
        length = p2; // as q ki length and breadth and yeh function bhi bhi ek hi memory-part meh hai isliy yeh directly accessible hai , otherwise yeh functions or anyother and yeh variables alag-alag containers meh hoteh toh vaha toh apnko esseh phir pointers ka use krna hota hai.
        // as toh yeh class ek bohat mast faydaa hai..
        breadth = p2;
    }
    int areafn()
    {
        return (length * breadth);
    }
    void changelengthfn(int p1)
    {
        length = p1;
    }
    void displayfn()
    {
        cout << " the length is " << length << " and the breadth is " << breadth << endl;
    }

    Rectangle(int p1, int p2)
    {
        intializefn(p1, p2);
    }
    Rectangle()
    {
    }
    // Rectangle(int p1)
    // {
    //     changelengthfn(p1);
    // }
};
int main()
{
    Rectangle r1; // as apnne yaah r1-class-object-memory-structure allocate kr liya hai memory meh.
    //Rectangle r1(10, 5); // as apn esseh bhi object k data-members ko direct declare and intialize kr stkeh hai simply just by defining constrcutor-fn and calling it.
    r1.intializefn(0, 2);
    r1.areafn();
    r1.displayfn();
    r1.changelengthfn(20);
    r1.displayfn();

    //📓-note-point: as toh overall apna kaam bohat easy , readable and accha ho gaya hai..
    return 0;
}