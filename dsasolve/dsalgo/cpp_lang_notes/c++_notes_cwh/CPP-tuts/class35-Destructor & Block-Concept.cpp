// YAHA pe apn Destructing and Destructor and "Block-Concept" k bareh meh dekhenge:
// Destructing ka mtlb ki allocated-memory-structure(mtlb allocate-memory) ko disallocate krna. and Destructor mtlb jisseh Destructing hoti hai or mtlb jisseh apn Destructing kr skteh hai.

//Distructor-fn se apn dynamically or non-dynamically allocated class-type-memory-structure from memory ko dynamically disallocate kr skteh hai...as jaise hi apna uss object se kaam pura hojyeh ya apna apne Object-ka-Parent-Function end hojayehs tab...

//As har class-object ka Destructor-fn by-default se hota hai.. jiske work-box blank hota hai, thus toh apn uske voh default-Destructor k work-box meh kuch content daal skteh hai.

//And esseh toh program meh by-default se hi destructing hoti hi rhti hai...jaise-jaise Function-blocks , Blocks khatam hoteh rhteh hai vase-vase , as like Jaise apn ek function-block meh entrr huyeeh toh uss function-block k liyeh as a overhead uske parent-fn pe ek memory-allocate ho jati hai usske Components k according and jaise hi voh block-end hota hai uske liyeh allocated-memory bhi disallocate ho jati haii,thus mtlb yeh by-default automatically destructing hoti rhti hai... As but apn khud bhi Destructing kr skteh hai by using Block-Concept.

// Thus toh jo cpp program apn likteh hai voh bhi apn ek global-block meh likh rhe hai hoteh hai. Jiska stack-memory hoti hai..and apne main()-fn etc sab eske stack-memory-part meh load hoteh hai....

//Thus toh abhi toh apn sirf class-type-data-variables k liyeh destructor-fn dekhenge... Jisko simply class-distructor khteh hai...

#include <iostream>
using namespace std;

class classwithdesfn
{
    int a;

public:
    int d;
    int b;
    classwithdesfn(int p1, char p2)
    {
        a = p1;
        d = p1 + p1;
        b = 11;
        cout << "all good I am class's Constructor-fn with two-paramters " << endl;
    }
    ~classwithdesfn()
    {
        // 📓:note-point1: as destructor-fn ki koi input-value and koi return-value nhi hoti.
        a = 101; //  as esseh krne se toh kuch hoga nhi na mtlb jab yeh a =101 hoga , tab toh yeh eski memory se disallocate hojayegi , toh mtlb phir yeh a-variable-container bhi nahi rahega na. thus toh isiliy destructor-fn by-default hi blank hota hai, q ki usmeh kuch krne ka koi mtlb nhi hai.
        b = 111;
        cout << "hello ji i am class's Destructor-fn and now aab actually ess class ka Default-Constructor-fn mere se replace ho gaya hai." << endl;
    }
};
/*
{
    cout << b << endl;
    int b1 = 424;
    char b2 = 31;
    cout << bigb << endl;
    cout << dici;
};  // 📔 as we cannot define Block in Global-Scope mtlb in Global-memory-space
*/
int main()
{
    classwithdesfn varobj1(3, 'a'), varobj2(12, 'b');
    cout << varobj1.d << endl;
    cout << varobj1.b << endl;
    varobj1.~classwithdesfn(); // 📓📓 as apn ess tarah bich meh kahi bhi class-Obj k destructor-fn ko run kr skteh hai but-but-but yeh destructor-fn phir as a simple function ki tarah kaam karega mtlb yeh destructor ki tarah kaam nhi karega mtlb yeh allocated-class-varialbe-object ko disallocate nhi karega , mtlb nhi kr skta hai. 📓📓 but-but apn esseh kr skteh hai by using "Block-concept".
    cout << varobj1.d << endl;
    cout << varobj1.b << endl;
    cout << "hello i am cout-1" << endl;
    cout << "hello i am cout-2" << endl;
    int a = 31; // as yeh sab cheeze bhi one-by-one line-wise memory meh allocate hoti hai. mtlb essehi nhi hai function-call k alava sare variables, class-objects run-hojayenge mtlb memory meh allocate ho jayenge. haan but ek baar allocate hone k baad voh phir uske parent-function k end hone tk rhteh hai.
    int b = 5;
    int bigb = 5;
    // int dici = 12;
    {
        cout << b << endl;
        int b1 = 424;
        char b2 = 31;
        cout << bigb << endl;
        // int fn111()
        // cout << dici;

        // 🔥 Block 🔥
        {
            cout << "Block-IN ";

            cout << "all okay";
            classwithdesfn varobj3(10, 'n');
            cout << "the value of b is " << varobj3.b << endl;
            cout << "the value of d is " << varobj3.d << endl;
            cout << "Block-Out ";
        } // as apn Block k andar bhi function ko define nhi kr skteh....
    }
    // 🔥🔥 as thus toh yeh block bhi stack meh hi load hoteh hai as like other-components of function ( 📔note: as yeh function meh called-fn ki tarah as a overload nhi hota.) but bas farak itna hi hai ki jab yeh Block-end hota hai ess block se allocated memories bhi disallocate ho jati hai mtlb destruct ho jati hai, thus toh agr eska use krteh hai then apnko class-k-liyeh class-Destructor-fn ka bhi use nhi krna pdta and orr toh orr apn jab chaheh uss class-Object ko distruct kr skteh hai. thus toh mtlb yeh ek mastam cheez hai, bcoz esseh krne se apn apne program ki space-comlexity ko accha kr skteh hai, mtlb apne program ko kaam se kaam space occupy krva skteh hai.
    //  and Block ko esseh globally define nhi kr skteh.. mtlb apn sirf usseh kisi function meh hi define kr skteh hai. and Block ka bas yeh faydaa hota hai usseh ek baar allocate krke jab chaheh usseh disallocate kr skteh hai just by ending the block. as toh apn

    //cout << b2 << endl; // as apn Block-content use nhi kr skteh hai.
    // int dici = 12;

    /*
    int fn()
     {
         cout << b;
     } // 🔥📓:: as CPP meh apn function k andar function define nhi kr skteh....
    */
    cout << "hello the value of a is " << a << endl;
    cout << "hello i am cout-3" << endl;
    return 0;
}
