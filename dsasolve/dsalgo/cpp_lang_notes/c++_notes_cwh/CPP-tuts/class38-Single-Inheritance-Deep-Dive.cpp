// YAHA pe apn Single-Iheritance k bareh meh ek dam Deep-Dive krke dekhenge:
#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int showdata1();
    int showdata2();
    Base()
    {
        cout << "hello I am BAse-class's default-Constructor-fn " << endl;
    }
    Base(int p1, int p2)
    {
        cout << "the p1 and p2 is " << endl;
        cout << "hello I am BAse-class's default-Constructor-fn " << endl;
    }
};

void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::showdata1()
{
    return data1;
}
int Base::showdata2()
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
    Derived(int p1, int p2)
    {
        cout << "all good  I am Derived=Class's Parameterized-Constructor-fn " << endl;
    }
};
void Derived::process()
{
    data3 = 200;
}
void Derived::display()
{
    cout << "the value of data1 is " << showdata1() << endl;
    cout << "the value of data2 is " << showdata2() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
    // Base obj1;
    // Base obj1(4, 4);
    Derived dvar_obj1(4, 5);
    // 📔 as by-default se har class ka apna default-constructor phle se hi hota hai, jo ki Actually agr class meh koi orr Constructor(default or parameterized) define ho jata hai then voh phir phle se by-defaulted default-constructor delete ho jata hai. thus yeh note krne wali baat hai ki inheritance meh derived-classes ka koi object jab declare hota hai then vaha phir uss Derived-class ka Constructor(any) run hone k saat, uske BAse-class ka bhi sure and sirf-only default-constructor run hota hai. thus toh Base-Class meh default-Constructor present hona jaruri hai and esseh toh apn janteh hi hai ki har Class meh uska default-Constructor(as yahi memory-structure allocate krta hai as esseh toh yeh implicitly hi call ho jata hai or exlicit bhi call hota hai) toh present hota hi hai but other parameterized-Constructor define hone ki vajah se inbuilt-default-constructor delete ho jata hai thus toh ess baat ka apnko dhyn rkhna Inheritancing meh.  and BAse-class k parameterized-Constructor toh apn phir Derived-class k Constructor-fn meh call kr skteh hai agr apnko esseh kuch krna hi hai toh.

    // dvar_obj1.setdata();
    // dvar_obj1.process();
    // dvar_obj1.display();
    return 0;
}