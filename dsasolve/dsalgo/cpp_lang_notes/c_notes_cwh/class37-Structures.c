// NOW YAHA pe apn "Structures" k bareh meh dekhenge:
// aab Simply apn boleh toh Sturcture bhi ek Container hota hai jismeh apn multiple mtlb bohat sari values ya data store kr skta hai. 
// now aab acche se boleh toh yeh Sturcture User-Defined Container, mltb ess container ko user hi banata hai , mtlb User hi ess container ko define and design krta hai ki esss Container meh kya-kya and kitni datatype-values store ho skti hai ya ki ja skti hai.

// thus toh now apn C-programming meh syntax k according Structure banana and use krna dekhenge mtlb apn Structure create , Declare and Initialize krna dekhenge.

// 🔥 creating or defining structure: 🔥 
/*
struct structure-name{
    data-type key1-name;
    data-type key2-name;
    data-type key2-name;
    .. and soo...onn bcoz yeh apni marzi hai ki apn apna structure meh kya rkhna chahteh hai.

}; */
// thus toh eska mtlb: apn ne ek new-datatype create kr diya hai and now aab apn esmeh yeh-yeh data-values store kr skteh hai.

//🔥  now declaration of structure of created structure: 🔥 
// as structure ko declare krne k do tarike hai:
/*   as apn structure ko uski defination k saat hi declare kr skteh hai ya phir alag se bhi declare kr skteh hai.
1:with defination:
    struct structure-name{
    data-type key1-name;
    data-type key2-name;
    data-type key2-name;
    .. and soo...onn bcoz yeh apni marzi hai ki apn apna structure meh kya rkhna chahteh hai.

} structure1 , structure2 ... ;
// as mtlb apnne yeh wale 2-structure Structure1 and Structure2  declare kr diyeh hai. and aage baad meh agr apnko orr yeh wale Structures(as mtlb Structure diff-diff tarike k hoteh hai) declare krne toh voh apn ess tarah kr skteh hai ya overall bhi declare apn ess tarah kr skteh hai.

2: after defination:
    struct structure-datatype-name structure1-name , structure2-name ... ;
    // as apnne yaha pe bhi structure1 and sturucture2 declare kiyeh hai. and mtlb yeh structure1-name and  structure2-name ess Employ_Structure k instance hai. mtlb ess employ_structure ki ek copy hai. jisko apn apne tarike se use kr skteh hai , mtlb esmeh apn kuch bhi daal skteh hai.
*/
//🔥  now Initializing the structure:🔥 
/*  now as apn Initialization bhi 2-ways meh kr skteh hai:
1.with declaration:
    struct structure-datatype-name structure-name = {key1-value , key2-value etc..};
    
2.after declaration:
    structure-name.key-name = data-value ;
    structure-name.key-name = data-value ; and sso... onn apn jab chaheh vaha yeh kaam kr skteh hai.

*/

// thus toh allover apn dekhe toh simply phle apnne ek container banaya , phir usko declare kiya and then usko Intialize kr diya.

// 🔥 Accesing or Retrieving Structure-elements🔥
// as jaise apn Array meh stored elements ko retrieve krteh hai as same vaseh apn Strucuture-elments ko bhi Retrieve kr skteh hai by using ". ( dot-operator)" and ess dot-operator ko "structure-member-operator" bhi khteh hai.
// now apn ess tarah Strucutures-k-member ko retreive kr skteh hai.
/*       structure-name.key-name
*/


// 🌟-note-point: As apn Structure ko locally bhi bana skteh hai , globally bhi bana skteh hai, where locally banane ka mtlb kisi function meh banana and globally banane ka mtlb function k bahar banana . prr as apn janteh ki agr apn Globally koi container-declare krteh hai then voh allover the program-life-span tk memory meh apni jagah banayeh rkhta hai , thus eska advantage bhi hai and disadvantage bhi hai. as advantage yeh hai ki apn ess Strucute ko Program meh kahi bhi kisi bhi function meh use kr skteh hai. and disadvantage yeh hai ki agr ess Structure ka use nhi ho rha kinhi ek-doo function k alava then yeh bee-faltu meh memory consume kr ke rkhta hai , thus toh esseh apna programm lack kr skta hai..means esseh performance affect hogi.

#include<stdio.h>
#include<string.h>
struct structure_for_employ_info{
        char employ_name[10];
        char employ_email[30];
        long employ_phone;
        int employ_id;
    };
int main()
{
    

    struct structure_for_employ_info t1, t2;

    // t1.employ_name = "jjjjj ";
    // t2.employ_email = "ajay";   
    // note-point: as toh apn Structure-String meh esee String-value input nhi kr skteh hai. thus toh apnko asee:  Strcpu()-fn use krna hota hai.
    strcpy(t1.employ_name , "aju jangid");

    t2.employ_id = 5;
    t1.employ_phone = 794729722;


// M2:
    struct structure_for_employ_info t2 = { "aju" , "mail.com" , 32 , 33231142};

    // structure_for_employ_info s1={ 
    //     structure_for_employ_info.employ_name = "aju jangid",
    //     structure_for_employ_info.employ_email = "linapatel518@gmail.com",


    // 🌟 print all the information of the all the employs.
    // }
    return 0;
}




// important points for sturcture:
//  1.As Structure ko Complex-datatype-container bhi bola jata hai.
//  1.Structure main use tab kiya jata hai jb apnko complex-information-data store krna ho tab. jaise: apnko employees ki inforation store krni ho jaise employ-name , address , email , id etc.. then apn ek Strucuter-container bana lenge and phir ess structure-container-datatype ka repeatly use krke sabhi empoyess ki information indivally ek container store kr skkteh hai , as otherwise apn yeh kaam agr apnn baki Datatype-container krteh hai then voh apnko phir indivally , alag variable-container bana k krna hota hai, thus phir yeh ese krne kafi irregular-information ban jati hai mtlb usseh phir manage krna bohat muskil ho jata hai , thus isiliy apn Strucuture krke yeh ese kaam easily kr lete hai.

 

// Structures bhi Container hi hoteh hai as like as array-container , bus yeh container user-defined hai mtlb enn container ko apn design krteh hai, mtlb ess container meh kya-kya data daala ja skta hai mtlb store kiya ja skta hai.
// Complex data type-container mtlb voh container jo ki sbhi ya diff-diff datatypes ko store krteh ho.  
// And structure mtlb voh container jisko apn khud design kr skteh hai, and phir uske accordingly data ko store kr skteh hai..

// And yeh esa container apn tb banateh hai jb apnko kuch specially data store krna ho jaise kisi company meh employees ki information one by one and indivally

// WHERE Structure and Union are User-Defined or User-Designed CONTAINERS hai mtlb yeh User pe depende krta hai ki enn Containers meh kya kya store ho skta hai ya kiya ja skta hai. 
// toh aage apn dekhenge ki Structures and Unions kaise banaya ya designed kiya jata hai  and phir kaise enneh data store kiya jata hai.


// 🔥 note-point: C-programming meh structure ek bohat important cheez hai. as apn Structures ka use krke kafi acche , efficient programs bana skteh hai.
// Now- yeh Structures , Unions mainly C-Programming meh hi define hoteh hai , as baki Languages jaise Python, Javascript etc meh Structures define nhi hoteh bcoz vaha jarurat hi nhi hai, ki apn Structures ya Union banayeh.


// Declare: declare krne ka mtlb memory meh ek memory-part ko reserve kr lena ya allocate kr lena.
// Initialize: initialize krna mtlb uss allocated-memory-part meh data-value daalna.
