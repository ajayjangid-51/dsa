// memory leak mtlb heap meh be-faltu meh memory ka bharna. mtlb jaise apn memory ko allocate kr diya but uska use nhi kiya , thus mtlb usmeh garbage values bhar jayegi and voh ek tarike se memory wastage and ess tarah k memory wastage ko Memory-leak khteh hai, 
// note point: java and python jaise languages meh "garbage-collector" hota hai , mtlb yeh garbage collector unn sbhi allocated memories ko vanish mtlb saaf kr deta hai jo ki use nhi ki gayi hai ya huee hai. but yahi kaam apn manually free()-fn function se pointed memory ko free kr skteh hai.

// imp-point: toh programming meh memory allocation and memory management bohat important bcoz apnko kaam se kaam memory ko occupy krna by concept of dynamic memory allocation , takki apna programm well intelligent ho and pane program ko crash hone k nobat bhi naa aayeh..

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, i = 1;
    long* pointer1;
    while (i<423231)
    {
        printf("this is %d time click",i);
        pointer1 = malloc(794767* sizeof(long));
        // pointer1 = malloc(size of memory ) // thus toh ess function itni memory allocate hojayegi and in the return apnko yeh function "ess memory address dega" , thus toh yeh address apn simply pointer meh store kr lenge.
        if(i%100 ==0){
            getchar();
        }
        i++;
    }
    
    return 0;
}
