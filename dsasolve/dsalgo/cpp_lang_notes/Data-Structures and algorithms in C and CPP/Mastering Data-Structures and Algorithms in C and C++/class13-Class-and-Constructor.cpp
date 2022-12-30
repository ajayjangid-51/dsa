/* 🌟 YAHA pe apn Class-and-Constructor ko thoda aurr acche se explore krenge: as mtlb apn class-12 meh Rectangle-class meh constructor bhi add krenge..🌟 */

//📓imp-note-point: as class meh yeh-yeh type k or mtlb yeh-yeh category k member-functions hoteh hai::
//constructor-function: (jo ki class-object allocate hone pe run hoteh hai..)
//facililator-function:( jo ki specifically class k data-members pe kaam krteh hai.. )
//accessor: (jaise get-functions) (jo ki class k data-members ko sirf access or iterate mltb simply get krteh hai.)
//mutator: (jaise setter-fn) (jo ki class k k data-members ko set krteh hai.)
//descructor-fn (jo ki class-object ko destruct mtlb dissallocate kr deta hai.)

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // 🎆 Constructor-functions: 🎆
    Rectangle()
    {
        length = breadth = 0;
    }
    Rectangle(int p1, int p2);
    // 🎆 facililator-functions: 🎆
    int area();
    int perimeter();
    // 🎆 accessor-functions: 🎆
    int getlength()
    {
        return length;
    }
    // 🎆 mutator-functions: 🎆
    void setlength(int l)
    {
        length = l;
    }
    ~Rectangle();
};
Rectangle::Rectangle(int p1, int p2)
{
    //📓-note-point: as yaha pe apn validation bhi kr skteh hai ki mtlb yeh jo inputed- l and b hai voh valid hai ya nhi hai etc..etc.. krke phir baad meh values assign kr skteh hai...
    length = p1;
    breadth = p2;
}
int Rectangle::area()
{
    return (length * breadth);
}
int Rectangle::perimeter()
{
    return (2 * (length + breadth));
}
// 🎆 Scope-resolution-operator:- 🎆
struct student
{
    int l;
    int b;
    int init(int p1, int p2);
    void display();
};
void student::display()
{
    cout << " the value of l and b is " << l << " " << b << endl;
}

//👿📓veryimp-note-point: As apn ::(scope-resolution-operator) toh defination-of-templates k members ko access krne k liyeh use krteh hai and .(dot-operator) kisi defination k allocated nodes , objects , structures k members ko access krne k lilyeh use krteh hai. 👿📓
int main()
{
    // Rectangle r1;
    Rectangle r1(20, 10);
    cout << " the area of r1 is " << r1.area() << endl;
    cout << " the perimeter of r1 is  " << r1.perimeter() << endl;
    // r1.~Rectangle();
    r1.setlength(11);
    cout << " the setted length of rectangle-r1 is " << r1.getlength() << endl;
    cout << "  " << r1.area() << endl;
    return 0;
    //👿📓-note-point: As toh apn ess course meh mainly Functions ka use hi krenge and then atlast apn unn sbhi Functions ko ek class meh combine or mtlb bind kr denge.. 👿📓
    //👿📓-note-point: As apn kisi cheez k liyeh class tab likhteh hai jab apnko voh cheez ek dam fully-fleaged chahiyeh.. mtlb kuch bhi apnko koi kaam pade.. toh q ki usss class meh sare related functions hoteh hai... 👿📓
}
