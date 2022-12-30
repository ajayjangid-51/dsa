// Now YAHA pe apn 👿"Memory-Layout-of-C-Program"👿 and 👿"Memory-Allocation-in-Stack"👿 k bareh meh dekhenge: bcoz ess-topic ko samaj krke apn Dynamic-Memory-Allocation kr skteh hai:
// where Memory-Layout-of-C-Program ka mtlb hai ki C-Program jab run hone k liyeh Memory meh load hota hai toh tab vaha Memory-Layout mtlb memory-ka-naksa mtlb memory-k-parts banteh hai useh simply Memory-Layout kaha jata hai.

// As toh now aab Simply boleh toh. mtlb Jab Program run hone k liyeh Memory meh load hota hai , toh vaha Memory meh 4-main-Memory-Parts alot mtlb allocate hoteh hai uss Program ko load and execute hone k liyeh:
/*  1.Code-memory-part (ess memory-part meh apna Program-Code mtlb apne Code ka Assembly-machine-level code load hota hai.)
    2.Global&Static-memory-part (ess part meh Program k Global and Static-Varialbles allocate hoteh hai and phr enn allocated-container meh data fill hota hai. )
    now ess memory-segment k 2-parts hoteh:
        1.data-segment (ess container meh initialized-variable-container allocate hoteh hai.)
        2.bss-segment (bss(block start by symbol or ancient-asembler-operator): yeh memory-part uninitialized-variable-Containers k liyeh hota hai mtlb ess memory-segment uninitialized-Containers allocate hoteh hai. thus isiliy unmeh phir ek garbage-value aa jati hai.)
    3.Stack-memory-part (ess memory-part meh Function load hoteh hai mtlb Function-content allocate hoteh hai jaise: function-variables , constants , etc..) mtlb yeh program k saat-saat grow hota hai and voh grow ess tarah hota hai.  and apn aageh yeh bhi dekhenge ki stack-memory-part meh LIFO(last in fist out) kaise follow hota hai. 
        👍Stack-Overflow: jab Stack-segment fully bhar jata uss phenomenon ko Stack-Overflow khteh hai. and mostly yeh Stackoverflow recurssio ki vajah se hota hai. and or bhi bohat sareh reason ho skteh hai.
    4.Heap-memory-part (ess memory-part meh kinhi Function meh request-memory-part esmeh mtlb Heap-memory-part meh allocate hoteh hai. and apn aage dekhenge ki ess Heap-memory se request kis tarah ki jati hai.) and yeh Heap apne Program meh dynamic-allocation k saat-saat grow hoti hai where grow hone ka mtlb bharna or fill hona. and Heap-segment ko use krna hi dynamic-memory-allocation meh hota hai.
        🎤🎤 Use of Heap: as Stack ki kuch Limitations hai mtlb apn jab chahyeh tab memory ko allocate and disallocate nhi kr stkeh , as Stack voh Program-execution k accoding hi automated hota hai. but Heap ka bhi use apnko usko dhyan meh rkhteh huyeeh bhi krna otherwise yeh Heap toh Stack se bhi jldi bhrega, bcoz Stack meh program-execution k according automatically allocated-memory free ho jati hai but Heap-segment se toh apnko khud ko memory allocate krne k baad disallocate knri hogi.

        🎤🎤 how to use the Heap: apn simply ek pointer-bana skteh hai jisseh apn Heap meh kisi bhi allocated memory-part( which is allocated by request to heap ) ko point out kr denge.  but note-point: agr apnne usi pointer ko override or overwrite kiya toh voh phle wali pointing heap-memory apne aap free nhi hogi , toh mtlb apnko ess cheez ka bhi dhyan rkhna hai and uss memory ko command deke free krna hai. and yeh sab kuch apn class47.c meh dekhenge. mtlb apn unn function k bareh meh dekhenge jinseh apn Dynamic_memory-allocation krteh hai.
*/


// Staic-Memory-Allocation and Dynamic-Memory-Allocation:
// Static-memory-allocation:
// Static-memory-allocation meh sabhi memory-part program-execute-hone se phle hi allocate ho jateh hai mtlb program execute hone se phle hi sbhi memory-part create and filled hoke set ho jateh hai and jab tk rhteh hai tb tk voh koi partiucular function end na hojayeh tab tk. and thus isiliy apn uss allocated memory ko free bhi nhi kr skteh hai thus isiliy apn uss allocated memory ko kisi dusre variables-values k liyeh use nhi kr skteh. and yeh memory-allocation ka tarika less efficient hai bade and choteh Program k liyeh. as choteh programs k liyeh toh nhi hai but apnko Dynamic-memory-allocation hi practice meh rkhna hai.  eg: jaise abhi tk jo bhi apnne Memory-allocation kiya tha mtlb abhi tak jo bhi apn Variables-containers , contants-conatiners , array-container etc bana rhe the mtlb voh actually apn yeh bata rhe the ki memory meh yeh ese container allocate krdo, toh mtlb voh apn Memory-allocation hi rk rhe the. thus simply boleh toh kisi bhi variable-container ko declare krna mtlb uss variable-container ko memory meh allocate krnaa. thus mtlb abhi tk apnne jaise memory-allocation kiya voh Statically memory-allocation tha, and now apn Dynamically memory-allocate krna dekhenge mtlb apn Program run-time pe hi memory-allocate krna dekhenge. as yeh tarika memory-allocate krne ka more-efficient hai bcoz apn esmeh memory ko resue bhi kr skteh hai.(heap- memory ko)


// gcc file_name.c ; size ./a.exe/ ( where yeh size command apnko bytes  meh size batata hai)

#include<stdio.h>
int main()
{
    // int a = 3;
    // int b =21;
    printf("hi hello ji kaise ho ji");
    return 0;
}

