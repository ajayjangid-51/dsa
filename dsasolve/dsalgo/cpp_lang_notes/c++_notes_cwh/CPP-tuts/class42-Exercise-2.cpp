// Exercise-2 on OOPs Inheritance.
#include <iostream>
using namespace std;

// 🔔🔔: As hamesa Class ka first-letter hamesa upper-case rkhna chahiyeh , as q ki yeh Convention hai for the classes ki easily phir baad meh pata chal jayeh ki yeh ek koi class hai.
class SimpleCalculator
{
    double a, b;
};
class Scientific_calculator
{
    double a, b;
};
class Combo_calculator : public SimpleCalculator, public Scientific_calculator
{
};
int main()

{

    return 0;
}

// AS Questions solve krteh time sirf and mainly Writing-Code-Syntax meh sabhi cheezo ko dekhna , mtlb memory-allocation ki terms meh nhi dekhna hai , as memory-allocation toh coding-Concepts ek dam clearly samajne k liyeh hoteh hai. , and Questions ko samaj ne k liyeh Writing-Code ki terms meh jaruri hota hai., thus toh questions ko apnkko hamesa Writing-Code ki terms meh hi samajana , na ki memory-Structure and memory-allocation ki terms meh mtlb mostly sirf Writing-Code syntax ki terms meh.