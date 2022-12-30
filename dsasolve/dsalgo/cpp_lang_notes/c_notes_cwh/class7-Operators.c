// OPERATORS:
// YAHA pe apn OPERATORS k bareh meh dekhenge:
//  mtlb operators kya hoteh hai, operators kis kis type k hoteh hai. and etc..etc...

// Operator:
// operator mtlb simply voh cheez jo kinhi two cheezo(operands) ka kuch operation krta ho, jaise: addition-operation of 2 and 5 is done by + Operator( like this: 2+3) , muliplication-operation etc.. thus programming meh yeh operators hi kinhi bhi two-cheezo pe diff-diff Operation krteh hai. toh thus enhi operators ki help se kinhi two-cheez pe desired operation karaya jata hai.
// notice: Operator k lhs and rhs meh present cheezo ko ya voh cheeze jinpe operator koi operation kr rha hai unn cheezo ko simply "operand" kha jata hai. jaise 2+3 then yaha pe 2 and 3 are operands for this + operator.
// now abb alg-alg operation krne k liyeh alag-alag Operators hoteh hai: (diff-types of Operator)
// as yeh sure hai ki operator ki return and pass value hoti hi hai.

/*  TYPES OF Operators:
    1.Arithematic-Operator (voh operators jo Arithematic operation krteh hai) and enki return-value operands ka arithematic-result hota hai. 
            1. + Operator  (yeh operator operands ka addition-operation krta hai)
            2. - Operator  (yeh operator operands ka substraction-operation krta hai)
            3. * Operator  (yeh operator operands ka multiply-operation krta hai)
            4. / Operator  (yeh operator operands ka division-operation krta hai)
            5. % Operator (yeh operator operands ko remainder deta hai)
    note:thus toh programming meh apnko kabhi bhi kinhi doo-cheezo pe Arithematic-operation karana hai then vaha apn simply enn Arithematic-operators ka use krenge. */
    
#include<stdio.h>
int main()
{
    int a,b;
    a = 3;
    b = 5;
    // c = a+b;
    // printf("%d",c);
    printf(" the sum of a + b is %d \n", a+b);
    // printf("symbol for any value so that in place of symbol the value is placed or yaha symbol meh %d ki jagah input ki return-value aati hai" ,  input or value-which is for inplace of symbol.)
    printf(" the substraction of a - b is %d \n ", a-b);
    printf(" the multiply of a * b is %d \n", a*b);
    printf(" the division of a/b is %d \n", a/b);
    printf(" the remainder when a/b is %d \n", a%b);

    // for floating numbers: arithematic-operation between integer and floating values gives the results in floating-value only
    int c;
    float d;
    c=4;
    d= 10.312;
    printf("the addition of a and b is %f \n" , c+d);
    printf("the subtraction of a and b is %f \n" , c-d);
    printf("the multiplication of a and b is %f \n" , c*d);
    printf("the division of a and b is %f \n" , c/d);

    // printf("the remainder of a/b is %f \n" , c%d);
    // we cannot get remainder by dividing integer-value and float-value

   

/*
    2.Assignment or Storing or update Operator ( yeh operator cheezo ki value assign kra ne k liyeh use hoteh hai mtlb yeh operators cheezo(most containers) ki value assign kr deteh hai) and enki return-value mtlb in the return yeh assigned-value ko store kr dete hai in a particular container. 

    jaise a= 4; thus toh mtlb apnne yaha pe = assignment-operator use kiya hai and yeh operator ess 4 ko ess a-container meh store kr dega.
            1. = (yeh operator left-operand meh right-operand-meh-data ko left-operand-container meh assign kr deta hai.)
            2. += ()
            3. -=  (yeh operator left-operand meh se minus krta hai right-operand ko and phir in the return yeh return-value deta hai ya phir container k data ko update and assign
             kr deta hai.)( ya phir apn ase bhi bol skteh hai ki this means ki left-operand meh se -(minus) krna hai yeh right-operand) jaise: 2 -= 3 mtlb 2 meh se minus krdo yeh 3. so its return value will be -1, agr apn ne kisi conatainer k liyeh use kiya hai then in the return yeh operator uss container meh apni return value se update krdega, jaise: a -= 3  , thus yeh -= operator eska kaam krke in the return a-container meh data ko update krdega. 
            4. *=  (multiply by this )
            5. /=  (divide by this )  
            */
        

   /* 3.Bitwise-Operator (yeh operators phle decimal-numbers ko bit-code(mtlb binary-code) meh convert krke and phir unpe logical-operation(addition,subtraction, mutliply) krke unka binary-code banata hai and phir uss binary code ka decimal-number as a result return krteh hai and ya phir apn directly bit-code(binary-number) ka decimal number find out kr skteh hai)
            1. & operator (yeh AND-logical operation se operands ka binary-code banata hai)
            2. | operator (yeh OR-logical operation se operands ka binary-code banata hai)
            3. ^ operator (yeh XOR-logical means yeh exclusive or hai (mtle koi ek true or false hona chahiyeh agr dono hi 0 hai ya dono hi 1 hai then voh false hoga otherwise it is true) operation se operands ka binary-code banata hai )
            4. ~ (binary one's complement operator)
            5. << (binary left shift operator)
            6. >> (binary right shift operator) (note:point: enn 3 k bareh meh boolean algebra meh dekhenge.)
            
             */
int e,f;
e = 2;
f = 3;
printf(" the bit-code(or binary-number) of 2 AND 3 means not of 5 actually it is bitcode_of2 AND bitcode_of3 = %d \n ",e&f);
    printf(" the bit-code of 2 OR 3   = %d \n",e|f);
    printf(" the bit-code of 2 xnor 3   =%d \n",e^f);
    printf(" the decimal-number of 01 and 11   =%d \n",01&11); 
//     as bitwise-operator work like this:  01
//                                         +11
//                                          01 is answer

/*
    4.Comparison-Operator or Checking-Operator or Relational-Operator (voh operators jo operands ko compare krne k liyeh use hoteh hai , mtlb yeh operators operands ko compare krteh hai) and enki return-value true or false hotii  hai.
            1. ==  (yeh operator yeh check krne k liyeh use hota hai ki operands ek-dusre k equal hai k nhi, agr yeh hai then iski return/pass true hogi otherwise false hogi )
            2. !=  (yeh operator yeh check krne k liyeh use hota hai ki operands ek dusre k equal toh nhi hai na, thus toh agr nhi hai then its return/pass is true otherwise it is false)
            3. >  (yeh operator yeh check krne k liyeh use hota hai ki first operand is greater than second-operand hai k nhi, thus agr hai then it will pass/return or nhi hai then it will block)
            4. <  (yeh operator yeh check krne k liyeh use hota hai ki first operand is smaller than second-operand hai k nhi, thus agr hai then it will pass/return or nhi hai then it will block)
            5. >=  (yeh operator yeh check krne k liyeh use hota hai ki first operand is greater than or equal to  second-operand hai k nhi, thus agr hai then it will pass/return or nhi hai then it will block)
            6. <= (yeh operator yeh check krne k liyeh use hota hai ki first operand is smaller than or equal to second-operand hai k nhi, thus agr hai then it will pass/return or nhi hai then it will block)
            */

    printf(" is a and b are equal = %d \n ", a==b);
    printf(" is a and b are not equal   = %d \n", a!=b);
    printf(" is a is smaller than b   =%d \n", a<b);
    printf(" is a is greate than b   = %d \n", a>b);
    printf(" is a is smaller than or equal to b  = %d \n", a<=b);
    printf(" is a is greater than or equal to b   = %d \n", a>=b);
    // where 0 mtlb false and 1 mtlb true.

    /*5.Logical-Operator (yeh operators Logical-operation krne k liyeh use hoteh hai, mtlb yeh operators logical operation krteh hai) and enki return-value logical-true or logical-false hoti hai.
            1. && AND-operator ( as like as and-logic-Gate yeh operator doo-conditions ko saat meh check krne k liyeh use hota hai and thus agr dono condition true hogi tabbhi eski retrun/pass true hogi, otherwise baki sbhi conditions meh eski return/pass false hogi)
            2. || OR-operator ( as like as or-logic-Gate yeh operator doo-condition meh se koi bhi ek condition ko check krne k liyeh use hota hai, thus agr dono meh se koi bhi ek condition true hogi toh eski return/pass true hogi and agr dono condition hi false hai eski return/pass false hogi )
            3. ! NOT-operator (yeh true condition ko flase and false condition ko true kr deta hai)
     */
    printf(" is both a and b are non-zero = %d \n ", a&&b);
    printf(" is one of the a or b is non-zero = %d \n", a||b);
    printf(" the value of a is zero or non-zero   =%d \n", !a);
    printf(" the value of b is zero or non-zero note if it is zero then its is actually non-zero and vice versa smaller than b   =%d \n", !b);
    // in the terms value-of-any-variable its return value is 0 if its value is zero and its return value is 1 if its value is non-zero.


/*  #6.Miscellaneous-Operator (kuch special operator(mtlb yeh single operand pe hi kaam krteh hai) and kuch special Operation krteh hai.)
            1. sizeof()  (yeh operator inputed-variable ki size find krta hai and usee(size ko) return-krta hai mtlb architecture size of sub-memory-part) jaise: sizeof(int) , thus it will return size of int.
            2. &         (yeh operator jis bhi operand pe lga hota hai uska address find krta hai and in the return uss operand ka address hi return krta hai) jaise: &a (simply means address_of_a)
            3. *         (pointer to variable) ess operator ko apn pointers meh dekhegne.
            4. ?:       (Conditional expression) jaise: ?X:Y means if this is there ? then-X: otherwise Y  and ess operator ko apn conditional statements meh dekhenge.
*/

// IMP-POINT: Operators-working-order, jaise for 2+3-2*4/1 thus aab sbse phle konsa operator apna kaam krega voh apn operator-precedence.img image se consult krenge bcoz programming meh BODMAS-rule follow nhi hota hai.




 return 0;

}
// Visual-studio code extension: install CODE RUNNER(by jun Han), just click on extension button and search for CODE RUNNER then open it then install it and also enable it.
