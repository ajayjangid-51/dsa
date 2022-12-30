// YAHA pe apn array-Function and Pointer-Function k bareh meh dekhenge: mtlb voh Functions k bareh meh dekhenge jinmeh Arrays and Pointers as a Parameter hoteh hai mtlb Arrays and pointer as a input jateh hai.
// YAHA pe apn Array ko Function meh as a agrument pass krne k bareh meh dekhenge:

// Array ko Function meh esliy pass kiya jata hai bcoz apnko  ek puri list hi input krni ho tb.

// now apn Function meh Array ko 2-tarike se input kr skteh hai:
//  1. ek toh simply array ka name-likh k agr function meh array-parameter hai toh. (where array-parameter mtlb parameter as a Array hai mtlb yeh function input koi Array leta hai. )
// for eg: int fn(int array[]-parameter){}
//  2. second one is uss array ka address de k agr function meh pointer-parameter hai toh  where pointer-parameter mtlb parameter pointers ki form meh hai mtlb yeh function input meh koi pointer leta hai.
//  for eg: int fn(int* pointer-parameter)

// and now apn Function meh Array input as according to function krteh hai. and yeh isliy hota bcoz jab apnko kuch jada quantity ko leke unpe operation krna ho , jaise apnko 50 students k bacho k marks by +3 update krna chahteh hai then apn simply ek function bana lenge ya phir ek loop bana lenge, but apn yaha pe ek function banyenge and usmeh voh loop dalenge takki apn jb chaheh jitni baar chahey usko call kr le, now agr apn function bana rhe hai then apnko function k liyeh input lena hoga and voh input bada hai mtlb apnko suppose 50 inputs lene thus toh apn p1,p2,p3....upto p50 esa bhi kr skteh hai or sbse best apn ek puar Array[50] hi input le lelenge. thus toh thus aab agr apn function ko call krteh hai then apnko koi Array hi usemh input krna hoga, bcoz yeh function as a input Array ko hi leta hai.
// mtlb jb apne function meh array-Parameter ho ya pointer-parameter tabhi input krteh hai jb

// agr apn function meh array ko input and pass kravake uss array k elements ko change krteh hai then voh array jo ki Actual-parameter hai voh bhi change hojayega. as bcoz ki yeh array bhi ek pointer bhi hota hai.


// pionter parameter wale function meh apn array ko unke base-address se pass krteh hai..

#include<stdio.h>
int arryfunc(int array_p1[]){

for(int i=0;i<=5;i++){
    printf("the value of %d index is %d\n",i,array_p1[i]);
}
array_p1[0] = 421;
    return ;
}

int pointerfunc(int* pointer_p1){
    *pointer_p1 = 42;
    *(pointer_p1 + 1) = 32;
    printf("pointer-parameter function");
    for (int i = 0; i<=5; i++)
    {
       printf("the value of %dth-index no. is %d\n",i, *(pointer_p1 + i));
    }
    

    return;
}

void multiarryfn(int array_p1[2][2]){
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
    {
        
    }
        
    }
    

}
int main()
{
    int array_1[] = {2,5,31,48,52,8};
    printf("the value of 0-th index is %d\n", array_1[0]);
    arryfunc(array_1);
    printf("the value of 0-th index is %d\n", array_1[0]);

    // inputed address for pointer-parameter function:
    pointerfunc(array_1); //as bcoz array_1 naam se ek pointer bhi hai jo ess -array ka base-address(mtlb address of 0th-index element) store krti hai.
    
    // or as like in down-line
    // pointerfunc(&array_1);
    return 0;
}



























// apn array ko bhi as like function ki tarah use krke uske elements ko parse kr skteh hai jaise:
// and apn function meh Arrays ko as a input pass kaise krne k bareh meh bhi dekhenge:
// 

// array[3];
// as toh apn ess array meh input diya 3 then simply apnko index-3 pe jo element voh apnko return hojayega.

// thus toh apn ese bol skteh hai jb apn ARRAY create krteh hai then vaha pe uss array k naam se hi ek pointer ban jata and ek function bhi ban jiska paramter koi interger hota and voh return krta hai usmeh store value , thus toh apn Array-fn ko visulize kr skteh hai as like from this:
/*
//  datatype_of_array  array_name(int index-no){

    return 4;
}

*/

