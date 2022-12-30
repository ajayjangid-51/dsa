// As now YAHA pe apn Macros k bareh meh acche se dekhenge:
// As pre-processor apn acche se define kre toh mtlb yeh pre-processor ek editor ki tarah hai jo ki copy of original-source-code ko edit kr deta hai as accordingly.

// Some pre-processor-commands:
/*  1.#include  (ess pre-processor command se apn actual-process se phle hi files ko include kra dete hai in .i-file jo ki phir compiler-compilation meh use krta hai.)
    2.#define (ess pre-processor command se macro-define hota hai. )
    3.#undef (ess pre-processor command pre-defined Variables ,  macros ko  undefine kr deta hai.)
    4.#ifdef (ess pre-processor command inputed  macros and variables ko check krta hai ki yeh define hai ki, agr hai then yeh true return krta hai and agr nhi toh yeh false return krta hai.)
    5.#ifndef (ess pre-processor command inputed  macros and variables ko check krta hai ki yeh define nhi hai toh. agr hai then yeh true return krta hai and agr nhi toh yeh false return krta hai.)
    6.#if (yeh compile-time-condition ko cheack krta hai)
    7.#else
    8.#elif (same is else-if)
    9.#pragma ( yeh compiler ko kuch advance or special or additional commands issue krta hai. jinseh phir compiler orr achhe se kaam krta hai.)

    */

/*PRE-DEFINED MACROS:
mtlb yeh kuch pre-defined macros hai jo kisi file meh phle se define kiyeh huyeeh toh apn simply uss file ko include krke enka use kr skteh hai:
    1.__DATE__ (yeh macro-fn apnko return meh current-date as a character deta hai in this format-- mm dd year)
    2.__TIME__ (yeh macro-fn apno return meh current-time as a character deta hai in this format--  hour:min:sec)
    3.__FILE__ (yeh macro-fn apnko return meh current-file name as a string-literal mtlb as a string deta hai.)
    4.__LINE__ (yeh macro-fn apnko return meh line-no as a decimal(int) deta hai jis line meh yeh likha gaya hai.)
    5.__STDC__  ( yeh 1 return krta hai jab compiler ANSI-standar se compile krta hai.)
   
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    printf("the curren file name %s \n " , __FILE__);
    printf("the curent date is  %s \n " , __DATE__);
    printf("the curren time is  %s \n " , __TIME__);
    printf("the current line no. is  %d \n " , __LINE__);
    printf("Does apna prorgam ANSI-standard se compiler ho raha hai kya is  %d \n " , __STDC__);
    return 0;
}

//  note-point: now make the programs on the:
// #define
// #unded
// #ifdef
// #ifndef
// #if
// #else
// #elif