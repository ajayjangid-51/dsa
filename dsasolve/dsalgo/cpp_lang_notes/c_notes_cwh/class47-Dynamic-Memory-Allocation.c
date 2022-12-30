// 🎆 Dynamic-Memory Allocation(imp-topic): Dynamic-Memory-Allocation ka mtlb Dynamically Memory ko allocate and disallocate krna. where Dynamically mtlb running-Program( mtlb program-runtime pe) meh kisi orr Memory( actually Heap-memory-part se ) ko allocate and disallocate krna and.
//  as bcoz yaha se hi apn C-Program k liyeh jo Memory-Layout hota hai uske according "Heap" se apn Memory-allocation and disallcoation Request krna dekhenge and esi cheez ko Dynamic-memory Allocation khteh hai.

// What and why Dynamic-memory-allocation: (mtlb now yaha pe apn yeh dekhenge ki Dyanamic-memory-allocation se hota kya hai mtlb faydaa kya hota hai. thus esi kuch fydoo ko dekh kr apn phir Dynamic-memory-allocation ka use krteh hai mtlb apply krteh  hai.
// boons of Dynamic-Memory-Allocatio: 🎆
/*  1.Dyanmic-Memory-allocation se Data-structure ki size change kari ja skti hai.  
    2.and Data-Structure ki size change krke kafi sari Memory ko bachaya ja skta hai.
    */
// Heap-memory meh hi memory-allocation krna hi Dynamic-Memory allocation hota hai.
//
// Example-1: As ess Example se apn yeh dekhenge ki ess tarah Dynamic-Memory-allocation se memory meh Data-structure ki size ko change mtlb choti kiya ja skta hai.
// where Memory meh Data-Structure krna mtlb Data ko Structure krna mtlb Data ko allocate krna and voh Allocation esa hona chahiyeh ki voh Allocation kaam se kaam memory-space le. and thus yeh kaam apn Dynamic-memory-allocation se krteh hai , mtlb suppose jaise ek main()-fn function hai and esmeh 2-child1-function hai and en 2 meh se 1st k 4 child2-function hai and kuch arrays , variables bhi hai. and now enn 4-child-functions meh bhi suppose 5-5 variables and arrays hai. and esehi kuch child1-functoin meh kuch hai: jaise as like this:

// #include<stdio.h>
// char fn1_fn1_child(){
//         printf("i am child of fn1_mainchild funtionc.");
//         return 'w';
//     };
// int fn1_mainchild1(){
//     int a = 21;
//     char name[20];
//     char email[40];
//     float f;
//     long l;

//     // now thus apn ese enn sb bade-bade memory-containers ko Heap meh request krke allocate krva deteh hai , thus ki agr aage niche wale functions se Stack thoda bharta hai toh vaha Stackoverflow na jayeh , thus esiliy apn simply Heap meh allocation kara deteh simply request krke and thus phir ess function ko agr kuch jarurui lena huaa toh voh heap- se lelega. and phir ek baar kaam hoteh hi voh requested Heap-memory ko vapis se disallocate kr lenge. thus yahi cheez krna Dynamic-memory-Allocation khlata hai, bcoz apn manully heap se memory ko dynamically allocate krva rhe hai. and phir ek k baad ek memory ko use kr skteh hai apn esseh tarah krke mtlb dynamic-memory-allocation krke.

// 🎆 thus simply Dynamic-Memory-Allocation ese bol skteh hai ki Dynamic-memory-Allocation ek tarika hota hai memory ko allocate and disallocate krne ka.🎆

//     printf("hi hello ji kasie ho  ji");
//     scanf("%d",&a);

//     fn1_fn1_child();

//     return 1;

// }
//  char fn2_fn1_child(){
//         printf("i am child of fn2_mainchild funtionc.");
//         return 'g';
//     };
// int fn2_mainchild2(){
//     int a;
//     char name[30];
//     char email[50];
//     float f;
//     long l;

//      printf("hi hello ji kasie ho  ji");
//     scanf("%d",&a);

//     fn2_fn1_child();

//     return 1;

// }
// int main()
// {
//     int a_mainvar = 321;
//     printf("the value of a_mainvar is %d" , a_mainvar);
//     fn1_mainchild1();
//     fn2_mainchild2();
//     return 0;
// }

// 🍟 Now YAHA pe apn Dynamic-Memory-Allocation-Functions dekhenge: 🍟
// as mtlb now apn Dynamically-memory-allocate krne k liyeh functions dekhenge jinsseh apn Dynamically mtlb Program run-time pe Heap se mtlb Heap meh Memory-allocate( where allocate mtlb reserve  ) kr skteh hai and phir memory-allocate krke uss memory meh variable-container-values bhi fill krenge. and thus phir yeh bakki function ki working k liyeh jo bhi container-value chahiyeh voh simply ess Heap se import krli jati hai. and ess tarah yeh sara kaam krne ko hi Dynamic memory allocation for good Data-Structure khteh hai. and these funtions are:
/* note-point: yeh sare functions stdlib.h file k functions hai mtlb yeh stdlib.h file meh hoteh hai.
    1.malloc()
    2.calloc()
    3.realloc()
    4.free()
*/

// 🔥1.malloc()-fn or memory_allocation()-fn
// ess function se apn Heap meh inputed-amount k size(in bytes jiske liyeh apn sizeof()-fn ka use krteh hai) ki memory-allocate kr skteh hai. and ess malloc()-fn function ki return value hai ek void-Pointer( mtlb yeh malloc()-fn uss allocated memory ka address return krta hai) jo ki ess allocated Heap-memory-part ko point krta hai mtlb ess allocated memory-part ka address store krta hai. and as apn janteh hai ki void-pointer mtlb ess pointer ka pata nhi hai ki yeh kis-datatype-container ka address store kr rha hai , thus phir apnko ess Pointer ki typecasting krke usmeh value fill ki jati hai as phle toh esmeh koi garbage value hi hoti hai. and Note-point: ki agr allocated memory meh uski size se jada-badi-size ka data assign kr diya ho toh , then vaha pe phir memory-allocation nhi hota hai and phir yeh malloc()-fn Null-pointer return kr deta hai.
// as like this:
// int a = 5;
// long b =33321;
// a = (int) b;
// // as apn ess int "a" meh apn long-"b" ko store kr rhe hai thus toh phle apnko ess long ko typecast krna hoga mtlb batana hoga ki yeh (int) hai ya (int) hi hai. and same as like this apn malloc k void-pointer k saat bhi ese hi krteh hai.

// int* ptr1;
// ptr1 = (int*) malloc( 3 * sizeof(int)   );

// 🔥2. Calloc()-fn or Contiguous_allocation()-fn
// ess function se apn n number of equal-inputed-amount k size ki memory-allocate kr skteh hai. and as same like malloc()-fn yeh function bhi uss allocated-memory ka void-pointer krta hai, thus phir usko apn easily typecast krke value assing kr denge. and as like malloc()-fn agr assined value ki size allocated-memory-size se jada hoti hai then vaha pe koi memory-allocation nhi hoga and voh Null-pointer return kr dega, where null-pointer mtlb uss pointer meh kisi container ka address nhi hoga. note-point-2: and enn sbhi allocated-container ki intial-value 0 assigned hoti hai.
// ptr1 = (int*) calloc( n , 3 * sizeof(int)   );

// note-point: malloc and calloc ek dam same hi but bs farak itnahi hai ki calloc se allocate-container 0(zero) se automatically initialize hoteh hai.

// 🔥3. Realloc()-fn or Reallocation()-fn:
// ess function se apn allocated-memory ko vapis se allocate kr skteh hai mtlb yeh mostly tab krteh jab apnko apni phle action1 k liyeh wali memory nhi chahiyeh hoti hai and action2 ki liyeh thodi bade-size ki memory chahiyeh hoti hai toh apn vaha simply ussi allocated-memory and ussi pointer wale k liyeh uss memory-Reallocate kr dete hai by inputing new-size , thus toh apnne eseh krke ek toh usi na-kaam-aane wali-memory ka reuse kr liya hai and usi pointer se voh allocate kra liya hai. or mtlb apn esseh bhi bol skteh hai ki yeh Realloc()-fn usi pointer meh uss old-memory ko free krke ek new-memory allocate krke ess pointer meh voh apna void-pointer assign kr dega.
// ptr1 = (int*) calloc( ptr_name , new_Size-in-bytes );

// 🔥4. free()-fn
// ess function se apn allocate-memory ko free kr skteh hai mtlb disallocate kr skteh hai agr apnko aab voh allocated-heap-memory nhi chahiyeh ho toh. simply by just inputing the pointer-name.
// syntax: free( pointer_name );

// 🎆 thus toh apn esseh Dyamic-Memory-Allocation ka use krke kafi acche and powerfull programs likh skteh hai🎆

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 5;
    long b = 33;
    a = (int)b;
    // as apn ess int "a" meh apn long-"b" ko store kr rhe hai thus toh phle apnko ess long ko typecast krna hoga mtlb batana hoga ki yeh (int) hai ya (int) hi hai. and same as like this apn malloc k void-pointer k saat bhi ese hi krteh hai.

    // 1: use of malloc:
    // ptr1 = (int*) malloc( 3 * sizeof(int)   );  , as Simply boleh toh malloc ek memory-container of inputed size ko Allocate kr deta hai , and jab phir apn typecasting krteh hai then vaha uss single-allocated-Container meh typecating-datatype k chote-chote parts ban jateh hai , thus toh overall boleh toh ek Array-ban jata hai of the typecasted-datatype. jaise apnne int-meh typecaste kiya then vaha pe int-array ban jayega mtlb uss bade-single-container meh aab chote-chote individual int-container ban jayenge mtlb ek int-array  ban jayega , and phir yeh malloc()-fn uss array ka address( mtlb as like "arr" or "arr[0]" ) return kr dega. 👿 mtlb this can be assume as like this:
    //  ptr1 = arr ;  and arr = suppose is equal to = 67487372
    // thus yaah yeh memory-block hoteh hai and yeh uss memory-block k address hai.:
    //  ptr ptr+1 ptr+2 and soo.onn
    // notee-point: and yeh address bhi kisi stack-memory meh stored hai. and enn contianers ka address bhi esi stack-memory meh stored hai and that address are: &ptr , &ptr+1 , &ptr+2 and so..onn..

    // 👿👿note-points for assinging and retrieving the values in the dyamic-memory-allocation Pointers:
    // ptr = ptr+ 0 and ptr + 1 = *(ptr + 1)
    // ptr[0] = *(ptr + 0)
    // &ptr[0] = ptr or ptr+0
    // &ptr[0] is not equal to = &ptr+0   (for n/)
    // *(ptr+1) = ptr[1]
    // *(&ptr+1) = ptr1 👿👿

    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    // as now yaha esseh Heap meh ek array allocate huaa hai , thus uss array ka address yeh malloc function return krega. thus now aab apnne ek pointer bana k voh return-pointer-pointing to array ko store kr liya hai. and as we know ki array-name is ek pointer hi hota hai jo uss array ka address store krta hai.

    // 👿aab now enn heap-meh-allocate-memory ko initialize krenge.
    // printf("%d\n",&ptr1 +2);
    // scanf("%d\n", &ptr1);
    // scanf("%d\n", &ptr1 +1);
    // scanf("%d\n", &ptr1+2);
    // scanf("%d\n", ptr1);
    // scanf("%d\n", ptr1 +1);
    // scanf("%d\n", ptr1 +2); // thus ptr1 mtlb voh hi address jo heap meh allocate huaa hai.
    // printf("the values in the address stored pointers -memory\n");
    // // printf("%d\n", *(ptr1));
    // printf("%d\n", *(&ptr1));
    // printf("%d\n", *(&ptr1+1));
    // printf("%d\n", *(&ptr1+2));
    // printf("the values in the allocated-memory\n")
    // &ptr1[1] = ptr1 + 1
    // printf("%d \n", *(ptr1+1));
    // printf("%d \n", ptr1[1]);
    // printf("%d\n", *(ptr1+2));
    // printf("%d \n", ptr1 );
    // printf("%d \n", ptr1[0] );
    // printf("%d \n", ptr1[1] );
    // printf("%d \n", ptr1[2] );
    // printf("%d \n", ptr1[3] );
    // printf("%d \n", &ptr1 );
    // printf("%d \n", *ptr1 ); 👿

     for (int i = 0; i < 3; i++)
    {
        printf("enter the value at array-index-%d , and this value will be stored in the Heap-memory bcoz we have allocated this memory in heap\n", i);
        scanf("%d", &ptr[i]);
        // or this bcoz both are correct:
        //  scanf("%d",ptr+i);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the value at array-index no: %d is %d\n", i, ptr[i]);
    }

    // int* pointer;
    // int n;
    // printf("enter the size of array that you want to be created dynamically\n");
    // scanf("%d\n", &n);
    // pointer = (int*) malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the value at array-index %d \n", i);
    //     scanf("%d", &pointer[i]);
    //     // or this bcoz both are correct:
    //     //  scanf("%d",ptr+i);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at array-index no: %d is %d\n", i, pointer[i]);
    // }

    // #2. use of Calloc():
    int* pointer;
    int n;
    printf("enter the size of array that you want to be created dynamically\n");
    scanf("%d\n", &n);
    pointer = (int*) calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value at array-index %d \n", i);
        scanf("%d", &pointer[i]);
        // or this bcoz both are correct:
        //  scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value at array-index no: %d is %d\n", i, pointer[i]);
    }

    // #3. use of Realloc():
    printf(" now enter the new size of this array only \n");
    scanf("%d", &n);

    pointer = (int*) realloc( pointer,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value at array-index %d \n", i);
        scanf("%d", &pointer[i]);
        // or this bcoz both are correct:
        //  scanf("%d",ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value at array-index no: %d is %d\n", i, pointer[i]);
    }

    // #4: free()-fn :
    free(pointer);
    // 🔥 note-point: now apn ess free() ka mostly program k bich meh krteh hai mtlb koi memory allocate karake and phir uska use krke useeh phir vapis se disallocate krna hota hai free() ka use krke . and yahi actually ek acchi dynamic-programming hai. bcoz esseh apn apne Data-Structure ko accha and powerful kr rhe hai. 🔥


    return 0;
}
