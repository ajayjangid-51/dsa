// Star Patterns:

// take a input from user as like 0 for upright triangular star pattern otherwise 1 for inverted star-pattern and then take a input n as number: for which triangular is to be printed like 4-triangular pattern just like this:

// *
// **
// ***
// **** >> this is 4 uprights triangular start pattern

// *
// **
// ***
// ****
// ***** >> this is 5 uprights triangular start pattern

// ***** >> this is 5 inverted triangular start pattern
// ****
// ***
// **
// *
#include <stdio.h>
int main()
{
    // for right triangular pattern..
    int a, b;
    printf("enter 0 for upright triangular star pattern or 1 for inverted star-pattern\n");
    scanf("%d", &b);
    printf("enter the height of right triangular pattern\n");
    scanf("%d", &a);

    // int randc =0;
    // int r = 0;
    // int z = 1;
    int m = 0;
    int i = 1;
    switch (b)
    {
    case 0:
        for (; i <= a; i++)
        {
            // suppose a ki 5 hai.
            // printf("*");
            for (int j = 1; j <= i; j++)
            {
                printf("*");
                m++;
            }

            while (m < a)
            {
                printf(" ");
                m++;
                // z++;
            }
            m = 0;
            printf("\n");
        }

        break;
    case 1:
        for (; i <= a; i++)
        {
            // int l =a;
            for (int j = 1; j <= a; j++)
            {
                printf("*");
                m++;
            }
            a--;
            while (m < a)
            {
                printf(" ");
            }
            printf("\n");
        }
        break;
    default:
        printf("soorry you dont enter 0 or 1");
    }
    return 0;
}

// memory leak mtlb heap meh be-faltu meh memory ka bharna. mtlb jaise apn memory ko allocate kr diya but uska use nhi kiya , thus mtlb usmeh garbage values bhar jayegi and voh ek tarike se memory wastage and ess tarah k memory wastage ko Memory-leak khteh hai,
// note point: java and python jaise languages meh "garbage-collector" hota hai , mtlb yeh garbage collector unn sbhi allocated memories ko vanish mtlb saaf kr deta hai jo ki use nhi ki gayi hai ya huee hai. but yahi kaam apn manually free()-fn function se pointed memory ko free kr skteh hai.

// imp-point: toh programming meh memory allocation and memory management bohat important bcoz apnko kaam se kaam memory ko occupy krna by concept of dynamic memory allocation , takki apna programm well intelligent ho and pane program ko crash hone k nobat bhi naa aayeh..

// tip: write a function which gives the return as like: int 5 * char '*' = *****.
