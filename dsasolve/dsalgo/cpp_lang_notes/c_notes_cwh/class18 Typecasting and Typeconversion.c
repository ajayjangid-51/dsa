// YAHA pe apn Typecasting and TYPE-Conversion k bareh meh dekhenge:
// Typecasting mtlb simply ek datatype ko dusre datatype meh convert krna. jaise: int to float meh, float to int meh, int to double , double to float etc...etcc
// Type-Casting krne k liyeh esa Syntax or format hota hai:
// ( datatype in which to convert) vari-name;
/* int b;
   Jaise (float) b;
   Thus mtlb apna int b ka datatype float ho chuka hai..
*/

// TYPE-CONVERSION:: Type-Conversion is a automatic conversion of datatype into another datatype jaise: when there is a Arithematic-operations like: int/int then the answer is int only or float/float then we get float answer only. thus toh apnko typecating krne ki jarurat nhi thus mtlb apnko error bhi shown nhi hoga.
// thus toh apn TYPE-CONVERSION ko dhyan meh rkhteh huyeh Type-casting krteh hai ya kr skteh hai. as like this: float division = (int) b/c;

#include<stdio.h>
int main()
{
    int a = 5;

    float b = 45.5443;
    float c = 34.431;
    float division = (int) b/c;
    // toh jaise yaha pe sirf b/c meh Type-Conversion ho rha hai, thus toh apn yaha eski Type-casting kr skteh hai jaise: as ki apnko pata hai b/c is float/float thus toh typeconversion k according division-variable meh float value hi store hogi thus toh apn eski Tyep-casting krke esko int bana skteh hai , and vice-versa mtlb apn int ko float meh Type-cast kr skteh hai and,, so on many things type-casting. 
    float d = 64.843;
    printf("the value of a is %d\n",a);
    printf("the value of b is %f\n",b);
    printf("the value of c is %f\n",c);
    printf("the value of d is %f\n",d);
    printf("the value of b is %d\n", (int) b);
    printf("the value of c is %d\n", (int) c);
    printf("the value of d is %d\n", (int) d);
    // thus toh programming rounding-off kuch nhi hota, esseh simply interger-value hai, simply usi meh hi print ho jati hai..
    return 0;
}

// note-point: function ki return value ko bhi apn typecast kr skteh hai as like this:
//       (int )function-name();
// and yeh kaam apn mostly dynamic-memory-allocation-function meh kaam aati hai, as bcoz voh Void-pointer return krteh hai mtlb apnko ek Void-Container-initialize krke dete hai. 
