// make a program.
// APP ya SOFTWARE mtlb jismeh frontend and backend dono ho and mtlb dono ek dusre se connected ho , thus usse apn APP YA SOFTWARE khteh hai.

// make conversion programs
/*1.kms to miles
2.inches to foot
3.cms to inches
4.pound to kgs
5.inches to metre*/
// ask the user that process to be done 1,2,3,4,5, then agter selecting
// ask the user to input the value which to be converted in respective unit
// and now show the answer..
// and program should not exit or take the input like Q to quit
#include <stdio.h>
void fn1(float para1);
void fn2(float para1);
void fn3(float para1);
void fn4(float para1);
void fn5(float para1);
int main()
{
    
    int unit;
    float num;
    // start:
    printf("input 1 for kms to miles\n input 2 for inches to foot\n input 3 for cms to inches\n input 4 for pound to kgs\n input 5 for inches to metre\n ");
    scanf("%d", &unit);
    printf("okay now put the quantity to convert to respective");
    scanf("%f", &num);
    if (unit == 1)
    {
        fn1(num);
    }
    
    else if (unit == 2)
    {
        fn2(num);
    }
    else if (unit == 3)
    {
        fn3(num);
    }
    else if (unit == 4)
    {
        fn4(num);
    }
    else if (unit == 5)
    {
        fn5(num);
    }
    else
    {
        printf("nothing match");
    }
    
//     goto start;
//  lable2:
    return 0;
}

void fn1(float para1)
{
    //  1mile = 1.6km
    printf("%d kms into miles = %f", para1, para1 / 1.60934);
};
void fn2(float para1)
{
    // 12 inches = 1foot;

    printf("%d inches to foot = %f", para1, para1 / 12);
};
void fn3(float para1)
{
    // 1cm  = 6inch/15
    printf("%f cms to inches = %f", para1, para1*0.393701);
};
void fn4(float para1)
{
    // 1pound = 0.453592kg
    printf("%f pound to kgs = %f", para1, 0.453592*para1);
};
void fn5(float para1)
{
    // 1inch = 0.0254meter
    printf("%f inches to metre = %f", para1, 0.0254*para1);
};

