#include<stdio.h>
// YAHA pe apn CONTAINERS( VARIABLES-containers) and Datatypes(mtlb data k types) k bareh meh dekhenge:
// CONTAINER(or memory-box): container mtlb simply voh cheez jismeh data daala and store kiya jata ho. thus toh apn data ko Container meh daalteh and store krteh hai:

//  now CONTAINER bhi different types k hoteh hai on the basis of access:
/*  1.VARIABLE-container: (ess container meh different datatype k single data ko daala and store kiya jata hai and eske andar dale and store kiyeh gayeh data ko kahi orr se update( or change) easily kiya ja skta)

    2.CONSTANT-container: (ess container meh different datatype k single data ko daala and store kiya jata hai but eske andar dale and store kiyeh gayeh data ko kahi orr se update( or change) nhi kiya ja skta )

    3.STRING-Litrl-container: (ess container meh choteh se bde paragraph ko daala and store kiya jata hai)

    4.OBJECT-container: ( voh container jismeh 1 se jda values mtlb data dala and store kiya ja skta hai,
    note: but single datatype k data ko hi store kiya ja skta hai but: for JAVASCRIPT any of datatype data store kiya ja skta hai)
    5.ARRAY-conatainer: (voh container jismeh 1 se jda values mtlb data dala and store kiya ja skta hai, yeh simply special-type of OBJECT-container hi hai as bcoz ki eske k liyeh kuch alag-se dedicated functions pre-defined hai,
    note:but single datatype k data ko hi store kiya ja skta hai )
*/
// Note-point: apnko Containers ko specify krna hota hai , (where specify krne ka mtlb uske andar k data-type ko specify krna) thus jaise: int keyword yeh specify krta hai apn ek container create kr rhe hai and uske andar k data k data-type ko bhi specify kr rhe hai ki voh int hai mtlb eske andr interger aayega.

//MEMORY Concept: actually yaha Container uss memory(ram) ko specify kr rha hai, and programming ka concept kuch ess tarah hai ki jaise hr program-blocks k liyeh memory meh individual particular memory-space alloted hota hai jaise int-datatypes k liyeh alag memory-space , float-datatypes k liyeh alag memory-space and as like for all others building-blocks. and now datatypes ki liyeh alloted memory meh memory k sub-parts hoteh hoteh hai jinmeh har individual data- store hota hai , thus har memory k sub-parts meh alag-alag memory-space k hoteh hai jaise int-datatype k memory k sub-memory-parts 4-bytes(16-bits mtlb 16--0 and 1 mtlb ess sub-memory-part-se 16-wires connected hai ya koi transister) k hoteh hai, toh thus usmeh 4-bytes ka data hi store hota hai and kiya ja skta hai, thus isiley int-container ki range is from -2,147,483,648 to 2,147,483,647. and as like this for float alloted-memory its sub-part-memory size  is 8-bytes, thus we can store -9223372036854775808 to 9223372036854775807 on the basis 32-Architecture of machine and varies from Architecture to Architecture. note-point and apn enn memory k sub-memory-part ko names dete hai mtlb ek identifiers dete thus takki unheh phir kahi pr vapis se point out kr ske.




// DECLARATION and INITIALIZATION of Container:
// declaration-of container ka mtlb memory meh ek container(sub-memory-part) ko reserve kr lena.
// and Initialization mtlb uss reserved sub-memory part meh data ko daal dena , mtlb data ko store kr dena.



// ## VARIABLES:
// varialbles ek container hi hoteh hai jinmeh apn data ko daalteh and store krteh hai, pr variable meh daale and stored kiyeh data ko kabhi bhi kahi bhi update(change kiya ja skta hai thus isiliy enn container ko apn VARIABLE-container kaha jata hai) kiya ja skta hai:

// C-language meh variable-container ko ess tarah declare  kiya jata hai.
//      datatype-of-container name-of-container(identifier of sub-container or memory) ; 

// and  C-language meh variable-container ko ess tarah initialize kiya jata hai.
//    identifier-or-name = data;
 
// and C-language meh variable-container ko ess tarah declare and initialize kiya jata hai:
//     datatype-of-container name-of-container(identifier of sub-container or memory) = data;

// RULES for giving the name or setting Identifier TO the sub-memory-space-part.
/*  1. apn C-language k keywords ko as a name use nhi kr skteh hai.
    2. name should start with only letters or underscore(_),
    3. name can only contain letters, numbers and underscore(_)
    4. name meh whitespace nhi anaa chahiyeh.
*/




// DATATYPE:
// simply boleh toh DATATYPE ka mtlb DATA-ka-TYPE mtlb data kaisa hai kis tarah ka hai.
// data: data alag-alag type ka hota hai:
// now on the basis of data, data diff-diff types k hoteh hai: mltb diffrent datatypes mtlb diff types k data:
/*  1.single or basic DATATYPE: (Single-Data and voh data jo singly input kiya jata hai) jaise: int , float , char , double etc....
//  2.grouped or DERIVED DATATYPE: (grouped-Data and voh data jo grouply input kiya jata hai.) jaise: objects , Arrays , pointer, structure , union.
//  3.enumeration DATATYPE: jaise enum..... 
//  4.void DATATYPE: ( empty data , jin no-data ko represent krteh hai) jaise void. 

*/
// 
// 1. integer data
// 2. float-data 
// 3. string-data etc..
// toh jaise apn varialbe,Constants,function-return-value, String-litrl meh data daal and store krteh hai thus toh phle  simply apnko enn varialbe,Constants,function-return-value, String-litrl  k datatype ko specify krna hota hai mtlb enkes-andar k data-k-type ko specify krna hota hai.

// some code:
int main()
{
    printf("%lu" , sizeof(int));
    printf("hi");
    printf("%lu" , sizeof(char));
    printf("hi");
    printf("%lu" , sizeof(long));
    printf( "%d",3+7);
    //imp-note-point: printf( "symbol for the data which this function will print or the ahead function will return what vale mtlb vahi hi print hogi na" , data or functions  ) and but agr phle se data ka type kahi orr mention hai then tb bhi apnko yeh phir se specify krna hi hota hai. jaise:
    //  and its same for scanf( "symbol" , address of container );
    int a = 5;
    printf( "%d",a);
    // otherwise jaise variable 2 is not declared thus;
    printf(2);


    // where %lu is a symbol for unsingned-long
    // where %d is a symbol for integer
    // where %f is a symbol for float
    // and sizeof() is a function jo ki apnko variable-container ki memory-part ki size in bytes return krta hai, mtlb batata hai.
    return 0;
}
