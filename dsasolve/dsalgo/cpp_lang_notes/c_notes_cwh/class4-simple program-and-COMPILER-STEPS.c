#include<stdio.h>
// yaha pe apn C-program ka basic structure ko dekhenge  mtlb C-Language ka Syntax kaisa hota hai uske k bareh meh dekhenge:
/* C-PROGRAM meh ya C-language-CODE meh over-all 3-cheeze hoti hai:
    1. pre-prossor command-code (yeh command sbse phle run hoti hai mtlb c-coded-program compile hone se phle run hoti ya execute hoti hai )
    2. 
*/


// yeh ek pre processor command hai mtlb program compile hone se phle yeh command ya yeh code run hota hai, and yeh code esliy hota hai takki apn apne bakki program ki dependencies phle hi add kr ske otherwise phir problem hogi and apn code chalega nhi and dependencies ka mtlb jaise kisi orr c-file k code ko apn override krke apni ess c-file meh use kr rhe hai thus toh mtlb ess code ki dependecy voh code hai thus toh apnko uss code ko phle add ya include krna hota hai. 
// simply boleh toh apn ess file ko kuch code ko apne ess code-file meh use krenge. thus toh apnko ess super-file ko include krna hi hoga thus yeh super-file bhi apne ess code-file ka part ban jayegi.

// yaha yeh "main" yeh ek function hai jo esske andar k code ko compiler ko deta hai,  ya apn ese bol skteh hai ki compiler compiling k time ess main-function ko call krta hai and esi k content ko uthake compile krta hai.

// jaise scanf()-fn and printf()-fn ess stdio.h file ka hi hai. thus isiliy apn ess stdio.h file k function ko use kr payenge, otherwise apnko error milega as a that yeh esa koi printf()-fn toh koi hai hi nhi.
int main()
{
    /* codes */
    printf("hello ji");
    int a,b;
    printf("enter the value of a\n");
    printf("enter the value of b\n");
    // where yaha pe yehh "\n" is new-line character mtlb aab eske aage jo bhi cheez ayegi voh new line meh ayegi..
    scanf("%d", &a);
    scanf("%d", &b);
    printf("the sum is %d " + a+b);

// where scanf is a function jo user se input-lene k liyeh use hota hai.
    // scanf( "%datatype-of-user-input" , &variable-name-to-store-it or address-of-variable-jismeh input data ko store krna hai );  
    // where & is a address-operator which gives or return the address, jaise "&a" means address-of-a bcoz as apn ne &-address-operator use kiya "a" pe thus , it will return address-of-a.
    return 0;
}



// C-LANGUAGE ya C-PROGRAM meh function ess tarah banaya jata hai: 
//          return-datatype-of-function function-name( function-inputs){ function ka kaam }

// ###
/* ek C-program kis tarah kaam krta hai mtlb jb C-program ya koi bhi program apne written se execute hone tk kya kya steps follow hoti hai: mtlb compiler kya kya kaam krta hai program ko run krne k liyeh ya uski .exe file banane k liyeh ( where .exe-file ka mtlb executable-file).
// note-point: and yeh sare kaam Commpiler hi krta hai.

step-1: preprocessing (pre-processing mtlb Actual-process shuru krne se phle jo bhi kaam krna hota hai ya actual-process shuru hone se phle jo bhi kaam hota hai usseh simply pre-processing khteh hai or as acche se boleh toh mtlb preprocessing meh pre-processor-Statements run hoti hai,scan hoti hai., thus toh sbse phle compiler pre-processing krta hai and pre-processing yeh-yeh kaam hoteh hai jaise:
    1.pre-processor statements ko execute krna ( mtlb dependencies-files ko include krna , macros ko expand krna )
    2.comments ko hatana , remove krna.
    3. .i-file create krna and phir ess .i-file meh pre-preprocessor-statements k content ko  and code ko store krna.

(and where pre-processors ya pre-processor-statements voh statements hoti hai jo ki pre-processing meh execute hoti hai ya ki jati hai.)

step-2: compilation  (aab now .i file ko assembly-level-instructions(mtlb assembly-language) meh convert kiya jata hai and phir enn assembly-instructions ko .s -file meh store kr diya jata hai and esi working ko compilation-hona khteh hai).

step-3: assembly  (now enn .s-file k assembly-language-instructions ko machine-langauge mtlb machine-level-instructions meh mtlb intstuction ko 0 and 1 ki form meh convert kiya jata hai and phir enn machine-language-instructions ko .o -file meh store kiya jata hai and enhi instructions ko cpu samajta hai and phir cpu one by one enn instructions k according kaam kr deta hai mtlb voh one by one voh current chal jata hai,).

step-4: linking  (and atlast ek linker hota hai jo enn sari ki sari .o -binary-files ko combine krke ek .exe file bana deta hai)
// abb linking bhi two-types ki hoti hai:
1. static-linking:
2. dynamic-linking: jaise .dll file in windows jo ki dynamic-linking se bnti hai

step-atlast: program memory(mtlb ram) meh load ho jata hai mtlb jaise jis tarah apnne containers meh data store kiya tha usi manner voh sbhi data ess tarah memory meh actually store ho jata (and as esiliy apnko phle errors shown ho jata hai on the basis of container's inputed datatype and its range etc..etcc thus otherwise phir yeh sb problem meh load hoteh time hogi create hogi ) and memory meh load hone ka mltb hi yahi hai ki .exe file ko dekhe k sab kuch as its is memory meh build kr deneka.
*/
