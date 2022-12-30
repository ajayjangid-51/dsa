// YAHA pe apn Arrays Arthematic and Pointers Arthematic k bareh meh dekhenge:
//now as simply sbse phle apnko yeh dhyan rhkhna hai ki Array Arithematic and Pointer Arithematic alg hoti hai normal arthematic se. 

// Now Pointer pe Arithematic-operation krne ka mtlb hai ki usmeh stored Address pe Arithematic-operation krna. thus toh mtlb usmeh stored Address change hojayega. then now aab yeh Pointer kisi orr Container ko Point out krega mtlb ess pointer meh aab kisi orr Container ka address hai. and ya apn ese bhi bol skteh hai ki // And ek baar pointer pe operation krne se uss address k according ek dusri memory-part memory meh allocate ho jati hai. And phir apn uss memory ko uss pointer se point out kr skteh hai..

// imp-point:
// simply array_name actually meh ess Array k address ko denote krta hai. mtlb simplly esmeh ess Array ka address store hota hai.
// ya phir apn ese bol skteh hai ki jb bhi apn koi bhi ARRAY banateh hai then vaha automatically uss array k naam se ek pointer bn jata hai jo ki uss ARRAY k address ko store krta hai. and apn janteh ki containers ki return value unke andar stored-value hi hoti hai. but apn esspe directly ++ and -- nhi kr skteh.
// and ARRAYS pe Arithematic-operation krne ka mtlb hai unke address meh datatype-byte size equivalent increase ya decrease kr dena. jaise; int m = array + 1 mtlb ess array ka jo address hoga usmeh datatype-size or add krdo thus toh aab yeh m meh kisi orr sub-container ka address hai mtlb simply eske aage wale array-element-sub-container ka address hai. 
// and yeh array + 1 address ko hi deonte krta hai and thus toh isiliy apn ARRAYS ka address kisi Pointer store nhi krteh hai.  
// and array ka address apn simpl array[0] ka address maan skteh hai.


// Pointers/Arrays pe apn mainly 2-types k arthematic operations kr skteh hai. jaise:
/* 
#1. Addition-operation. (as jaise ki apn janteh hai ki Addtion-operation krne k liyeh apn simply ++ operator ya phir + operator use krteh.)
    note: as apn jateh hai ki "++" -operator se by 1 increament hota hai.

#2. Substraction operation (and same ki jaise apn janteh hai ki Substraction-operation krne k liyeh apn simply 
-- operator ya phir - operator use krteh.)
    note: as apn jateh hai ki "--" operator se by 1 decrement hota hai.
*/
// NOW- as apn kaha ki Pointers ya Array Arthematic Normal-Arithematic se different hoti hai, toh Pointers ki Arthematic ess concept k hisab se hoti hai. jaise apn ne int-pointer meh +2 kiya hai thus toh ess pointer k Address meh 2-times of int-size(mtlb 2-times of int-bytes-equivalent size) ka increment ho jayega mltb 2*4 ka increment hojayega. and as like jaise apn ne char-pointer meh +3 kiya hai then  ess pointer meh 3-times of char-size( mtlb 3-times of char-bytes-equivalent size) ka increment hojayega. and same for Subraction-operation mtlb vaha pe decrement hojayega. and as like this for all other datatype-POINTERS.
// Note: and apn address ko mostly integer-typecasting meh hi dekhteh hai takki apn easily int-size , char-size , long-size ko samaj sake mtlb easily manipulate kr ske.

// Note-point: agr apne pointer pe operation krne se usmeh address esa kuch address ban gaya jo ki invalid mtlb exists hi nhi kr skta then apnko error show hoga. Or agr voh address esa ban gaya ki voh valid hai pr voh jis container ko denote kr rha hai uss container meh agr koi value store nhi hai then agr apn phir *-operator se uski value show krvana chhteh hai then apnko simply garbage value show hogi.

// Concept:
// thus toh actually meh esa hota hai ki jaise apn janteh hai ki Pointer kisi particular-memory-part ko point krta hai toh thus agr apn usmeh arithetic operation kre toh phir voh pointer kisi dusre Container/memory-part ko point krke but voh depend krta hai arithematic operation ki voh aab konse Container/memory-part ko point krega , thus voh ess tarah hota hai jaise: pointer + 1 thus toh yeh apne se just aage vale container ko point-kr rha hai , and jaise: pointer + 2 toh mtlb yeh apne se 2nd-no. wale Container ko point kr rha hai thus toh eska mtlb eske andar aab uska address store hai.


// Dereferencing mtlb pointer meh jis container ka address hai uss container ki value show krvana and apn yeh Dereferencing  *-operator se krteh hai.

// POINTER sirf or sirf memory se related hai mtlb har pointer kisi na kisi memory ko point krta hi hai. and but agr uspe arithematic operations kiye gayeh ho then voh phir kisi orr memory ko point krega.
// AND NOTE-point ki : apn Pointer Arithematic ka use krke kafi powerful programs bana skteh hai ya apn ese bol skteh hai ki Powerful programs ess Pointer Arithematic ka kafi use hota hai.
#include<stdio.h>
int main()
{
    int a = 42;
    int* pointer_a = &a;
    printf("the value of container whose address is stored in the pointer a is before operation\n");
    printf("%d\n",*pointer_a);
    // printf("%d\n",pointer_a);
    // printf("%d\n",pointer_a + 1);
    // printf("%d\n",pointer_a + 2);
    // printf("%x\n",pointer_a);
    // printf("%x\n",pointer_a + 1);
    // printf("%x\n",pointer_a + 2);

    pointer_a = pointer_a + 2;
    printf("the value of container whose address is stored in the pointer a is \n");
    printf("%d\n",*pointer_a);
    // as size of int is 4 toh thus esmeh +1 krne ka mtlb 1 baar bytes equivalent size of int add krna: jaise size of int is 4 thus toh esmeh 1 time 4 add hojayega.
    char b ='3';
    char* pointer_b = &b;
    // printf("%d\n",pointer_b);
    // printf("%d\n",pointer_b+1);
    // printf("%d\n",pointer_b+2);
    // printf("%d\n",pointer_b-1);
    // as bytes equivalent size of char is one thus toh aab in terms of interger typecasting yaha 1 se hi arithmatic operation honge.
    // toh thus pointers pe arthematic operator krne ka mtlb hai ki usmeh jo address store hai uspe arthematic operation krna, thus toh kisi bhi pointer pe arithematic-operation hoga toh mtlb uske address pe arithematic arithmatic-operetion thus toh esseh address change hoga thus toh aab voh pointer jaise:(pointer_a + 2)(yeh apna ek pura pointer hi hai.); kisi orr container ko point out krega. 
    // mtlb voh pointer  apnko  aab address change ho jayega. toh mtlb aab voh pointer kisi oor container ko point krega.

    // now aab address meh arithematic-operations se kya chagement aata: jaise agr pointer int hai toh usmeh +1/-1 krne pr in integer-typecasting byte-size increament/decrement hoga mtlb by 4 increment/decrement hoga. and agr pointer char hai toh usemh +1/-1 krne se in integer-typecasting byte-size mtlb by 1 increment/decrement hoga.


// RELATION between ARRAYs and POINTERS:
// jaise:
// arrays meh: 
/*      array_name[0] = array_name          are  same
        array_name[5] = array_name + 5      are same as bcoz ki apn janteh hai array-container meh uske sub-container ka address by their-sub-container-size k according increase hota rheta hai from 0th element to nth element of the array. and apn yeh janteh hai Arrays Arithematic operation krne pr bhi esa kuch hi hota hai.
*/


    int marksarray[] = {0,3,12,43};
    int* pointer1 = marksarray;
    // as bcoz yeh pointers meh apn Array's element k address ko directly ess tarah store kr skteh hai. thus toh apnne kabhi bhi kisi pointer meh kisi array ko assign kiya then uska mtlb hai ki apnne uss array k 0th index-element ka address assign kiya hai. thus toh yeh Arrays and Pointers k bich ka ek relation hai. mtlb simply boleh toh pointers meh Array ko pointer = array-name likhna mtlb yeh pointer = &array-name[0] same hota hai.
    printf("%d\n",pointer1);
    printf("%d\n",&marksarray[0]);

// for int* pointer = array-name = &array-namme[0]
// for int* pointer = array + i = &array[i]
// and value of (array-name + i) = array-name[i] for pointer.

printf("\n\n\n:\n");
    int* poitner3 = &marksarray[2];
    printf("%d\n",poitner3);
    int* poitner4 = marksarray + 2;
    int* poitner5 = poitner4 + 2;
    // toh thus yeh array k 2nd index element k address ko denote kr rha hai. thus toh then *(marksarray + 2) = marksarray[2] = or 
    printf("%d\n",poitner4);
    printf("%d\n", poitner5);

    printf("%d\n",marksarray[2]);
    printf("%d\n", *(marksarray + 2));
    printf("%d\n", *poitner4);

// arrays:
printf("array arrys:\n");
    int intarray[] = {2,3,4,2,21,5,34};
    printf("%d\n", &intarray[0]);
    printf("%d\n", intarray);
    printf("%d\n",intarray + 1);
    printf("%d\n",intarray + 2);

int ioi = &intarray[0];
printf("%d\n",ioi);
    int* arpointer1 = &intarray[0];
    printf("%d\n",arpointer1);
    // thus toh esmeh apnko Arrays k address k liyeh alag se pointer ki jarurat nhi hai as bcoz 
    

    return 0;
}










// making SNIPPET FOR CODE in VISUAL Stdio.
// goto setting-gear-icon>>user snippets>>c and do like this:
/*  "name for snippet": {
		"prefix": "calling-name",
		"body": [
			"#include<stdio.h>",
			"int main()",
			"{",
			"\t$1",
			"\treturn 0;",
			"}",
			
		],
		"description": " description for this particular snippet mtlb what its use or why or anything"
	}
*/
// thus ess tarah code-snippet bana ke apn apni coding ko fast and achi kr skteh hai.
// and apn apni according apne liyeh kafi sare snippets bana skteh hai.

// C se fast Assembly language hoti hai, thus esliy kaha jata hai ki C-language assembly language ki tarah complex hai but actually esa hai nhi. thus C- k liyeh apn ne definationly and conceptually resasoning krli then phir apn easily and asani se baki sari sbhi languages sikh and kr skteh hai. 


