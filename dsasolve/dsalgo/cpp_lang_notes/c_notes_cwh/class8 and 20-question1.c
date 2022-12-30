// que: take the input from form 1 to 1000 , and then show mutiplication-table of that input-number.
#include <stdio.h>
int main()
{
    int a;
    printf("input the number for which you want a multiplication table for it \n");
    scanf("%d", &a);
    // mtlb apn input value ko "a" meh store kr rhe hai and %d toh symbol hai the input-integer k liyeh.

    // printf("the value of a is %d", a);
    // M1: 
    /*
    printf("the table of %d is\n",a);
    printf(" %d*1 is %d\n",a,a*1);
    printf(" %d*2 is %d\n",a,a*2);
    printf(" %d*3 is %d\n",a,a*3);
    printf(" %d*4 is %d\n",a,a*4);
    printf(" %d*5 is %d\n",a,a*5);
    printf(" %d*6 is %d\n",a,a*6);
    printf(" %d*7 is %d\n",a,a*7);
    printf(" %d*8 is %d\n",a,a*8);
    printf(" %d*9 is %d\n",a,a*9);
    printf(" %d*10 is %d\n",a,a*10); */

    // M2: using loops:
    for(int i=0; i<a; i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }

    return 0;
}
