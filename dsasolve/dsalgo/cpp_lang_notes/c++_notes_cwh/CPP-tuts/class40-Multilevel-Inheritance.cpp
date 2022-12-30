// YAHA pe apn Multilevel-Inheritance ko implement krenge:
#include <iostream>
using namespace std;

class Base
{
    int data1;
    char favchar;

public:
    int data2;
    void setdata()
    {
        data1 = 13, data2 = 52;
        favchar = 'o';
    }
    // int[] showcompoents()
    int showdata1(int p1)
    {
        cout << "heelo i am show-component-fn" << endl;

        // return { 4, 52, 13, 5 }
        return data1;
        // as class meh member-functino k liyeh class k sare-components as a global-component ki tarah hoteh hai.
    }
    Base()
    {
        cout << "HELLO ME base-class's DEFAULT-CONSTRUCTOR-FN " << endl;
    }
    Base(int p1)
    {
        cout << "I am Base-Class's Parameterized-Constructor-fn " << endl;
    }
    int showdata2();
    char showfavchar();
};
int Base::showdata2()
{
    return data2;
}
char Base::showfavchar()
{
    return favchar;
}

//Base obj1; // thus toh note-point: isiliy nhi de raha hai q ki esko pata hai ki default-constructor paka define toh hone hi wala hai.
// obj1.data2;

class Derived1 : public Base
{
    int data4;

public:
    void process1()
    {
        data4 = 42;
    }
    Derived1()
    {
        cout << "HELLO I M derived1-class's DEFAULT-CONSRUCTRO " << endl;
    }
    Derived1(int p1, int p4)
    {

        cout << "hello I am Derived-Class Parameterized-constructor fn" << endl;
        cout << "the p1 and p4 are " << p1 << " and  " << p4 << endl;
    }

    void allshow()
    {
        // cout << "the value of data1 is " << data1 << endl; // as yeh privated-data hai. thus toh apnko esko kisi function se acces krna hoga.
        cout << "the value of data1 is " << showdata1(100) << endl;
        cout << "the value of data2 is " << data2 << endl;
        // cout << "the value of favchar is " << favchar << endl; // as yeh favchar bhi private data thus toh esko bhi apnko kisi function se access krna hoga. and actual meh voh function apnne bana rkha hai.
        cout << "the value of favchar is " << showfavchar() << endl;
        cout << "the value of data4 is " << data4 << endl;
    }
};

class Derived2 : public Derived1
{
    int data5;

public:
    void processlevel2()
    {
        data5 = 41;
    }
    Derived2()
    {
        cout << "All Good I am the Derived2-Class's Default-Constructor-fn " << endl;
    }
    //  thus toh as jab apn ess Derived2-class-Object banyenge toh thus sbse phle eske Base-class ka default-Constructor-fn run hoga , thus toh mtlb eske BAse-class meh default-Constructor-fn jaruri hai. toh agr voh nhi hai mtlb delete ho gaya hai then usseh phle apno define krna hoga, otherwise apne BAse-class ka constructor-fn kaise call hoga mtlb phir kaise ess classs k memory-structure meh uska memory-structure allocate hoga. and Agr inheritance-Multilevel hai then har Derived-class k Base class meh default-Constructor-fn toh hona hi chahiyeh.
    Derived2(int p1, char p2, float p3)
    {
        cout << "the p1 is " << p1 << endl;
        cout << "the p2 is " << p2 << endl;
        cout << "the  float p3 is " << p3 << endl;
        cout << "All Good I am the Derived2-Class's Parmaetrized-Constructor-fn " << endl;
    }
    void allshowlevel2()
    {
        allshow();
        cout << "the value of data5 is " << endl;
    }
};

int main()
{
    // Base obj1;
    // Derived2 2var_obj1(10, 'c', 42.31);
    Derived2 varobj11(2, 'c', 31);
    cout << varobj11.data2 << endl;
    varobj11.setdata();
    varobj11.showdata1(1001);
    varobj11.showdata2();
    varobj11.showfavchar();
    varobj11.processlevel2();
    varobj11.allshowlevel2();

    return 0;
}