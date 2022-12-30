// YAHA pe apn Parameterized-Constructor-fn k bareh meh dekhenge:
// Parameterized-Constructor simply voh Constructors hoteh hai jinke Parameters hoteh hai chaheh assigned or unassigned.
/*
#include <iostream>
using namespace std;

class class1
{
    int a, b, c;

public:
    class1(int p1, int p2)
    {
        cout << "the value of paramters p1 and p2 is " << p1 << "and " << p2 << endl;
        a = p1, b = p2, c = p2 + p1;
    }
    class1(int p1, char p2, float p3)
    {
        cout << "the value of paramters p1 and p2 is " << p1 << "and " << p2 << " and " << p3 << "is" << endl;
        a = p1, b = p3, c = p2 + p3;
        cout << "the value of character-p2 is " << p2 << endl;
    }
} var_obj1(3, 7), var_obj2(3, 'e', 43.31);
int main()
{

    return 0;
}
*/
// quiz: Create a function which take two point-classes as parameters and return the distance between that points
#include <iostream>
#include "cmath"
using namespace std;

int a = 13;
int a = 31; // as apn multiple times ek scope meh chaheh global-scoope meh bhi varibles define nhi kr skteh hai.
class Point
{
    int a, b;
    Point(int p1, int p2)
    {
    }
};
float disfn(Point p1, Point p2)
{
    // float exp = ((p2.a - p1.a) + (p2.b - p1.b));
    // float distance = sqrt(exp);
    // 📓📓1. As toh apno hamesa jo bhi apn module-file(mtlb header-file) use kr rhe hai uss file meh jake apnko actual meh dekhna hai ki apn apni file meh yeh function-use kr rhe hai toh mtlb yeh kis tarah defined hai and unn header-file se apn orr bohat sare Coding-concepts sikh skteh hai jaise apnne ess "cmath"-header-file meh _GLIBCXX_CONSTEXPR , #endif , #ifndef etc.. etc.. k bareh meh dekha jo apn actually phle nahi janteh the... thus reading-other-code ek mastam cheez hai bcoz vaha usmeh apnko essi bohat sari new-new bateh pata chalti hai , mtlb new Coding-syntax and Concepts pata chalteh hai jo uss file k coder ne kr rkhe hai. toh mtlb apnko jada se jada dusri top-notch-third-parties mtlb mainly in-built-header-files k codes ko read krne chahiyeh and mostly voh code toh krne hi chahiyeh jo apn apne file meh use kr rhe hai.
}
int main()
{
    cout << a;

    return 0;
}