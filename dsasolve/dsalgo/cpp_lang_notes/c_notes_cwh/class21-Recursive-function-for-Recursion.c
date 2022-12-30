// YAHA pe apn REcursions ya RECURSIVE-functions k bareh meh dekhenge:
//  jinmeh Recursion hota hai:

// ittrative function mtlb voh recursive-function mtlb voh function jo apni defination in the return apne app ko hi call krta ho.
// Recursion mtlb control-cursor ka re-jump hona thus specificly Recursion voh phenomenon hai jismeh function in the return apne aap ko hi call krta hai, jisse function vapis se execute ho jata hai, and yeh cycle chlti rheti hai.
// simply boleh toh Recursive-functions voh functions hoteh jinmeh in the return recursion kiya jata ya hota hai mtlb control-cursor ko vapis se function ki starting meh bhej diya jata hai and yeh apn ess tarah krteh hai as in return usi function ko call kiya jata hai , mtlb in the return vapis se uss function ko call krna thus apna function phir se run hojayega, and so on as like run hota hi rhega.
// thus jo bhi function in the return apne aap ko call krta hai then that function is simply called as Recursive-function.
//  thus toh mtlb recursive-function ko hamesa chlta hi rhega mtlb orr niche wala code toh run ho hi nhi payega thus toh eske liyeh apn terminating condition bhi daal teh hai.

//  toh mtlb recurssion-function same as LOOP ki tarah kaam krteh hai.

// NOTE: thus toh jaise apn ne dekha ki recursive-function toh LOOP ki tarah hi hai , thus toh eska mtlb hai har voh cheez jo recursive-function se ki ja skti hai vahi iteratively bhi (mtlb voh cheez loop se bhi) ki ja skti hai. or jo cheez iteratively ki ja skti hai voh cheez recursive-function se bhi ki ja skti hai. but but: yaha sirf farak pdta hai performance pr mtlb timing pr. mtlb koi krne pr Iterative jda time le skta hai and the otherhand recursively yeh kaam lega and vice-versa:
// for eg: jaise apn tower of hanoi , fibonacci series , factorial findings etc.. yeh cheeze apn loops nhi krteh but actually apn recursive-function se krteh hai.
// and timing depend krti hai control-cursor ki distance travelling pe mtlb control-cursor ko baar baar ek jagah se dusri jagah pe ghumaya jata hai , then vaha pe jda time lagega.
// thus toh apnko timing-affecting-factor ko dhyan meh rkteh huyeeh yeh decide krna hai ki ess kaam ko iteratively kre ya recursion se krke . jb apne option ho ki yeh kaam toh looping se hi hoga.

// base-case mtlb ess case recursion aab nhi hoga.
// recursive-case mtlb ess case meh recursion hoga.

// now C-programming meh function meh recursion ya Recursive-function ess tarah banaya jata hai:

// FACTORIAL-FINDING: program by recursive method or approach:
// for factorial finding base cases are 0! and 1!
// and other one are recursive-cases
#include<stdio.h>
int getfactorial(int num){
if( num ==0 || num ==1){
    return 1;
    // this is base-case bcoz apnne yaha pe return meh esi function ko call nhi kiya hai.
}
else
{
    // int c = num * (num-1)
    return (num * getfactorial(num -1));
}


};
int main()
{
    printf("enter the number for which you want a factorial\n");
    int numbi;
    scanf("%d",&numbi);
    int m = getfactorial(numbi);
    printf("%d",m);
    return 0;
}


// kabhi kabhi apna logic ya algo ya tarika recurssion ko dhyan meh rkhteh huyee kafi acche se ban jata hai. 