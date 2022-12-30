// YAHA pe apn Operator-overloading k bareh meh dekhenge:

// visit gfg: https://www.geeksforgeeks.org/operator-overloading-c/
// visit this for tpoint better: https://www.tutorialspoint.com/overloading-stream-insertion-and-extraction-operators-in-cplusplus
//

#include <iostream>
using namespace std;

class Complex
{
    int real, imagninry;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imagninry = i;
    }
    // Complex fn + (Complex & Com)
    Complex operator+(Complex &Com) // as toh yeh ek function ki tarah hi hai , jo ki tab call hota hai jab koi 2-Complex-class-type-objects k bich meh "+" lgta hai.
    {
        Complex Bobj;
        Bobj.real = real + Com.real;
        Bobj.imagninry = real + Com.imagninry;
        cout << " you use plus(+) sign between 2-complex-type-objects " << endl;
        return Bobj;
    }
    void print()
    {
        cout << real << " + i" << imagninry << endl;
    }
};
int main()
{
    Complex obj1(4, 5), obj2(10, 12);
    Complex obj3 = obj1 + obj1; // thus toh esseh krne se voh "operator+" namak function apne aap hi call hojayega and apna kuch kaam karega and then kuch value bhi return kr dega , as yaha apnko dikh raha hai ki uss function ki value Complex-type-data hi hogi , as tabhi toh apnne phle container-type as Complex-datatype specify kiya hai.  and yaha pe obj1 toh as a parent-class ki tarah behave krta hai and obj2(mtlb right-side-operand) as uss "operator+"-fn k input meh pass hota hai.

    // Complex obj3 = obj1(3, 5) + obj2(4, 2) //👿📓-note-point: as operator-overloading meh esseh nhi kr sktehh.... 👿📓
    // cout << " the value of obj3.real is  " << obj3.real << endl;  // as yaha yeh real private-data-variables hai.
    // cout << " the value of obj3.imaginry  " << obj3.imagninry << endl;  // as yaha yeh imaginry private-data-variables hai.
    obj3.print();

    //📓2-note-point: apn enn enn operators ko overload nhi kr skteh hai and bakki sab opearators ko overload kr skteh hai.
    // . (dot)
    // ::
    // ?: sizeof

    //📓3-note-point: as operator-fn jab kabhi voh-operator use kiya jata hai then tab call hoja hai.

    return 0;
}