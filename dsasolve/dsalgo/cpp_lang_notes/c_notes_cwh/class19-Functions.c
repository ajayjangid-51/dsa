// YAHA pe apn FUNCTION(procedure or subroutine) k bareh meh dekhenge: function ko  bhi bola jata hai.

// FUNCTION simply ek Work-BOX hi hota hai jisko call krne pr voh simply execute ho jata hai. and Function ko apn kabhi bhi(mtlb anytime as per need) , kaha bhi(kaha bhi ka mtlb same program meh bhi kisi aur alag program meh bhi) call kr skteh hai.
// thus toh apn simply function ko Function-WORK-BOX bhi khteh hai.
// thus "FUNCTION-Work-BOX" mtlb voh Work-BOX(mtlb codes-lines or code-snippet) jisse kaha bhi kabhi bhi just call krke execute kiya ja skta ho.
// now NOTE-POINT: Function-Work-BOX ko run hone k liyeh kuch input bhi chahiyeh hota hai ya nhi bhi chahiyeh hota hai , mtlb it depends on the Work-BOX-ka-kaam mtlb jaise Work-BOX kuch inputs k according ya inputs k upar koi kaam krega ya nhi krega that depends on this , and now yeh Function-WORK-BOX ek baar execute hone k baad kuch return bhi kr skta hai ya nhi bhi kr skta hai as it totally depends ki mtlb agr apnko return meh chahiyeh ya nahi chahiyeh uske upar depend krta hai.

// function ki return value kuch bhi ho skti hai but function ki return value 0; ka mtlb hai ki apna function chal gaya without any error.

// NOW C-pramming meh function ess tarah se banaya jata hai:
/* return_value's_datatype  function's_name(datatype_of_parameters_that will be used in Work-BOX, para2, ...){
    WORK-BOX };
where yaha pe:
    1.return_value's_datatype  function's_name(datatype_of_parameters_that will be used in Work-BOX, para2, ..);
is the declaration of function. thus toh esseh compiler ko pta chal jata hai accha esa koi function hai.
    2.return_value's_datatype  function's_name(datatype_of_parameters_that will be used in Work-BOX, para2, ...){WORK-BOX }; is know as declaration and defination of function.

    note-point: Work-BOX meh return-mentioned-datatyped-value of function bhi hoti hai.

    1.NOW C-programming meh function ko ess tarah call kiya jata hai inn same program:
        function-name(function-inputs according to thier datatypes for which function is builded);
    thus toh apne call krne ess function ko WORK-BOX execute hojayega.
    very-imp-note-point-on-calling-fn: mtlb jaise apn function ko call krteh hai jb bhi input apn usmeh dete hai voh input as a parameters ki tarah kaam krteh hai, mtlb as a parameters meh pass ho jateh hai.and
    no.of inputs = no. of parameters of respective function.


    2.NOW C-programming meh function ko ess tarah call kiya jata hai inn other programs:
*/

// TYPES:
// NOW function k creation k basis functions 2 types k hoteh hai:
/*      1.Library-ya-Module -functions (jo apn ne nhi banayeh hai ya apn apne current program meh nhi banayeh hai.)
        2.User-defined-functions (voh functions jo ki apn ne banayeh hai ya apnne apne program meh banayeh hai.)
*/
// NOW inputs(agruments) and return-value of Function-Work-BOX k according Function-Work-BOX 4-types k hoteh hai:
/*      1. without input and without return value
        2. without input and with return-value
        3. with input and without return-value
        4. with input and with return-value
*/
// jaise:







#include<stdio.h>
int sumfunction(int num1, int num2);
// int sumfunction(int num1, int num2){
//     return num1+num2;
// };
void print_starfn(int n){
    for(int i =0; i<=n; i++){
        printf("*");
        // mtlb simply yeh kaam hota and jb i<=n .
    }
};
int fun3();
int main()
{
    int c = sumfunction(2,4);
    printf("the value of c is %d\n",c);
     
     int starn0;
     printf("enter the number of stars to be printed");
     scanf("%d",&starn0);
    print_starfn(starn0);

    int numi = fun3();
    printf("the value of num3 is %d",numi);
    
    // very imp-note-point:
	// 1.	Jaise apn kisi Container meh koi function daal rhe thus toh iska mtlb hai ki apn uss container meh uss fuction ki return value daal rhe hai mtlb uss Container meh fuction ki return value store hogi.
    // 2.	Jaise apn kisi function meh as a input koi function hi de rhe hai ya dete hai then uska mtlb hai ki apn uss inputing-function ki return value usmeh as a input hogi.

    return 0;
}
int sumfunction(int num1, int num2){
    return num1+num2;
};
int fun3(){
    printf("hi hello ji this is function_no. 3 now\n enter any number");
    int num3;
    scanf("%d",&num3);
    
    return num3;

};


// important points for Function:
/*  1. apnko function call krne se phle apnko fucntion ko declare krna hoga mtlb apn program meh function phle call kr rhe hai and function ko baad meh niche declare kr rhe hai toh, galat mtlb esseh eroor show hoga. but haan agr apnne simply phle function ko sirf declare kr rkha hai, then apn uss function ko call kr skteh hai, and phir sbse baad meh apn uss function ko define kr lenge, thus toh sb control-cursor apne aap handle kr leta hai. thus toh apn function ko phle declare krke baad meh as per need define bhi kr denge.
    2.
    1.jaise apnko apne program meh ek kaam ko baar-baar karane ki jarurat pd skti hai then tb apn uss kaam  ka       ek function bana dete hai thus , toh apnko jb bhi voh particular kaam krvana ho then simply uss kaam k  function ko call kr lete hai. and orr toh orr kisi dusre program meh bhi uss function ka use kr skteh hai jb    bhi apnko uss function vala kaam krvana ho. as like jaise: apnko console meh print krvana hota hai toh apn simply printf()-fn ka use krteh and dekhe toh voh function ek baar hi banaya gaya hai but apn uska use har kisi program meh kr skteh hai, thus toh functions ka sbse bda , sbse best cheez yahi hai ki apn function ko kabhi bh(mtlb same program meh bhi and also in other program meh bhi) , kahi bhi , jab chahey tb bhi. call krke use kr skteh hai.s

    2. apn kisi function k andar koi function nhi bana skteh, but usse call jarur kr skteh hai. yeh baat apnko acche se dhyan meh rheni chahiyeh.

    2. and LOOP and Function meh yahi difference hai ki loop apna kaam ek baar meh hi kr deta hai , mtlb loop apna kaam continously krta hi rheta hai upto its terminating-condition(that may finite or infinite) as like jaise apne ek loop likha hai toh usmeh kuch kaam hota hai and voh kaam baar-baar hota rheta hai continously jb tk usi condtional-statement false na hojayeh , thus toh LOOPS pe apna itna Control nhi hota mtlb ek baar loop chal gaya toh apn usse rok k vapis resume nhi kr skteh hai , but apn function ko kaha bhi , jab bhi , kahi bhi , kisi pe bhi accordingly call and use kr skteh hai,
    thus toh LOOPS ka apna use hai and FUNCTIONS ka apna use hai. mtlb function wala kaam LOOP bhi kr skta hai but yeh kaam controlled nhi ho gaya jaise: apn jb chahey ess kaam ko krvana chahteh hai, ya kisi orr dusre programm meh use krna chahteh hai then yeh sb cheeze apn eseh nhi kr pateh.

    // tip: or toh orr thus apn apne LOOPS ko bhi koi function bana ke uske andar uss LOOP bana dete hai. thus toh, thus isiliy functions kafi important hoteh hai as bcoz ess tarah apn program ko keval functions meh divide kr skteh hai. thus apn toh ase bhi bol skteh hai program functions ka hi combination hota hai, and hamesa koi bhi program in terms functions hi bana chahiyeh , mtlb uss program k diff-diff task collect krlo and and thus sbhi tasks k respective functions simply bana lenge , and fir jab chahiyeh , jaha chahiyeh , jis tarah chahiyeh uss tarah unn sabhi functions ko combine kr denge. and apna program ban ke ready ho jayega.

    3. or apn ese bol skteh hai ki function directly machine-level-learning ko samajteh huee likhe jate hai ya banayeh jata hai. as like jaise printf()-fn jo ki console meh print krta hai ess function meh text ko console se connect kiya hoga, and phir ase kuch kaam krke jo bhi yeh apne parameter ko console meh print kr deta hai. 
    // now jaise jo maily library-Functions hoteh hai voh machine-level-learning ko samajteh huyee banayeh jate hai jaise: printf()-fn , scanf()-fn , 
    // and apn enn Library-Functions ka use krke ek apni need k according koi Function bana skteh hai , thus toh jb apnko voh kaam krna hoga tb apn simply uss function ko call krek use kr lenge.

    4. thus toh apn ase samaj skteh hai ki Function ek program hi hota hai jo ki kuch koi kaam krta hai.
    5. jasie ek bade program kafi sare mini-tasks hoteh hai jaise: koi program hai  voh shooping ka order place krta hai toh esmeh kuch mini-tasks hoteh hai jo ki ek program meh one by one follow hoteh hai

    6.functions ka use krke apn bade program ko chote-chote sub-part meh divide kr skteh hai.
    6. thus ek bda program banane k liyeh apn FUNCTION k according ek group meh divide kr skteh hai jaise: program ka task1-program aju likhega , task2-program ayan likhega, etc.etc... thus developing asan essay ho jati hai. thus toh functions ka yeh bhi ek fydaa hai ki apn apne program alag-alag developers meh baat skteh hai , toh mtlb kisi ek member load nhi hota bcoz sbhi members apna-apna kaam kr rhe hai and at the last enn sbhi task-program ko combine krke ek naya bda efficient Program bana liya jata hai.

    7. thus esseh Debug krna bhi aasan ho jata hai, as bcoz jis task meh error aa raha hai mtlb voh task jo apna thik nhi kr rha hai toh apn pointedly and directly uss task pe chale jateh hai , and uss task-program ko debug kr dete hai, thus toh function ka yeh bhi ek bda fyadaa hai.

    8. suppose jaise apne program 10 alg-alg kaam hai unn sb 10 alg-alg kaam k combination se mtlb apna ek program ban rha hai, thus toh apn simply unn 10 alg-alg sub-kaamoo k liyeh unke respective function bana skteh hai. thus toh apna program easy to handle hojayega. thus yeh bhi fayadaa function ka.

*/


// why python is better than c.
/*
note-point: coding langauages meh jda farak nhi hota , mtlb laguages se acchi coding acche programs banayeh ja skteh hai
but bs farak pdta hai sirf library-functions ka mtlb C-languages meh library-functions kaam , and comparisonly python-
jaise languages meh library or moudules functions kafi jda hai thus toh apna aasaan and creative ho jata hai mtlb bane
banayeh fuctions ki help bade bade and acche acche programs easily and fastly bana skteh hai. but apn ese bade-bade and 
acche-acche programs C-languge se nahi bana skteh . 
now ek baat aati hai apn jaise python language k functions ko C-languages use krle and phir vaha se apna kaam chalu krde, 
but esa ho nhi skta bcoz ek programming-language meh likha gaya function kisi dusri programming-language meh chal nhi skta
bcoz voh function alag syntax meh likhe hoteh , 
now aab ek baat orr aati hai ki apn unn functions ko samaj k apni C-language meh likh le toh phir yeh kaam kr jayehga, toh
haan yeh kaam kr jayega , but apn kitne functions ko samaj k kitne functions ko vapis C-language meh likh skteh hai. thus 
yeh kafi jda bda ho jata hai, thus tooh
tooh phir simply apn uss dusri language meh switch kr jateh hai, and phir usi language meh coding krteh hai.*/