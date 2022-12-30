/* 🌟 REvising-important concepts of C and C++ programming and coding🌟 */
/* 🌟 AS NOW YAHA pe apn Arrays k bareh meh dekhenge: 🌟 */

/* 🌟1 Array-data-structure's strucuture , design and its idea 🌟 */
// As array ek Data-structure mtlb memory-structure hi hota hai. jismeh array-store ho skta hai and hota hai mtlb collection-of-same-type-data store ho skta hai and hota hai(as q ki array mtlb data-collection). now aab apn ess array-data-structure (mtlb "array" -named data-structure ) ko acche se dekhe mtlb eska structure dekhe ki kis tarah yeh memory meh design hota hai , and eske kya faydee hai , kya ease hai and eske kya cons hai for accessing data from its structure.
// and commanly and overall boleh toh data-structure mtlb ek dhacha , ek container jismeh data store hota hai mtlb data store kiya jata hai. and yeh dhacha contiguous-dhacha hota hai. as like this:

/*
    __ __ __ __ __ 
   |__|__|__|__|__|

*/
// as now apn ess dhache ki baat krenge.. ki kaise yeh dhacha kaise sahi hai for accessing data, retrieving data , etc.etc and kaise kya disadvantages hai , kya cons hai of this dhacha. thus toh enn sab k liyeh apn phle yeh dekhenge ki ess dhache(mtlb structure for data  mtlb data-structure) pe kaam kaise hota hai. as toh jab bhi yeh data-structure yani mtlb array-data-structure declare hota hai(mtlb memory yeh memory-structure allocate hota hai) then tab vaha ek pointer banata hai same exactly ess array(as har jagah array mtlb array-data-structure hi) k naam se ek pointer banata hai , and yeh pointer ess array-memory-structure meh jo phela memory-part(mtlb unit-container mtlb simply "node") uska address store hota hai.
// note-point: arr[3] = *(arr+2) , as toh yeh arr[3] compilation-time meh as *(arr+2) tarah resolve hota hai. as toh mtlb apn ess tarah simply pointer-arimetic krke array-memory-structure ko access rk skteh hai. mtlb apnko kuch orr kaam nhi krna hoga for data-accessing its data , thus toh isiliy bola jata hai ki array se data-access krna mtlb retrieve krna bohat aasaan hai mtlb fast and quick hai.
//(👿📓-note-point: As memory meh nodes har nodes ka address fixed hota hai, thus toh apn allocated-nodes ka address kaise bhi change nhi kr skteh.. or mtlb kisi node meh kisi dusre node ka address bhi assign nhi kr skteh hai. and apn kisi node ko usko address deke memory meh allocate nhi kr skteh.. q ki voh kaam cpu-khud krta hai as according to him.👿📓)
// where but array ek main-disadvantage yeh hai ki apn array meh nodes ko remove or extra node add nhi kr skteh ek baar arry-declare krne k baad mtlb ek baar array-memory-structure ko memory meh allocate krne k baad.(🎆 as apn ess variable of (arr+5)-address ka node esseh allocate nhi kr skteh.. 🎆 ). thus toh yahi disadvantage yahi hai ki array ki resizing nhi ki ja skti. jo ki esseh toh jaruri hoti hai for taking care of space-complexity of the program. (Tip: as yeh kaam apn list meh kr skteh hai , as uska structure-design thoda alg hai jiski vajah se apn voh kaam kr skteh hai.)
//📓-note-point: as vector ek array hi hai jo ki dynamically allocate hota hai and yeh ek bada size of array ko lekar chlta hai.

//📓1-note-point: As yeh array-data-structure k dedicated-functions , dedicated-statements-or-commands for declaring-array and intializing etc...etc sab kuch phle se by-default provided hi hoti hai, thus toh phle apnko ess array-memory-structure ko banana nhi pdta. toh apn bina soche samaje aaram se directly array-memory-structure ko use kr stkeh hai. (Tip: as apn linked-list memory-strucuture , stack-memory-structure , queue-memory-strucutures ko bhi directly use kr skteh hai mtlb apnko unko bhi banana nhi padega, as apn directly ek module-file import kr lenge jismeh uss particular memory-structure ki bani banaee "class" hoti hai, and thus toh apn phir simply uss class ka object declare krke mtlb memory meh voh partiuclar-memory-structure allocate krke phir usske dedicated-functions se uss particular-memory-strucuture ko use kr skteh hai mtlb access kr skteh hai mtlb usmeh data-store kr skteh hai, uss data ko access kr skteh hai , retrieve kr skteh hai and bohat sare etc.etcc dedicated-functions ki working k according voh-voh kaam kr skteh hai.  as but apn yeh data-structure khud se create, design or banana bhi dekhenge and enke liyeh dedicated-functions bhi banayenge::)
//📓1-note-point: As toh simply agr apnko ko memory-structure ko use krne toh vaha apnko simply enn memory-structures ki working , advantages , disadvantages k bareh meh pata hona chahiyeh.
//📓2-note-point: As apn memory-structures "class" se hi banateh hai mtlb "class" meh hi banateh hai as q ki jo bhi apn class-block meh likhteh hai voh mtlb apn ek structure hi bana rahe hai.

/* 🌟2. array-dedicated- statements(mtlb direct-statments) and functions(indirect-block-of-statements): 🌟 */
// 🎆 As abhi phle apnne array-data-struture ka structure , design dekha and now apn Array-data-strcuture or mtlb array-memory-structure dedicated statement or commands and dedicated-functions dekhenge: jinmeh apn yeh dekhenge ki enn statements, commands and functions se kya hota hai and mtlb apn ennseh kya-kya kr skteh hai ess memory-structure pe. 🎆
/*
🎆statements for declaring array and initialinzing:🎆
   1. int arr[no-of-nodes or mtlb size of array]; // as ess statement se apn array declare krteh hai.
   2. int arr[5] = {2,4 ,6, 8 , 10}; // as apn ess tarah array ko declare and saat meh initialize bhi kr skteh hai. and jaise and as array ko declare krne mtlb array stack meh main-fn-memory-block meh allocate ho gaya hai and initialize krna mtlb uss array-nodes meh data fill bhi ho gaya hai.
   3. cout << arr[index-of-node]; // as ess statement se apn array-nodes ko access kr skteh hai.

   note-point: As apn aab aage array k bareh meh orr acchse detail meh dekhenge:mtlb array related sab kuch bateh dekhenge::


*/

/* 🌟3. Basic and Most array's Use fields: 🌟 */
// 1.as apn esko for storing multiple values which having index as a key(mtlb as a identifier).
// 2.

/* 🔗🔗🔗🔗🔗🔗🔗 
 AS toh apnne yaha pe array ko declare krna , initialize krna and declaration se array memory meh global-memory or stack-memory meh allocated hota hai. as per its declaration
 🔗🔗🔗🔗🔗🔗🔗 */

//🎆 Array-implementation:
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
#include <iostream> // note-point as ess "iostream-file" meh "stdio.h" file bhi hai thus toh apn for I/O k liyeh pritf and scanf-functions bhi use kr skteh hai as like C-language-coding.
using namespace std;

int main()
{
    int A[5]; // as apnne yaha pe array of 5-nodes ko declare kr diya hai, mtlb array ko allocate kr diya hai.
    A[0] = 3; // accessing the node and initializing it. mtlb assigning value init.
    A[1] = 10;
    A[4] = 32;

    int Ar[4] = {2, 4, 6, 8}; // declaring and initializing array simultaneously.
    int Arr[] = {2, 4, 6, 8}; // as declaring and initializing array simultaneously meh apnko array ki size phle mention krne ki jarurat nhi hai.

    int Arrr[10] = {2, 4, 6, 8}; // as esseh meh remaining(mtlb unintialized nodes) by-default zero(0) se initialized ho jateh hai..

    int Ar2[10] = {0}; // as toh esseh 0-thindex element zero se initialize ho jata and baki bhi 0 se initialized ho jateh hai, thus toh mtlb kabhi kabhi simply esseh bhi bol diya jata hai ki esseh krne se pura array hi zero(0) se initialized ho jata hai.

    cout << " the size of array mtlb space taken or occupy by array " << sizeof(A) << " bytes" << endl;
    cout << " the value of A[1] " << A[1] << endl;
    cout << " the value of A[0] " << A[0] << endl;
    cout << " the value of A[4] " << A[4] << endl;
    printf("the value of A[1] is %d \n", A[1]);
    printf("the value of A[4] is %d \n", A[4]);
    cout << " the value of Ar[0] " << Ar[0] << endl;
    cout << " the value of Ar[1] " << Ar[1] << endl;

    cout << " the value of Arrr[0] " << Arrr[0] << endl;
    cout << " the value of Arrr[1] " << Arrr[1] << endl;
    cout << " the value of Arrr[5] " << Arrr[5] << endl;
    cout << " the value of Arrr[7] " << Arrr[7] << endl;

    for (int i = 0; i < 10; i++)
    {
        // "type here to repeat"
        cout << " the value of Arrr[" << i << "]" << Arrr[i] << endl;
    };

    //👿📓-note-point: "For-Each-Loop" in CPP 👿📓
    for (int x : Arrr)
    {
        cout << "the value of Ar2[" << x
             << "]" << x << endl;
        //📓-note-point: yaha "x" rhs-meh-present array k index ko nhi element ko present kr raha hai.
        // as toh yaha int x:Arrr ka mtlb each element-value in Arrr-array.
    }
    // As "for-each-loop" maximumly array k liyeh hi use hota hai.

    // as apn older-compilers k according apn variable-array or mtlb dynamic-array(mtlb jo ki runtime pe allocate mtlb memory meh allocate hota ho) ko simultaneouly declare and intialize nhi kr skteh haii... mtlb ya toh declare kr skteh hai ya phir initialize kr skteh hai.. but yeh cheez modern-compilers k according valid hai , mtlb apn dynamically-allocated array ko bhi simultaneously declare and intialize kr skteh hai.
    int n;
    cin >> n;
    int dnArr[n] = {3, 6, 9, 12, 15, 18, 19};
    // int dnArr[n];
    // dnArr[0] = 13;
    // dnArr[4] = 59;
    // cout << " the dnArr[0] is " << dnArr[0] << endl;
    // cout << " the dnArr[4] is " << dnArr[4] << endl;
    for (int x : dnArr)
    {
        // "type here to repeat"
        cout << " the dnArr[0] is " << x << endl;
    };

    return 0;
}