// YAHA pe apn Array-data-structure(mtlb memory-structure mtlb simply array-container) k bareh meh dekhenge:

// As array-memory-structure ek simple memory-structure hai as mtlb yeh memory-structure meh chote-chote memory-parts(memory-part mtlb ek unit-container or unit-cell) hoteh hai in the contiguous-manner(mtlb ek-k-baad-ek) jismeh apn data-store krteh hai, thus array-memory-structure or data-structure meh apna data ess tarah contigous-memory-parts meh store hota hai. thus isiliy array ko kabhi-kabar simply esseh bol deteh hai ki array-memory-structure ek collection-of-data which are stored at contiguous-memory-location(mtlb parts).
// now as ess array-memory-structure k memory-parts ki ek fixed-size k hi hoteh hai, thus isiliy apn ess memory-structure meh same type-of-data hi daal skteh hai mtlb store kr skteh hai.
// and as simple-human-language meh bhi array ka mtlb hota hai ek continous-collection, toh mtlb essi mtlb k basis pe ess memory-structure ka naam array rkha gaya hai.
// 📓: As array-memory-structure ko ek baar memory-meh allocate krne k baad eski size fixed hoti throughtout the program running, mtlb apn allocated-memory-structure ki size shrink or expand nhi kr skteh hai mtlb ess array-memory-structure meh jo memory-parts hai unko delete ya unmeh add nhi kr skteh hai, as bcoz q ki esseh koi dedicated-functions nhi hoteh array-memory-structure k liyeh. but esseh dedicated-function vector-memroy-structure k liyeh hoteh hai, jo ki apn aage baad meh cpp-stl meh dekhenge.
// 📓: as array ki indexing zero-based , 1-based , n-based , character-based , -ive-based bhi ho skti hai. but apn zero-based indexing hi use krteh hai , mtlb apne array-ka phela element ki index zero(0) se chalu hoti hai.

// As abhi tk yeh array ek idea hai and aage phir defaulted-class-template se yeh essa memory-structure banaya jata hai and bana diya gaya hai.

// Now memory-meh yeh array-memory-structure allocate krne k liyeh yeh code hota hai. or mtlb apn coding se ess tarah memory meh array-memory-structure allocate kr skteh hai and phir uss array-memory-structure meh ess tarah phir data assign kr skteh hai , mtlb data daal skteh hai , store kr skteh hai.
// 👍 allocating array-memory-strucuture in memory ko hi declaration krna bolteh hai. toh mtlb
// 👍 memory-structure meh data daalna ya store krna ko hi initializating krna bolteh hai , thus mtlb initializing krna and memory-structure meh data daalna ya store krna ek hi baat hai mtlb dono ek dusre k vice-versa hai.mtlb initialize krna mtlb hi memory-structure meh data store daalna or store krna.
// 👍 template(mtlb ek user-defined-memory-structure banana by the use of default memory-structures) banana ko define krna bolteh hai.

// 🌟🌟 NOw declaring the array-memory-structure via CPP-code.
// int arr[4]; // toh apnne yaha esseh array-memory-structure with 4-memory-parts memory meh allocate kr diya hai.
// 🌟🌟  Now initializing the array:
//  arr[1] = 21; // thus toh apnne yaha ess array-memory-structure meh datas store kr diyeh hai.

/* 🌟🌟 NOw declaring and initializing simultaneouly , as apn bohat sare tariko se array-memory-structure ko memory meh allocate and usmeh data-fill kr skteh hai: jaise:
 
    int arr[4];  // declaring-array by specifying size.
    char carr[] = {'a', 'z', 'c', 'g'}; // declaring-array with intialization. and esmeh apnno array-size specify krne ki jarurat nhi hai. 
    char carr[4] = {'a', 'z', 'c', 'g'}; // declaring-array with specifying-size and with intialization also , thus essehi phir bakki k elements zero(0) se intialize ho jateh hai.
    // arr = {3, 5, 4, 1};
    arr[3] = 2;
    arr[0] = 23;
    arr[1] = 21;

    int a[3] = {};  // {0 , 0 , 0 }
    int a[3] = {0}; // {0 , 0 , 0}
    int a[3] = {1}; // as esseh declared-array-memorry-structure meh yeh datas store honge: {1 , 0 , 0}
*/

// 🙅‍: Now apn array-memory-structure k Advantages and Disadvantages k bareh meh dekhenge:
/* 👍:array (mtlb array-memory-structure) Advantages:
        1.array-memory-structure k liyeh kuch esseh by-default-dedicated-functions hoteh hai jinseh apn array k mtlb array-memory-structure k memory-parts ko directly access kr skteh hai mtlb unmeh stored-values ko directly access kr skteh hai. and yeh functions isiliy hoteh hai q ki array-memory-structure meh esa krna fast and reliable hota hai q ki array se ek better-cache-locality(mtlb fast-processing by processor) banti hai, thus toh esseh functions bana diyeh gayeh hai for array-memory-structure. 

/* 👎:array (mtlb array-memory-structure) dis-Advantages:
        1.as array-memory-structure ki size nhi expand or shrink nhi hoti, as q ki array-memory-structure k liyeh essi koi functionality banee nhi hai, q ki phir array-k advantages nhi rheh pateh.

*/
// 🍹🍹 hamesa Coding memory meh memory-parts allocation ko dekhteh huyeh krni chahiyeh , mtlb apnko pata hona chahiyeh ki ess code se memory meh kaisa memory-structure allocate ho raha hai and kis way meh ho raha hai , toh essee coding se programm efficiently and easily with feel k saat banteh hai. 🍹🍹

// how to implement stack using array
/*

// 🌟 Aab now array-memory-structure meh stored-data's-datatype k according diff type k array hoteh hai: jaise interger-stored-array is int-array , character-storing-array is char-array and as like this: all.
As Programming meh syntax ko dekh k hi memory meh particular memory-structure-ka-allocate hota hai...
As thus jaise jab apn esseh: 
Int arr[n] likh ke array-memory-structure allocate krteh hai thus vaha uss memory-structure ka naam yahi provided-identifier hota hai, as yeh array only memory-structure nhi hai yeh Data-Structure bhi hai , thus toh Data-Structures bhi ek memory-structure hi hai bas ess structure meh kuch functions etc kuch hoteh hai. Jinko access krne ka thoda kuch syntax alag bhi ho skta hai ,and thus apn unn syntax se enn eske Functions ko use kr skteh hai:
As jaise apn:
arr[5] se apn array ka fifth element access kr skteh hai...

Thus memory-structure and Data-Structure meh yahi farak hota hai ki data-memory-structure meh kuch alag bhi hoteh hai and unko acess krne ka syntax bhi unique hota hai or nhi bhi ho skta hai...*/
// As toh simply and shortly for writing code amd idea-thinking ki terms meh apn bol skteh hai ki yeh Data-Structure simply containers hi hoteh hai . As mtlb Data-Structures mtlb data k liyeh structure mtlb data ko store krne k liyeh ek structure mtlb memory-ka structure jismeh apn sahi dhang se , acche, as need k according data ko store kr skteh hai..

// 🔥 Data-Structure 🔥 meh 3 cheeze hoti hai . 1. Idea 2.memory-structure data ko store krne k liyeh and 3.ek tarika jisseh voh idea pura kiya jata haii..
#include <iostream>
using namespace std;

int main()
{
    int arr[4];                          // int-array
    char carr[4] = {'a', 'z', 'c', 'g'}; // char-array which is simply called string and also "file".
    // arr = {3, 5, 4, 1};
    arr[3] = 2;
    arr[0] = 23;
    arr[1] = 21;

    int a1[3] = {};  // {0 , 0 , 0 }
    int a2[3] = {0}; // {0 , 0 , 0}
    int a3[3] = {1}; // as esseh declared-array-memorry-structure meh yeh datas store honge: {1 , 0 , 0}

    int *
        ar; // as apn esseh bhi array-declare kr skteh hai.

    // 🎆🎆🎆🎆🎆🎆🎆🎆 Some-Facts about C/CPP arrays: 🎆🎆🎆🎆🎆🎆🎆🎆
    // 1.🔥 📓: as C and CPP meh array-index ki bound-checking nhi hoti, thus eski vajah se apno error bhi nhi milta , but apnkko kuch random-garbage show hoti hai: like this 🔥
    int arry1[2];
    cout << arry1[4];
    cout << arry1[-2]; // as toh C and CPP compiler array-index-bound-checking nhi krta.
    // 2.🔥 AS apn array-ki-size se jadaa usmeh data store nhi kr skteh hai, as C meh toh apnko error nhi milta but CPP meh esseh krne se apnko error milta hai: as like this;🔥
    // int array11[3] = {3, 5, 51, 521, 41, 52}; // thus toh yaha apnko error-show hoga.

    // 3.🔥 As apn yeh cheez proof bhi kr skteh hai ki array-memory-structure meh voh memory-parts hoteh hai voh contigous-manner meh hoteh hai: 🔥
    cout
        << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;

    // 4.🔥 traversing the array mtlb accessing the array-data-values 🔥
    // as apn array-memory-structure-memory-parts ko  2-tarah traverse kr skteh hai.
    cout << arr[1] << endl;
    cout << 1 [arr] << endl;
    cout << 2 [arr] << endl;
    cout << 3 [arr] << endl;

    // 5.🌟 array vs pointer 🔥
    // array and pointer completely different ek dusre se, but ek baat hai ki jab apn array-declare krteh hai then uss array k naaam se ek pointer bhi ban jata hai jo ki uss array-memory-structure meh first-memory-part ko point krta hai mtlb uss first-memory-part ka address store krta hai, thus toh apnko ess baat ka dhyn rhena chahiyeh.
    return 0;
}