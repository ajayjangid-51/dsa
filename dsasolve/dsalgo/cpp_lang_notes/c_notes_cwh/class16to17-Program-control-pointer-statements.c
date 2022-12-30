// YAHA pe apn Program-control-Cursor k dedicated Statements k bareh meh dekhenge: thus mtlb enn Statements ka use krke apn Program-control-Cursor ko jump kra skteh hai mtlb kisi code-line se kisi orr code-line pe jump kra skteh hai, toh hence voh vali code-line execute ho jayegi.

//## Program-executing-Cursor: 
// Very imp note point: har program ka ek control-Cursor hota jo ki program ki har line pr from top to bottom aata hai and jis line pe yeh hota hai simply voh Code-line execute ho jati hai ,jaise: program-controller Cursor printf pe aaya ya printf pe hai toh simply printf execute hojayega and phir ek baar voh execute hone k baad voh Cursor niche aagle wale code-line pe aayega and jaise phir voh while-keyword pe aaya toh simply while execute hojayega and voh Cursor   execution k saat saat hi chlta hai thus voh while loop k execution k saat chalega and jaise hi usee continue; -Statement dikha then voh pionter vahi se just vapis uss while pe chala jayega and thus while vapis se execute hojayega. thus:
// Mtlb Cursor jispe ya jaha pe hoga voh line execute hojayegi mtlb voh line apna kaam karegi, 


// now mainly C-programming meh 3-Program-executing-Cursor-Statements hoti hai jinse executing-Cursor jump krta hai accordingly w.r.to respective-executing-Cursor-Statement:
/*
	1.break; statement 
	2.continue; statement
	3.goto; statement
*/
// thus toh now aab apn enn 3-Cursor-Statements k bareh hi dekhenge jinse executing-Cursor jump kr jata hai:
/* #1.break; statement: break; Statement ka use mainly Switch-case BLOCK and LOOP-BLOCKS meh hota hai:
now jaise agr apn Switch-case meh kisi case meh break; statement ka use krteh hai then apna executing-Cursor directly Switch-case k bahar nikal jata hai mtlb, aab apna Switch-case Block k baad wala code-line execute hogi.
and note for switch-case: jaise ki apn janteh hai ki switch-case block meh koi case true hoga tabhi uske wala kaam hoga mtlb agr usmeh koi break; statement t 
// thus toh simply apn ese bol skteh hai ki jb bhi Switch-case-block ya LOOP-block meh executing-Cursor ko break; dikhta hai then simply and directly executing-Cursor uss Switch-case Block ya LOOP Block k bahar jump kr jayega. and phir jis code-line yeh executing-Cursor hoga ,toh simply voh code-line execute hojayegi.
// thus toh jaise hi apn break; statement ka use krenge apna program-executing-cursor uss Switch-Case-BLOCK ya LOOP-BLOCK k bahar jump kr jayega. and switch-case k bareh meh apnko pta hai ki switch-case meh sare cases check hoteh from top to bottom and koi case ture ho jata hai toh niche wale sabhi bhi true consider kr liyeh jateh hai and unka Work-Box bhi execute ho jata hai.

TIP: jaise apn apni vedio meh add dena chahteh hai, thus toh ek loop banayenge and usmeh apni vedio daal denge and ek ess loop k ek or loop banayenge jismeh apn yeh AADs dalenge thus toh jaise 15-sec hogi apn ek buttono bandenge thus jisse hi uspe koi click krega then usse break; statement run hojayegi and voh nested-loop exit ho jayega. toh tarah youtube vedio ka program likha jata hoga, and agr koi esse accha algo ho toh voh bhi apn dekhenge.
#jaise: 
*/ 
#include<stdio.h>
int main()
{
	int i =0,age;
	for(; i<10;i++){
		printf("the value of i is %d\n now enter the your age and as accoriding you age reamaining vales of i will shown if age>10 then no value will be shown",i);
		scanf("%d",&age);
		if(age >10){
			break;
		};


	}
	// FOR Switch-CASE apn break; use in class11 meh kiya hai toh apn yeh wala vaha se refer kr skteh hai.
	// iteration of loop mtlb loop-round or loop-cycle.







/* #2. continue; Statement: continue; statement ka use mainly LOOP -BLocks meh hota hai,
now jaise agar apn continue; Statement ka LOOP-block meh use krteh hai , then apna control-Cursor directly vapis se ess current LOOP k starting meh jump kr jayega, and now aab apna LOOP -Block vapis se execute hojayega.
// // thus toh simply apn ese bol skteh hai ki jb bhi LOOP-block meh control-Cursor ko continue; dikhega then phir simply and directly yeh control-Cursor ess LOOP-Block k starting meh pochjayega and thus toh aab jaha pe control Cursor hai voh wali-code-line run hojayegi mtlb apna loop vapis se run hojayega. 

// and Continue; ka use apn tb krteh hai jb apnko kuch lines of code skip krni hoti hai jaise apn break; ka use krke loop se exit ho jateh hai but agr apn continue; ka use krke usse vahi se exit hone se bach skteh hai... Thus toh apn ess tarah codes of line ko skip kr skteh hai as per the condition..
// and Jaise contine ka jda use nesting meeh hota hai jaise: apn koi if/else if condition lagayenge then usmeh apn continue; agr use krteh hai then toh voh only and keval ess nested-LOOP conditional-statement se bhat nikal jayega.
// thus toh apnko apne LOOP ko kahi bich meh se vapis start krna ho. then apn vaha pe continue; statement ka use krteh hai bcoz continue; statement se executing-cursor vapis loop-k starting meh chala jata hai mtlb loop- starting meh jump kr jata hai.
jaise:
*/
	for(; i<10;i++){
		printf("the value of i is %d\n now enter the your age and as accoriding you age reamaining vales of i will shown if age>10 then no value will be shown\n",i);
		scanf("%d",&age);
		if(age >10){
			continue;
		};
		printf("hi hello ji\n");
		printf("kaise ho ji\n");
		printf("actually yeh sb nhi aana chahiyeh tha agr apnne kuch <10 input kiya hota toh\n");
		printf("sorry you didn't put less than 10\n");
		printf("you should put >10 as an age\n");


	}

/* #3. goto; Statement: goto; statement ka use apn kaha kahi bhi kr skteh hai, toh bs apnko sirf from to target set krna hota hai, thus toh apna program-control-Cursor from to setted target pe jump kr jayega and phir phir apna control-Cursor jaha hoga voh wali code-lines execute ho jayegi. 
// now apn goto statement use krne k liyeh phle jump-target set krteh hai and yeh jump-target apn label: keyword ki madad se set krteh hai. as like this:
// 								
// thus toh program meh apnko kahi se kahi orr executing-cursor ko le jana ho as bcoz apnko aab vaha se program ko execute krvana hai. 
// thus toh mtlb apnko kuch bhi code-snippet vapis se reuse krna hai then simply executing-cursor ko goto; statement se vaha bhej do and phir vapis goto; statement use krke phle jaha tha vahi pe vapis bhej do, toh as like this apn kuch code-snippets ko reuse kr skteh hai.
// and jaise apn GOTO; statement tabhi mainlly krteh hai jb apnko multiple loop meh bahar jump krna ho, jaise ek loop multiple nested-loop and unn individual nested-loops orr nested-loops hai agr apnko kisi condition pe enn sb loop se bahar jump krna hai toh, mltb break; statement se toh kr nhi skteh but apn goto; statement ka use krke unn sbhi loops meh se bahar nikal ya jump skteh hai.
 jaise:
*/
	// int b=5,c=4;
	// printf("hello the valueo of a and b are respectively %d and %d\n",b,c);
	// label1: printf("hello ji this is code-line after label1:\n");
	// printf("hi ji this is a code-line2 after lable1:\n");
	// goto label2;
	// goto end;

    printf("this is line between label1 and label2 which es executed bcoz yet now no goto statement is used");

	// label2:
	// printf("hello ji this is code-line after label2:\n");
	// printf("hi ji this is a code-line2 after lable2:\n");
	// goto label1;
	// thus toh mtlb yaha cycle ban jayegi mtlb ek LOOP hi ban jayega, thus toh apn goto -Statement ka ess tarah use krke ek apn User-Created LOOP bana skteh hai.

	// end:
	printf("LAST LINE");  //thus toh yeh line print nhi hogi bcoz apna program lable1 and goto ek bich meh hi ghumta rhega. but now apna program pura run hojayega.

	// other exaple of goto; statement:
	int m,num1;
	for(int m = 0; m<7;m++){

		printf("the value of m is %d\n",m);
		
		for(num1 = 0;num1<10;num1++){
			printf(" now enter the 11 to exit the loop so that no more values of m is shown\n" );
			scanf("%d",&num1);
			if(num1==11){
				goto loop1end;
			}
		}

	}
	loop1end:
	printf("okay you have inputed the value 11 so we exited the program\n okay now try for another number so that this line will not be printed");


// IMP NOTE-POINT for nested Switch-case and LOOPS: agr apn control-Cursor-Statements ka use Nested Switch-case and LOOPS meh krteh hai then voh sirf sirf enn nested-Block pe hi lagu hoga jismeh control-Cursor Statements ka use kiya na ki actual-parent loop se.

	return 0;
}
// Iteration mtlb loop-cycle
/*Programs to make: from upper 17-vedios:
	1.	All conversion program
	2.	All login program as like if condition is true then display the other page
*/