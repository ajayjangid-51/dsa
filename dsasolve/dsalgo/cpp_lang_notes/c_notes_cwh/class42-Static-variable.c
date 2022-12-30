// YAHA pe apn Static-Variables mtlb Static-Containers jinmeh apn various-data store skteh hai, k bareh meh dekhenge:
// Static-varialbes ya Static-containers voh containers hoteh hai jo ki memory meh through-out-program-life-span allocated rhete hai. (as Note-point: yeh Static-container memory-layout k global and static variables box meh allocate hota hai, as we know ki ess-memory-layout-part meh global and static-containers hi allocate hoteh hai. and at the time of program-execution yeh yaha se hi linked hoteh hai.)


// 👿Imp-points for Static Variable:
/*  1.static-Variable ek baar phir se initialize nhi hoteh ya nhi kr skteh hai.
    2.static-variable jis Block meh defined hai uss Block k bahar se intialize ya updaate nhi ho skta .
    3.apn static variable ko chaheh function-BLOCK , loop-Block , conditional-Block etc kisi k andar ya Block k bahar declare kr skteh hai but agr globally declare hai then tab toh usseh kaha se bhi intialize and access kr skteh hai. but agr static-variable locally declare hai then usseh sirf uske Block se hi access kiya jata hai. and mostly kabhi static-variable globally declare nhi kiya jata bcoz tab toh voh static and global variable same hi honge. and esseh toh Static-variable and Global-variable ek dusre se different hoteh hai.
    4.static-variable are always initialized only with constant-literal. mtlb vaha apn esko kisi funtion se iniitialize nhi kr skteh. as bcoz q ki yeh Static-variable program ka main()-fn execute hone se phle hi allocate and initialize ho jateh hai. thus esiliy these Static-variables are always initialize with constant-literal.
    5.Static variables ko hamesa constant se hi initialize krna hota hai , mtlb apn unheh kisi function se initialize nhi kr skteh hai bcoz compiler phle Program meh static-variables ko dhund k phle hi memory-layout meh initialize kr deta hai. thus isiliy koi function nhi ho skteh hai.
    

    
    */

// 🎆 now aab apn C-program meh Static-variable kaise banaya mtlb kaise declare and initialize kiya jata hai. mtlb apn Static-variable ko declare and initialize krne ka syntax dekhenge:
// 🔥 declaration:
//               static data-type variable-container_name;

// 🔥 declarationa and initialization:
//               static data-type variable-container_name = data-value;

// 🔥  only initializtion:
//               variable_container_name = data-value;

#include<stdio.h>
static int a =21;
int b1 = 41; // this is global-variable as bcoz q ki yeh kisi Block-meh declare define nhi huaa hai.
int func1(int p1){
    printf("the address of p1 in func1 is %d \n", &p1);
    int loc = 78;

    static int static_var = 65;
    printf("the value of static_var is %d \n", static_var);
    static_var++;
    // note-point: now aab aage agr apn ess function ko call krenge then toh eski 66 hi set rhegi mtlb yeh vapis se phir initialize nhi hoga mtlb as bocz ki yeh static-variable toh Stack-memory part k bahar allocate hota hai , thus toh mtlb agr apnne ess static-varialbe ko increase kr diya toh yeh phir increase hi rhega. and phir koi orr function esko call krta hai then voh function ess static-variable ko usske static-memory-part se hi utha ta hai.
    // static_var = 705;
    // printf("the value of static_var after once againg initialization is %d \n", static_var);

    return (p1 * 10);
}
int main()
{
    int b = 344;
    a= 42;
    printf("%d \n" , a);
    printf("the address of p1 mtlb b in main is %d as bcoz yeh dono function Stack-memory meh alg-alg part meh allocate hoteh hai na. isiliye \n ", &b);

    // static_var = 32;  // thus mtlb apn static-variable ko kisi orr function se bhi initialize nhi kr skteh hai. voh sirf apne Block se hi initialize and update kiya ja skta hai.
    // static_var++;

    b1 = 3;

    // printf("%d", loc);  // as yeh loc-variable toh local variable hai mtlb yeh func1()-fn ka variable thus toh yeh toh print nhi hoga  bcoz yeh toh tk memory meh allocate huaa nhi hai and hoga bhi nhi bcoz , bcoz voh function apne app allocate hoke disallocate hojayega mtlb esseh toh koi lena dena hi nhi hai na.
    int fn1value = func1(b);
    int fn1val = func1(b);
    int fn1vali = func1(b);
    // note-point: as toh agr apn kisi static-variable containing function ko vapis se call krteh hai then vaha pe voh static-variable vapis se nhi banta bcoz actually meh static-variable static-container ban chuka hai. thus mtlb voh vapis se nhi banta mtlb vapis se declare and initialize nhi hota q ki voh toh already ban chuka hai. thus yeh static-variable declaration line skip ho jati hai , thus isiliy apn simply ese bol dete hai ki yeh apn static-variable ko phir se initialize nhi kr skteh. as bcoz q ki voh static-memory-part declare and initialize ho rkha hai.
    int* potr = &fn1value;
    
    printf("the return value of func1()-fn is  %d ", fn1value );

    
    return 0;
}













// 👿 Static variables: (actual Working of Static-Variables:) 👿
// As actually functions k liyeh jaise-jaise control-cursor move krta hai vase vase hi memory meh variables create mltb allocate hoteh hai apni apni respective memory-layout meh mtlb memory-part-containers banteh hai... And jaise hi voh function pura hogaya mtlb function ki apni return value  aayegi vase hi phir voh created containers lost ho jate hai mtlb memory meh allocated memory-part-container phir vanish ho jateh hai mtlb disallocate ho jateh hai. mtlb Stack meh kisi-function k liyeh allocated-memory vapis se free jo jati hai jab voh function-end ho jata hai tab... Thus isiliy Block( mtlb function,loop,condtional-block) meh created variables ek baar Block-workbox finish hoteh hi lost ho jateh hai. isiliy apn vapis se unn variables ko use ya access nhi kr pateh ya nhi kr skteh . thus isiliy specific-Block k andar declare kiyeh gaye variables ko local variables khteh hai bcoz apn phir se ennheh access nhi kr pateh as bcoz q ki yeh memory se free ho chuke hoteh hai, ya yeh uss function k baad meh mtlb uss function se baad meh allocated huee memory meh allocate hoteh hai. and jab control-cursor vapis jab kisi child-function ko end krke k aata toh actually voh child-function k liyeh allocated memory disallocate ho hi jati hai. (tiP : as yaha upar jo apnne memory allocation and disallocation discuss kiya hai voh Actually sb Stack-memory-layout-part meh hi hota hai. and yahi apnn ek baar orr aageh dekhenge.)

 