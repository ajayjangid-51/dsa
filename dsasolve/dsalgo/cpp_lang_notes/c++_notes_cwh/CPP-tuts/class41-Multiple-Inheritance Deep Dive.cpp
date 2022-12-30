// YAHA  pe apn Mutiple-Inheritance ko implement krenge:
#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    int data2;
    void fillfn()
    {
        data1 = 313;
        data2 = 52;
    }
    Base1(int p1)
    {
        cout << "BASE-1-class's Parameterised-Constructor-fn" << endl;
    }
    Base1()
    {
        cout << "Base1 Default-Constructor fn " << endl;
    }
};
class Base2
{
    int data3;
    char favchar2 = 'r';

public:
    void fillfn2()
    {
        data3 = 111;
    }
    Base2()
    {
        cout << "Base2 Default-Constructor fn " << endl;
    }
    Base2(int p1, int p2)
    {
        cout << "Base2-class's Constructor-fn " << endl;
    }
};
// as toh agr classess meh Constructors define nhi hai then toh apnko kuch soch ne ki koi jarurat nhi hai,and agr classes meh default-Constructors define hai tabhi apnko kuch sochne ki jarurat nhi hai , but agr classes meh Parameterized-Constructors define hai then tab apnko soch ne ki jarurat hai at the time of class-object declration.

class Derivedmlbse : public Base1, private Base2
{
    int data5;
    char favchar4 = 't';
    char favchar5;

public:
    void fn3()
    {
        data5 = 32;
        cout << "the value of data5 is " << data5 << endl;
    }
};
int main()
{
    Derivedmlbse var_obj1;
    cout << var_obj1.data2;

    return 0;
}
// mereko viswas hai ki meh accha , mast programmer banjunga . q ki hamesa har cheezo ko explore krta hu and krta rhunga from mainly Internet google and youtube and mere kuch cse-friend logo se bhi. and apuun bas Elon-musk se inspire hai.