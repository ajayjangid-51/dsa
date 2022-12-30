// YAHA pe apn Classes ko define krna and classes meh public-access and private access k bareh meh dekhenge:
// AS class-content ki sari cheeze phle by-default private hoti hai , mtlb enn cheezo sirf or sirf Member-function(mtlb class ka memeber-function) access , update etcc.. kr skta hai. mtlb or koi bhi kuch bhi nhi kr skta hai.
#include <iostream>
using namespace std;

class studentinfo_datatypeor_memorystructure
{
    // private: or essehi by-default class meh class-k-data private hoteh hai.
    int a, b, c = 21;
    int stdu_memfn1(int p1, const float p2 = 10)
    {
        cout << "the value of constant float-variable p2 is " << p2 << endl;
        a = p1 + 21;
        b = 100;
        cout << "the updated value of a is " << a << endl;
        cout << "the initial-value of b is " << b << endl;
        return 1000;
    }

public:
    int d, e = 88;
    int st_memfn2(int p1, int p2);
    // as yaha indent-wala concept Python ne c++ se hi liya hai .
};

int studentinfo_datatypeor_memorystructure::st_memfn2(int p1, int p2)
{
    cout << "good awesome one" << endl;
    return ++c;
}
// toh apnne ek type-of-data bana diya hai mtlb ek-type-of-data k liyeh ek memory-structure bana diya hai and ess structure yeh-yeh datas store kr skteh hai and yeh yeh datas stored hai. thus toh overall- apn ess datas-combo ko simply ek alag hi type-of-data bol skteh hai. and yeh type-of-data actually memory-structure k liyeh hota hai ki compilation and programm-execution k time memory meh konsa memory-structure allocate krna hai.as toh bascially uske k liyeh nhi hota hai ki ess variable meh konsa kaise data-store hoga, but coding krne ki terms apn esse bol deteh hai takki coding krne meh aasani ho.
// thus toh koi bhi variable(mtlb Container) declare krne se memory-meh specified type-of-structure allocate ho jata hai. thus bas isiliy variable-container declare krteh time apn specify krteh hai uss variable-container ka datatype(mtlb memory-structure) mtlb uss variable-container k liyeh konsa memory-structure apnko memory meh allocate krvana mtlb konsa hona chahiyeh.
// As toh user-defined-datatype nhi hoteh hai as actually meh voh user-defined-Memory-Structure hoteh hai for just storing data. but coding krne k terms meh apn unheh datatype(type of data) hi bol deteh hai.
// As toh Class-concept samajteh time apnko yeh actual-concept janna hota hai, takki apnko koi future doubt na aayeh. mtlb apnko actual-concept dekhna hota hai.

// thus now yaha upar apnne ek memory-structure banaya hai , as toh apn uss memory-structure ko allocate krvateh hai jis memory-part ka naam(mtlb identifier) apn rkhenge cont1 as like this:
// studentinfo_datatypeor_memorystructure const1;
// as intialize krne krne ka mtlb hi yeh hota hai ki memory meh ess yeh specified memory-structure allocate ho gaya hai and abhi usmeh kuch garbage-values ho skti hai or hogi.
// const1.e;

// and then apn ess cont1 employee-memory-structure ki sub-memory-parts ko bhi access kr skteh hai jinmeh kuch variable-containers , Objects , functions ho skteh hai by simply using ".(dot)" -operator. as like this:
int main()
{
    studentinfo_datatypeor_memorystructure const1;
    // cout << const1.a << endl;  // as yaha ess student-class(mtlb student-memory-structure) ka "a"-variable inaccessible hai mtlb voh privated hai , mtlb essko sirf ess class k functions hi acces kr skteh hai, and actually boleh toh vaha memory-sturcture meh yeh privated-variable koi alag hi jagah allocate hoteh hai.
    cout << const1.d << endl;
    cout << const1.e << endl;
    cout << const1.st_memfn2(3, 4);

    return 0;
}

/*
As structure, union ,enum and class user-defined-type-of-data ko jab apn banateh mtlb create krteh then vaha pe tab voh koi memory-space nhi leteh hai.. 

As mtlb jab apn uss apne created type of data ko use krteh hai then  tab memory meh uske liyeh ek single memory-part allocate hota hai and usmeh phir sub-memory parts allocated hoteh jinka already name(identifier)diya hota hai mtlb mil jata hai..

Thus mtlb jab bhi apn apne ya kisi k created user-defined-type-of-data use krteh hai then vaha memory meh uss type-data k according memory-space allocated ho jati hai and unn memory-containers k identifiers bhi ho jateh hai. 
Mtlb memory meh ek structure ban jata hai..and uss structure meh data stored hota hai ya apn baad meh kr bhi skteh hai..

Thus toh apn enko type-of-data esliy bolteh hai as yeh data hi toh hai... But memory-allocation ki terms meh boleh toh voh data-type mtlb type-of-data k liyeh yeh ese kuch kahani hoti hai, ki apn writing-code ki terms meh enn int, float, structure , union , class data-type bolteh hai q ki memory ki terms meh voh ess tarah kaam krteh hai..

As Data-Structures mtlb ek memory-structure for storing data and managing-that-data, as thus ussko apn ek fully-fleaged Data-Structure bol skteh hai and voh hi actual meh Data-Structure hota hai q ki vaha storing plus managing ka ease hoti hai..
Thus class ko apn Data-Structure toh nhi bol payenge but hoti ek data-structure ki tarah hi hai as but apn usmeh data-managing nhi kr skteh..

Initialize krna and implement krna ek hi baat hai . Mtlb 
Initialize ==== implement
*/

/* 👿👿
classname-datatype harry;

As apnne yaha employe-datatype ka ek harry-naam se variable-container  declare kiya hai, thus toh declare krne se memory meh harry-naam(identifier) ek memory allocate ho jayegi and ess harry-allocated-memory meh orr ess datatype k according sub-memory bhi allocate ho jayegi jinka identifier bhi hota..and syd voh initiized bhi ho skteh hai.
Thus now apn essh => harry.submemory-identifier krke unn sub-memory parts ko bhi access kr skteh hai...mtlb unke saat kuch bhi kr skteh hai..

As apnko Variable-Container  ka datatype toh specify krna hi hota hai q ki uss specidied-datatype name ko dekh kr hi compiler memory meh uske dedicated-memory allocate krta hai..

Class ki private cheeze sirf or sirf   uss class k Functions hi acces kr skteh hai mtlb orr koi bhi function or koi other unnki access nhi kr skti hai..

Now private meh variables , Functions etc bohat kuch ho skta hai..
*/