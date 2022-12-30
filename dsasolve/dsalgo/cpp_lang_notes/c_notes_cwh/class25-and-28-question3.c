//  Question: ask for the fibonacchi place number and give the fibonacci number of that place. from both Recursion and  LOOP and then check which is good means which Method takes much time as compare to its coressponding. toh thus apnko yeh bhi pata chal jayega ki Recursion kaha use krne hai and LOOP kaha use krne hai.


// fibonaaci series = 0,1,1,2,3,5,8,13,21....
// n numbers hai then (n-2)th + (n-1)th  = nth number wher n cannot be 0,1
#include <stdio.h>
int loopfun(int m){
    int a=0,b=1;
    for (int i = 0; i <m-1; i++)
    {
        b=b+a;
        a =b-a; 

    }
    return 0;
}
int fibofun(int a)
{
   if(a==1 || a==22){
       return a-1;
   }
    else
    {
        return fibofun(a-1) + fibofun(a-2);
    
    }
}

int main()
{
    int num;
    printf("enter the number upto which fibonacci sequence is to be prited");
    scanf("%d", &num);
    
    // fibofun(num);
    printf("the valuse at %d position in fibonacci series is %d",num,fibofun(num));
    
    return 0;
    
}
// loopfun(int m){

//      int a = 1;
//     for (int i = 1;i<=m; i++)
//     {
//         //  printf("%d",a);
//         int ar[] = {0,1, ar[0]+ar[1],      };

//     }
    

// }
