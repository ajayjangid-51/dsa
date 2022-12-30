// YAHA pe apn Constructor-Overloading mtlb Overloading of Constructors krna dekhenge:
// as Apn ek Class meh multiple-constructors bana skteh hai.
//
#include <iostream>
using namespace std;

class class_datatype1
{
    int a, b;
    double c;

public:
    class_datatype1()
    {
        a = 11;
        cout << "the value of a is assinged 11" << endl;
        b = 15;
        cout << "the value of b is assinged 15" << endl;
        c = 17;
        cout << "the value of c is assinged 17" << endl;
    }
    class_datatype1(int, int);
    class_datatype1(int, int, int);
    class_datatype1(int, char, float, double);

    void showfn(void)
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};
class_datatype1::class_datatype1(int p1, int p2)
{
    a = p1;
    cout << "the value of a is assinged p1" << endl;
    b = p2;
    cout << "the value of b is assinged p2" << endl;
    c = p1 + p2;
    cout << "the value of c is assinged p1+ p2" << endl;
}
class_datatype1::class_datatype1(int p1, int p2, int p3)
{
    cout << "hello i am constructor with 3 parameters " << endl;
    a = p1;
    cout << "the value of a is assinged p1" << endl;
    b = p2;
    cout << "the value of b is assinged p2" << endl;
    c = p3;
    cout << "the value of c is assinged p3" << endl;
}
class_datatype1::class_datatype1(int p1, char p2, float p3, double p4)
{
    cout << "Hello i am class-Contructror with 4 parameters " << endl;

    a = p1;
    cout << "the value of a is assinged p1" << endl;
    b = p3;
    cout << "the value of b is assinged p3" << endl;
    c = p1 + p3 + p4;
    cout << "the value of c is assinged p1+ p3 +p4" << endl;
    cout << "and and " << endl;
    cout << "the value of char p2 is " << p2 << endl;
}
int main()
{
    class_datatype1 varObj1; // 📓1. as agr default-Constructor-defined bhi hai par agr privated- hai then apn  esseh only class-variable ko declare bhi nhi kr skteh hai , as bcoz default-constructor ki presence meh chahiyeh voh privated ya publiced kiya huaa ho then yeh class-object-variable declaration sirf declaration hi nhi hota yeh declaration with constructor-fn calling bhi hota hai , jisseh memory-structure bhi allocate hota hai and constructor-fn bhi invoke hota hai.
    varObj1.showfn();

    class_datatype1 varObj11(2, 10);
    class_datatype1 varObj11(5, 3, 10);
    class_datatype1 varObj11(5, 'd', 34.13, 10.421);
    varObj11.showfn();

    return 0;
}