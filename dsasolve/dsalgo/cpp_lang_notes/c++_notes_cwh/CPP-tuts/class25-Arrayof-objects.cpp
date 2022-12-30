// YAHA pe apn Array-of-Objects( or means ki Objects's-Array mtlb Objects's-group or means ki Array-memory-structure meh Objects assingn krna ) , inputing class-type-of-data in function and returning-class-type-of-data from the function k bareh meh dekhenge:
// 🔥1.
// 📓notice: as Array memory-Structure k saat-saat actual meh Data-Structure hai, bcoz ess memory-structure k data ko apne pass access krne ki hi functionalities hai. that is why apn Array ko memory-Structure ki jagah Data-Structure bolteh hai.

// 👿  Array of class-copy where class-copy ko apn simply object bolteh hai... Thus mtlb class-user-defined-type-of-data variable ko apn simply object-variable bolteh hai.. 👿

// 🔥 2.Passing-Class-type-of-data mtlb simply boleh toh Object in functions🔥
//
#include "iostream"
using namespace std;

int tick = 10;

class class_datatype1
{
    int a, b = 1;
    // int arr1[];
    // int arr2[] = {2, 3, 5, 1};
    int arr2[4] = {2, 3, 5, 1};
    // int arr2[];
    // 📓note-point: As apn CPP meh array ko dono only decalaration or declaration-with-initialize meh hai then vaha apnko uske no-of-members bhi specify krne hoteh hai, otherwise apnko error show hoti hai. as but apn array ko initialize bhi krteh then tab ko koi ditakt nhi hogi, but declaration meh dikakt hoti hai.
    // tick = 200;
    // tick++;

public:
    int c = 21, d = 10;
    void fn1(void)
    {
        // this.a = 101;
        this->a = 101;
        a = 200;
        cout << "the value of a which is accessed by using this-keyword" << a << endl;
    }
    int x = 9;
    int fn2(int x)
    {
        cout << "the value of int x-variable is " << x << endl;
        cout << "the value of int x-variable is " << this->x << endl;
        x = x + 3;
        this->x = x + 3;
        // 📓note: AS toh apnko isiliy essehi condition meh this Keyword ka use krna pdta hai for specify that particular instance(mtlb koi variable , object , function etc ) ess class wala hai.
        cout << "the value of int x-variable is " << this->x << endl;
        cout << "the value of int x-variable is " << x << endl;
        return 1;
    }

    //
    int fn4(class_datatype1 p1, class_datatype1 p2)
    {
        p1.a = 21;
        p2.d = 20;
        cout << "the value of p1.a is " << p1.a << endl;
        cout << "the value of p2.d is " << p2.d << endl; // as yaha apnko garbage value milegi q ki a koi value assing nhi hai ess class meh kisi member-function k bahar.
        cout << "the value of p2.a is " << p2.a << endl;
        cout << "the value of p2.b is " << p2.b << endl;
        cout << "the value of p1.c is " << p1.c << endl;
        p1.a = p2.a + p2.b;
        cout << "the value of upadated p1.a is means the sum of p2.a and p2.b is " << p1.a << endl;
        return (p1.c + p2.d);
    }

    // 📓note-point: AS like Function ki return-value bhi koi class-type-of-data ho skta hai mtlb koi object ho skta hai. as like this:
    class_datatype1 fn3()
    {
        class_datatype1 obj1;
        return obj1;
    }
};
int main()
{
    class_datatype1 var_objarray[10], ob1, ob2;
    // AS toh apnne yaha ess class1-type-of-data ka ek array bana liya hai mtlb allocate kr liya hai,usmeh 10- esseh datatype-varialbles mtlb esseh 10 memory-structures  allocateh ho gayeh hai ek contigous-memory meh(mtlb ek array meh).
    // 📓Thus toh esseh apn tab krteh hai jab jaise apnko 1000 or more student, employee etcc.. class-type-of-data use , store krna ho. then vaha pe apn simply array-of-that-class-type-of-data bana leteh hai as toh voh ek easy and scable kaam ho jata hai jo ki ekdam-mastam baat hai.
    // var_obj1.c;
    // var_obj1.d;
    var_objarray[0].fn3();
    var_objarray[0].fn2(10);
    var_objarray[0].fn3().d;
    var_objarray[0].fn4(var_objarray[2], var_objarray[3]);
    var_objarray[0].fn4(ob1, ob2);
    // as apnko yaha ess fn4()-fn k liyeh suggestion mil raha hai. int class_datatype1::fn4(class_datatype1 p1, class_datatype1 p2) , thus toh yaha apn dekh rhe hai ki fn-parameters k datatype mtlb parameters-type-of-data kuch alag hi hai mtlb koi int , float , char , array etc.. kuch nhi hai thus toh apn samjateh hai ki then yeh phir koi class-type-of-data hai. thus mtlb phir apn uss class-type-of-data ko jake dekh skteh hai ki voh kaisi usmeh kya-kya components defined hai. and yeh Cheez apn orr bhi third-party-libraries k liyeh bhi apply kr skteh hai, bcoz vaha jo apn functions , etc..etc cheeze dekhteh hai unmeh kuch or mostly essehi functions hoteh hai , thus toh mtlb aab apn unko easily samaj skteh hai ki yeh functions phir kaise kaam krteh hai or ya krenge.

    return 0;
}