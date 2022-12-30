// YAHA pe apn Copy-Constructor k bareh meh dekhenge:
// 🔥copy-Constructor in Cpp 🔥

// copy-Constructor simply kisi-same-class-object meh meh usi class-class-ka-already-declared-object copy kr deta hai... Mtlb phir voh new-class-object ek dam same hojayega to the assigned class-object k...

#include <iostream>
using namespace std;

class classforcpcns
{
    int a, b;

public:
    classforcpcns(int p1, double p2 = 234241)
    {
        cout << "the value of p1 is " << p1 << endl;
        cout << "the value of p2 is " << p2 << endl;
        a = p1 + int(p2);
        b = p1 - int(p2);
    }
    classforcpcns(classforcpcns &p1)
    {
        //  = p1
    }
    void show();
    // int show();
};
void classforcpcns::show()
// int classforcpcns::show()
{
    cout << "the a is p1 + p2 is  " << a << endl;
    cout << "the b is p1 - p2 is  " << b << endl;
    // return 10;
}
classforcpcns varobj1(10);
// 📔 As yeh Global-class-Object hoga , mtlb hai.

classforcpcns v1 = varobj1; // as toh apnne yeh class-object named varobj1 ess v1 meh assign kr diya hai , thus mtlb varobj1 ki sari-ki-sari assigned cheeze esmeh as it is assing ho gayi hai.
classforcpcns v2 = varobj2;
int main()
{
    cout << "the the Global class-object named varobj1 is" << endl;
    varobj1.show();
    //  << varobj1.show() << endl;
    //  as ess varobj1 ki koi return-value nhi hai isiliy apn esko cout meh for printing-use nhi kr skteh hai.

    cout << "showing v1" << endl;
    v1.show();

    return 0;
}
