// Now YAHA pe apn Wild-Pointer k bareh meh dekhenge:
// as simply Uninitialized-Pointer ko Wild-Pointer kaha jata hai. 
// now as conceptually boleh toh, jaise koi uninitialized-pointer hai toh mtlb ess pointer meh koi garbage-value hi store huyi hai , and yeh garbage-value kisi unallocated-container ka address hoga , and uss unallocated-container meh bhi koi garbage-value hi hogi , thus mtlb agr apn ess Pointer ko Dereference(value pointer-pointing container meh value input or retreive krna ) karteh hai ya karenge then vaha pe ek irregular-problem create ho jati hai and yeh ek nasty-bug ki tarah hota ,  thus esiliy enn unintialized-Pointers ko Wild-Pointer kaha jata hai bcoz yeh Wildly behave krteh jab enki Derefrencing kari jati hai. 
// note-point: and agr uninitialized-POinter mtlb Wild-POinter ko initialized kr diya jata hai then toh yeh Pointer- phir ek Normal_pointer ban jata hai mtlb yeh aab Wild-Pointer nahi hai. 

// thus toh apnko apne Program meh Wild-Pointer nhi banana hai and na hi banne dena hai.  bcoz as apn janteh hai ki yeh apne Program meh nasty-bugs introduce dr skta hai. (where nasty-bugs mtlb kamine bugs mtlb apnko pata hi nhi chalega ki apnne apne program meh koi bug create kr diya hai, thus toh eseh Wild-pointer create krna mtlb voh bug hi create krna and voh bug-as-a-nasty hoga bcoz apnko lagega hi nhi ki yeh koi bug(problem , problem cretor jisseh apna program sahi se nhi chal pata ya kuch delay ya kuch orr issue ho jata hai. ) ban skta hai apne program as  apnko toh yahi lagega ki yeh toh apnne simply ek pointer hi toh banaya hai thus isiliy Wild-Pointer ko Nasty-bug bhi kaha jata hai. )


// 🔥Creating more User-Snippets for more good and fast coding in Vs-code.
// go to gear-icon-setting >> user-snippets >> c.json-file >> now edit the code-snippet accordingly.

#include<stdio.h>
int main()
{
    int a = 221;
    int* ptr1; // thus toh yeh pointner uninitialized hai mtlb yeh Wild-pointer hai.
    *ptr1 = 21; // as mtlb apn yaha actually ek unallocated-memory-container meh koi value store kr rhe hai as mtlb ess baat ka toh koi sense hi nhi hai but apnko yaha eseh krne se IDE bhi koi warning-erro nhi de rhi hai,  thus esseh apna crash ho skta hai ya irregular , undefined way meh behave krega.

    ptr1 = &a;  // now aab yeh Wild-pointer nahi raha.
    printf("the value of a is  %d \n " , *ptr1); 
    return 0;
}
