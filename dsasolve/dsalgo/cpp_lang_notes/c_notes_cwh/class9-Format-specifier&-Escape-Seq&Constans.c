// YAHA pe apn format-specifiers, Constants, Comments and Escape-Sequences k bareh meh dekhenge:

#include<stdio.h>
#define PIconstant 3.14
#define keyword1
// thus toh ess tarah pre-processing-statement se apn constant define krteh hai mtlb create krteh hai. and apn ase bhi bol skteh hai ki #define keyword se apn pre-processing-statement se apn Constants ko define krteh hai.and agr apn apne aane wale program k liyeh kuch keywords-with-value banana chahteh hai then voh simply apn yaha essee banateh hai. and voh as a keyword ki tarah hi behave krega and uski value ek constant ki tarah hi behave karegi. 

// and haan: apnko pre-processing-statements meh semi-colon(;) lagane ki jarurat nhi hai.
int main()
{


/* #1:  Format-specifiers simply "Symbols" hi hoteh hai jo ki kisi variables-container ko denote krteh hai mtlb variable-container ki jagah use hoteh hai, as bcoz C-programming meh String meh variables-container ka use krne k liyeh apnko unke respective-Format-specifier ka use krna pdta hai.
// now diff-diff variables k liyeh different Format-specifier hoteh hai:
        1. %c (yeh char-variable-container ki jagah use hota hai)
        2. %d (yeh int-variable-container ki jagah use hota hai)
        3. %f (yeh float-variable-container ki jagah use hota hai)
        4. %lf (yeh double-variable-container ki jagah use hota hai)
        5. %l (yeh Long variable-container ki jagah use hota hai)
        6. %Lf (yeh Long-double-variable-container ki jagah use hota hai)
        7. %x (for hexa-decimal-container)
        8. %p (for to print pointer-value(mtlb address))
        7. some advance Format-specifier k bareh meh apn aage orr explore krenge.
        

NOTE-POINT: apn Format-specifier ka mainly scanf()-fn and printf()-fn meh hi krteh hai bcoz enn function ka syntax-format hi esa hai as like:
printf(" strings or Format-specifiers",  vairable-for-format-specifier,variable-for-format-specifier,...,..,upto number of format-specifier used in strings.. )
tip: thus mtlb apnko strings meh variables-container use krne k liyeh Format-specifiers ka use krna pdta hai but jaise other programming-languages meh apnko ese strings meh variables-container ko use krne k liyeh kuch ese Format-specifiers ka use nhi krna hota hai, thus toh Format-specifiers sirf C-language meh hi hai.

and same also for:
scanf(" strings or Format-specifiers",  vairable-for-format-specifier,variable-for-format-specifier,...,..,upto number of format-specifier used in strings.. )

// TIP: thus toh kabhi bhi apnko Strings meh variables ka use krna hai then vaha pe apn simply Format-Specifiers ka use krteh hai and phir aage wale argument meh uss acutal variables ko input krteh hai. 
*/

    printf("hello ji kaise ho ji %d-%d message aayeh hai apke usmeh %d wala company se hai\n",2,3,5);
    // but mostly apn variables k liyeh krteh bcoz ese toh apn ese bhi kr skteh hai;
    printf("hello ji kaise ho ji 2-3 message aayeh hai apke usmeh 5 wala company se hai\n");
    int a;
    float b;
    float c;
    a=2;
    b=3.333;
    c=44.2;
    printf("hello ji the value of a is %d and the value of b is %f but the value of c is %f\n",a,b,c);
    // as jaise ki apn notice krenge toh apn dekhenge ki yaha b ki value 3.333000 shown ho rhi hai bcoz yaha yeh "b" ek floating-number hai isliy yeh puri accuracy and puri-range k according floating-number show ho rha hai and agr apn ess cheez ko alg way meh print krvana chahteh hai then we do like this:
    printf("hello ji the value of a is %10.8d and the value of b is %8.5f but the value of c is %f\n",a,b,c);
    // thus yaha 8.5 ka mtlb 8 accuracy or spaces(if accuracy is fullfilled then spaces ) k saat in the right of "." and 5 accuracy or spaces k saat in the left-side of "." and yeh 8 total no-of-digits(lhs and rhs of dot".") se match bhi hona chahiyeh mtlb agr total digits 9 hai then essee koi fark nhi padega and agr total 5 digits then 8-5= 3 digits ka l.h.s meh space ban jayega and agr it is -8.5 then voh phir r.h.s meh space banega. and same like for r.h.s. jaise agr .2 hai toh decimal k baad two digits hi ayengi mtlb .3 or .5 etc ka total digits se koi lena-dena nhi hai. 
    printf("hello ji the value of a is %10.8d and the value of b is %8.2f but the value of c is %13.9f\n",a,b,b);
    // ## or this %a.bf all simply means that a numbers ki space meh b accuracy tk given-number ko print krdo.

    // IMP-NOTE-POINT: and apn ess concept ka use pattern-Drawing meh krteh hai.
    


// #2: Comments: mtlb voh sentences or paragraphs jinhe compiler compile nhi krta , thus toh yeh basically note-points note krne k liyeh kaam aateh hai.

/* #3: Constants: jaise ki apnne phle bhi dekha tha ki contants voh container hoteh hai jinki value(mtlb unke andar stored data ) phir kahi orr se vapis se update ya change nhi kari ja skti.
C-programming meh apn constant-container ko 2-tarike se declare and initialze krteh hai:
        1. by const-keyword
        2. by #pre-processor  (mtlb jaise pre-processor statement hoti hai usmeh hi apn const create kr skteh hai:)
*/
    int a1 = 5;
    const float b1 = 7.321;
    a1 = 10;
    // b1 = 42.1;  // apn yaha pe ess b1 ko change ya update nhi kr skteh bcoz yeh const hai.
    // PIconstant = 1;  // this cannot be change or updated bcoz yeh pre-processed-Constant hai.
    printf("the constant which is define by pre-processing-statement is %f \n",PIconstant);
    // int keyword1 = 10; // can't be name keyword1 bcoz keyword apna ek keyword ki tarah hi kaam kr rha hai.


/* #4: ESCAPE-SEQUENCES-Character:
// simply boleh toh Escape-Sequences-character bhi ek Synbol hi hoteh hai jo ki kisi charater(jaise: / , " etcc..) ko denote krta hai mtlb apn ense Language-sequence ya syntax ko Escape kr skteh hai mtlb jaise: apn string meh doublequote("") ka use ase toh nhi kr payenge but apn Sequences-ya-Syntax Escapes ka use krke doublequote("") use kr skteh hai. and jaise apn 
//  . jaise: different types of Escape-character:
        1. \a  (esse string meh bada-dot bn jata hai) and orr esseh alarm and beep bhi ring kiya ja skta hai.
        2. \b  (backspace: esse ek backspace jaise character shown hota hai )
        3. \f  (form feed: esse 2-whitespace crete ho jati hai)
        4. \n  (new line:  esse eske aage aane wali string-part new line meh shift ho jata hai)
        5. \r (carriage-return: esse bhi new-line hi show hoti hai )
        6. \t (tab-horizontal: esse ek bada space print hota hai)
        7. \v (vertical-tab: esse ek bada space as in vertical meh print hota hai )
        8. \\ (backslash(\) esse apn backslash daal skteh hai jo ki apn ese nhi daal skteh.)
        9. \' (single-quote(') esse apn string meh single quote daal skteh hai jo ki apn ese nhi daal skteh hai)
       10. \"" (double-quote(") esse apn string meh double quote daal skteh hai jo ki apn ese nhi daal skteh hai)
       11. \? (question mark: esse apn question-mark(?) daal skteh hai)
       10. \nnn (octal number:)
       11. \xhh (hexadecimal number:)
       12. \0 (null: esse eske aage ki string print nhi hogi)

yeh hamesa backlash(\) se hi start hoteh hai

NOTE: jaise apnko apni String_litrl ko modify(mtlb kuch changement lana) krna ho then vaha pe apn simply Escape-Sequences ka use krteh hai. jaise agr apnko apni string ko new-line meh start krna hai then we use \n-character, and jaise agr anko apni string-sentance meh double("") use krna ho toh phir apn \"  ka use krteh hai and etcc..etc..
*/

    printf(" hello beep \a beep");
    printf(" hello hi backspace \b backspace");
    printf(" hello feed form \f feed-form");
    printf(" hello newline \n newline");
    printf(" hello carriage return \r carriage return ");
    printf(" hello tab \t tab");
    printf(" hello vertical-tab \v vertical-tab");
    printf(" hello backslah \\ backslash");
    printf(" hello double-quote \" double-quote");
    printf(" hello single-quote \' single-quote");
    printf(" hello question-mark \? question-mark \n");
    // printf(" hello question-mark \nnn question-mark \n");
    // printf(" hello question-mark \xhh question-mark \n");
    printf(" hello question-mark \0 question-mark \n");

    return 0;
}


// ds and algo mtlb apn vaha ya usee diff-diff programs banana sikhthe hai. mtlb unhi code-lines se uniquely and intelligently ek algorithm(ek codes ka arrangement jisse kuch kaam automated ho) banateh hai and phir unheh uss algorithm k according structue krteh hai.
