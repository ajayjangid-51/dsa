// YAHA pe apn LOOPS k bareh meh dekhenge:
// Programming meh LOOP mtlb cyclic-process thus toh programming meh LOOP kisi kaam ko cyclicly krta hai mtlb simply LOOP ek kaam ko baar-baar krta, thus toh kabhi bhi anpnko koi kaam baar-baar krvana ho then phir apn simply LOOPS ko use/apply krteh hai uss kaam(kaam mtlb code of lines pe ya code-snippet-mtlb ek bunch of code-lines ko execute krna) ko krne k liyeh.
// thus toh mtlb apnko kaabhi bhi kisi particular Work-box{} ko baar-baar krvana hai with some updation(mainly variable-value-updation) or modification then tb vaha apn simply LOOPS ka use krteh hai. as an example: jaise apna koi game hai then usmeh apnne 3-revive rhkeh hai, then 1-baar marne k baad apn uss game-code ko vapis run kr denge thus toh player ko esa lagega ki meh game meh vapis revive ho gaya hu. and many cheezo k liyeh apn loops ka use kr skteh hai.

// # now apn kuch or +points or Advantages of LOOPS dekhenge:
/*  1.code-reusability (mtlb ek writtend-code ko hi baar-baar use kr lena, toh voh apn LOOP meh daal k kr skteh hai:)
    2.saves time
    3.Traversing or iterating (mtlb ARRAYS k element ko one by one point-out krna)
*/
// infinite loops ka use game-program meh hota hai. and apn LOOPS ki nesting bhi kr stkeh hai..

// now as same as if-else Conditionals, LOOPS meh bhi Condition-ya-Special-Statement and Work-BOX hoti hai.
// now LOOPS ko follow krne wali condition-statement ko yeh loop check krta hai, and phir agr voh true hoti hai then voh uske following Work-BOX ko execute krdega, and phir vapis se condition ko check krega and agr voh true hoti hai toh phir work-BOX vapis se execute hojayega and so..on yeh cycle(check hona and phir execute hona) chlti hi rhegi, jb tk condition ko check krne pr voh false nhi mil jati tb tk.

// So thus, now LOOPS different types k hoteh hai on the basis of, mtlb voh diff-diff tarike se kaam ko baar-baar krteh hai: jaise:

/*  #1.while Loop  (yeh keyword while-loop ko denote krta hai thus toh mtlb while apni following condition-statement ko check krta hai and agr voh true hoti hai then voh Work-BOX ko execute krdega, and phir vapis se while-loop apni following condition-statement ko update krega and phir check krega and phir agr voh true hoti hai then simply Work-box execute ho jayega, and thus phir vapis se while-loop apni following condition ko update and check krega...and so on Work-BOX ko execute krta rhega jb tk uski following condition true hoti rhegi tb tk and agr ek baar following-condition false ho gayi toh phir while loop apni following condition-statement ko check nhi krega and phir Work-BOX bhi execute bhi nhi hoga )
// thus toh directly: mtlb yeh kaam baar-baar hota rhega jb tk condition false na hojayehand so agr apnko koi kaam baar-baar krvana ho then apn simply LOOPS ka use krenge.
*/
#include<stdio.h>
int main()
{
    // int b =0;
    // while(b<20){
    //     printf("%d\n",b);
    //     b= b+1;
    // };



/*
    #2.do while Loop (do-loop ko simply Work-BOX follow krta thus toh simply do loop bina check kre bina first time toh Work-BOX ko execute kr deta hai, but Work-BOX first execute hone k baad phir While-loop apni following condition ko check krta hai and agr voh true hoti hai toh phir voh do-loop ko bolta hai ki apne following Work-BOX ko execute krde ,and ek baar Work-BOX execute hone pr while loop vapis se condition ko check krta hai and agr voh true hoti hai toh voh do-loop ko bolta hai ki apne following Work-BOX ko execute krde, and so on..yeh process cyclicly chlti rhegi, and jb tk while-loop ki following condition-statement false na ho jaye tb yeh ess tarah cyclicly chlti rhegi, other voh phir vahi pe stop ho jayegi ).

    // thus toh jaise apnko ek baar toh kaam krvana hi hai, bina kisi condition k cheek huyee bina then vaha apn simpy do-while loop use krenge. jaise: apnko kisi ko apne APP ka one-time access pe free-trial dete hai and phir 2nd-time pe apn condition check krvateh hai toh voh cheez apn ess tarah do-while loop use krteh hai. */

    // some simple do-while loop program:
    // syntax of do-while loop-BLOCK:

    // int a =0;
    // do{ printf("hello ji the value of a is %d\n",a); a +=1;} while ( a<0);

    // int num, index =0;
    // printf("hey hello ji enter the number upto which you counting\n");
    // scanf("%d",&num);
    // printf("the counting upto %d is here\n",num);
    // do{
        
    //     printf("%d\n",index+1);
    //     index++;
    // }
    // while( index<=num);
    
    


/*  #3.for Loop:
    //  (for-loop ko follow krne wali ek "special-statement" hoti hai jo ki: (variable;condition; and var-updation-statement) hoti hai mtlb yeh statement: declared-variable, condition ,and variable-updattion-for-cycle ko contain krti hai )
    // and now aab yeh for-loop apni following special-statement meh sirf ek baar initialized-variable ko dekhega and phir usmeh jo condition hai usko check krega, and agr voh condition true hoti hai toh simply Work-BOX execute hojayega and phir vapis se yeh for-loop apni following statement meh declared variable ko update krega and phir condition ko check krega and agr condition true hoti hai toh Work-BOX execute hojayega, and again vapis se for-loop apni following statement meh declared-varible ki value ko update krega and phir condition ko check krega...and as so on jb tk variable-value ko update krne k baad condition false na hojayeh..
// and importanly and mainly for-loop Traversing mtlb iterating of ARRAY krne k liyeh bhi kafi jda kaam aata hai.
// special-statement meh 3 expressions hoteh hai:
expression-1 properties:
apn one or more variables ko bhi declare and initialize kr skteh. and special-statement variable-initialization statement optional bhi hoti hai tb jb variable phle se hi initialized ho rkha hai tb. 

expression-2 properties:
1.esmeh condition-statement hoti hai.
2.yeh condition-statement one se jda bhi ho skti hai, and thus loop jb tk chalega tb tk jb tk last-condition false na ho jayeh mtlb jaise last condtion false ho gayee but baki phle wali conditions true hai toh bhi voh loop terminate ho jayega.

3.and apn ess akele expression se variable ko initialize and update bhi kr skteh hai, as bcoz q ki apn ne upar bola ki apn expression meh multiple conditions daal skteh hai but check krega sirf last-condition ko , thus mtlb for-loop phle wali conditions ko check nhi krega mtlb voh unheh as a statement hi manega and unko bhi execute kr dega. but voh enko check nhi krega. thus isiliy apn ess expression meh variable ko declare and initialize and update bhi kr skteh hai. 

4.and yeh expression optional hai mtlb agr apn chaheh toh lga skteh hai otherwise ase bhi chalega. and agr nhi lagateh toh apna loop infinite loop ban jayega. 
expression-3 properties:
1. expression-3 meh apn loop-variable ko update krteh hai.
2. apn expression-3 meh one of more loop-variables ko update kr skteh hai.
2. yeh optional hota hai, mltb agr apn ese nhi daal the toh loop-variable update nhi hoga.
*/
    // int num1,num2;
    // for( num1 = 0, num2 = 0; num1< 5 ,num2<10; num1++ , num2++){
        
    //     printf("%d %d\n",num1,num2);
        
    // };
    int num3;
    for(;num3=0, num3<10;num3++){
        printf("%d\n",num3);
    };

    int num3;
    for(;num3=0, num3<10;){
        printf("%d\n",num3);
        num3++;
    };
   


// note-point: apn apna pura program bhi ek LOOP k andar likh skteh hai, takki voh program chalta hi rhe.
// thus toh kabhi bhi apnko koi kaam(there may be updation also) baar-baar krvana hai then phir vaha pe apn LOOPS-BLOCK ka use krteh hai:
//  while( Condition-Statement ){ Work-BOX}
//  do{ Work-BOX} while( Condition-Statement )
//  for( Special-Statement ){ Work-BOX}

    return 0;
}
//## NOTE:TIP 
// hamesa 2 tarike se kisi bhi CONCEPT ko build krna chahiyeh:
// 1.voh kaam kaise krta hai mtlb voh cheez kaise hoti hai.
// 2. uska use apnko kab or kha krna chahiyeh ya karenge.  
// mtlb yeh doo bateh importantly note krni chahiyeh.
// LOOP-block meh apnko semi-colon lagane ki jarurat hai. otherwise apnko error show hoga.

// note: typeconversion is a automatic typecasting done by compiler.
// jaise we we divide int/int then we get answer as int-only but actually meh voh toh koi float bhi ho skta hai, but apnko answer as a int hi milega thus isi cheez ko automatic-typecasting bolteh hai mltb typeconversion bolteh hai.


// Tip : thus toh apn apne pure program ko ek loop meh likh skteh hai jisse ki voh apna program baar baar chalta rhe. Toh esse apni program exit hone wali problem solve hojayegi


// Apn while-loop ka use apn mostly tb krteh hai jb apnko koi updation krne ki need ha ho. As apn update bhi kr skteh hai work-box meh.

// And do while ka use apn tb krteh hai jb apnko koi ek kaam toh krna hi krna hai

// And for ka use apn tb krteh hai jb apbko koi updation bhi krna ho..