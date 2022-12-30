// execise-5: create a function jo ek array ko input leta ho and phir uss actual array ko ulta krne ka kaam krta hai mtlb ab voh array ulta ho jayega mtlb last-element first-element pe aajayega, second-last second pe, etc..etc.. but return value is none.

#include<stdio.h>
int size_of_array;
void arrarreversal(int p1_array[]){
    for(int i =0 ; i <= (size_of_array/2 - 1) ; i++){
        int cp = p1_array[i];
            p1_array[i] = p1_array[(size_of_array-1)-i];
            p1_array[(size_of_array-1)-i] = cp;

            // as simply boleh toh yaha upar apnne swaping ki hai, mtlb ek dusre ko apne jagah exchange kiya hai.
    };   
}
int main()
{

    int arrarforrev[] = { 2, 4, 5, 8, 2,452, 42,3,3, 21, 81};
    // printf("%d" , sizeof(arrarforrev));
    // 🔥imp-note-point: 1. while(a = 5) means jab tk a ki value as a 5 assigned hai. ya a ki value 5 hai tb tk.
    //                   2. while(a == 5) means jab tk tab tk a and 5 dono ek dusre k equal na hojayeh.

    // while(arrarforrev[m] = a){

    //     m++;
// for finding the size of array.
    // }
    // for(int a =0 ; a<; a++){

    // }
    // printf("%d\n",m);
    // int l =0;
    // while ( l != m)
    // {
        
    //     printf("%d ",arrarforrev[l]);
    //     l++;
    // }
    
    // printf("before reversal");
    //  for(int l = 0 ; l < 500; l++){
    // }

// finding the length of array by sizeof()-fn.
size_of_array = sizeof(arrarforrev)/4 ;
// printf("the size of array is %d \n" , size_of_array);

    
for(int l = 0 ; l <= (size_of_array - 1); l++){
    printf(" %d ", arrarforrev[l]);

}


printf(" \n after reversing the array\n");
// arrarreversal(arrarforrev);
// printf("after reversal");
//      for(int l = 0 ; l < 5000; l++){
//         printf("%d ",arrarforrev[l]);
//     }
 arrarreversal(arrarforrev);
//  note-point: as jab bhi apn kisi function meh koi input pass krvateh hai , vaha uss function meh uss input ka- address pass hota hai thus toh apn usmeh kuch changement krenge then actual-variable meh changement hojayega.

 for (int l = 0; l <= (size_of_array - 1); l++)
 {
     printf("the value of %d th element is %d \n", l , arrarforrev[l] );
 }

 
 


    return 0;
}