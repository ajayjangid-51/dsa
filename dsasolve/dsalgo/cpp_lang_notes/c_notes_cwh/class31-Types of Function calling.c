// YAHA pe apn Local-variable and Global-variable , Actual-parameter and Formal-parameter, and Function ko call krne 2-tariko k bareh meh dekhenge:

//#1:Local variable and Global variable:  yeh define hoteh hai function k respect meh jaise:
        // 1. Local-Variables:    Function meh declare kiya gaya koi bhi Variable local variable khleta hai. and ess variable ko apn sirf function meh hi use kr skteh mtlb function k bahar eska use nhi kr skteh but usko kisi aur function meh pass jarur kr skteh hai and agr esehi krteh hai then apnko error show hogi.. thus toh simply apn ese bol skteh hai ki local variable voh variables hoteh hai jo ki kisi function meh define hoteh hai, local variables ka use apn sirf uss function meh hi kr skteh hai.

        // 2.Global-Variable:       Function k bahar declare kiyeh gayeh Variable ko Global-Variable kaha jata hai. and apn enn Variable ko kaha bhi use kr skteh hai mtlb function k andar and function k bahar also. thus isiley enn variables ko Global-Variables kaha jata hai.

//#2: Actual-parameters and Formal-parameters:
// note-point: program meh sbhi variables as a Parameter ho skteh hai for any of the Function, thus phir agr kisi function meh kuch particular variable as a parameters mentioned hoteh hai hai then voh mentioned Variables uss function k respect meh as a Actual-Parameter khelateh hai. and jab uss function ko call krke enn varialbes ko as a fn-parameter pass kiya jata hai then yeh variables as a parameter pass hone k baad yeh Variables Formal-parameters khelate hai. as bcoz yeh Formal-parameters unn variable ki copy hoti hai , and yeh copy hi formally as a parameter ess function k liyeh use hoti thus, toh mtlb phir enpe apn kuch bhi operation krteh kr skteh hai jaise +,- etc. as and voh Actual-parameter khalane vale variables meh kuch bhi changement nhi hota hai. 

// thus toh simply apn ase bol skteh hai Actual-paramter unn variable ko kaha jata hai jinki copy ko kisi function meh as a input/parameter liya jata ho and Actual-parameter ki copy ko Formal-parameter kaha jata hai.
// and thus toh Formal-parameters phir as local-parameter ki tarah hi ban jateh hai. 

// jaise: koi fn hai like:   int fn( int x , int y); thus toh ese dekh kr apn ase bol skteh hai ki ki yeh
//  int a=4,b=5;
//  and    fn(a,b); thus toh apn ase bol skteh hai upar yeh int a and int b hai, voh as a Actual-parameter hai bcoz enn variables ko kisi function meh as a input use kiya gaya hai. and phir jb yeh variables as a parameter function k andar pass ho jayenge then phir apn enn varialbes/values ko Formal-parameter bolenge bcoz aab yeh function meh kaam aa rhe hai, mtlb enki copy ban chuki hai and agr apn function k Work-BOX meh enn variables as a parameter ko change/update krteh hai then voh actual bahar wale variables change nhi honge ya nhi hoteh hai.
// as  like:

#include<stdio.h>
int sumfn(int p1, int p2){
    p1 += 10;
    p2 += 5;
    return p1+p2;
}
void changenum(int* p1){
    *p1 = 141;
}
void quickfn(int* p1,int* p2){
    *p1 = *p1 + *p2;
    *p2 = (*p1 - *p2) - *p2;
}
int main()
{
    int x,y;
    x = 4;
    y = 5;
    // sumfn(x,y);
    printf("%d\n",sumfn(x,y));

    printf("the value of x is %d\n",x);
    printf("the value of y is %d\n",y);
    // thus toh apne Variable ki value change nhi huee hai, bcoz function meh Variable gaye voh actually enki copy gayi hai, naki actually yeh variables gayeh hai, thus toh esliy apn enn X,Y ko Actual-parameter bolteh hai ess sumfn()-fn k liyeh bcoz enn Variables ki coply ess sumfn()-fn meh jane wali hai , and ek baar yeh enki copy chali gayi then phir apn enn Varialbes as a paramter ko Formal-parameter bolteh hai bcoz aab jaise bhi jis tarah bhi enn Variables ko change/update krke voh same hi rhenge.

// thus mtlb jb yeh x and y function k bahar hai tb tk yeh variables ess function k liyeh Actual-parameters khaleyenge, and jaise hi yeh enn Variables ki copy ess function meh pass hojayegi then tb yeh Variables uss functions k liyeh Formal-parameters khalange bcoz aab yeh function enn variables k saat kuch bhi kare then enn Varialbes pe function k outside koi farak nhi padega.

// now aab apn dekhege function ko call krne k tarike, call yb value and call by reference.
 
//#3: Function-Calling:
// C-programming meh apn functions ko 2-tarike se call kr skteh hai on the basis of specify Arguments:
//  1.call by value 
//  2.call by reference

// thus toh mtlb apn kisi bhi function ko 2-tarike se call kr skteh hai, mtlb ya toh "call by value" krlo ya phir "call by reference" krlo.
// 1. call by value se apne Actual-parameters ki value change nhi hoti hai
// 2. call by reference se apne Actual-parameter ki value change ho jati hai bcoz apn vaha pe vaha as a input Actual-parameters k address de rhe hai thus toh mtlb Actual-parameter ka address copy hoga, and phir agr apn usee deference krteh hai and phir agr apn usmeh update/modify krteh hai then uss address k container meh jo value store hai update hojayegi thus isiliy call by reference se Actual-parameter ki value change ho jati hai as bcoz vaha pe formal-parameter meh address copy jayegi and thus phir apn usko dereference krke kuch changement/updation krteh hai then mtlb voh actual-value hi change hogi.
// as bcoz address ki copy toh address hi hogi na, mtlb dono ek hi container ko point krenge.

// thus toh apn ne ya kisi function meh pointer-parameters ho then then tb apnko uss function ko call, call-by-reference method se krna hota hai where apn vahe pe usko call-by-value-method se nhi kr skteh.
// thus toh apn mainly call-by-reference method ka use tab krteh hai jb apnko kisi dusre function ya global-function ki value ko change krke kuch kaam krna ho then phir apn simply eske liy call-by-reference method ka use krteh hai.
/* eg for call by reference:
#include<stdio.h>
int swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b
    *b = *a;
    return;
}
int main()
{
    int a = 34, b=74;
    printf("%d and %d\n",a,b);
    swap(&a,&b);
    printf("%d and %d\n",a,b);
    return 0;
}
// we get:
  34 and 74
    74 and 34
*/
int m=34,n=56;
printf("the value of m is before it is pass as a parameter in changenum()-fn %d\n",m);
changenum(&m);
printf("the value of m is after it is pass as a parameter in changenum()-fn %d\n",m);

// Quick-exercise:
int o =32, p=14;
printf("the value of o when p are %d and %d respectively\n",o,p);
quickfn(&o,&p);
printf("%d the value of o when o+p and then\n",o);
printf("%d the value of p when o-p and then\n",p);

// thus YAHA pe apn call by value and call by reference k bareh meh dekhenge: mtlb apn yeh dekhenge ki value se kaise call krteh , reference se function ko kaise call krteh , value se call krne pr kya hota, reference se call krne pr kya hota , kab apn function ko value se call krteh , kab apn function ko reference se call krteh hai etc...

// NOTE: functions ko call krne pr unmeh inputed inputs ki copy as a parameter pass ho jati hai. and phir uss parameters ki values according kaam ho jata hai.


   return 0;
}









