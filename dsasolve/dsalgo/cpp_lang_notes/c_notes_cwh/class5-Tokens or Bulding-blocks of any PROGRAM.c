// YAHA pe apn PROGRAM k building-blocks(tokens) k bareh meh dekhenge mtlb basically program meh kya kya cheeze hoti hai ya ek PROGRAM kin kin cheezo se mil kr bana hota hai:  

// ek program meh Constants , Variables , Identifiers( or "names" names given to variable,constants, functions etc...) , String-literl , Keywords , Symbols etc..etc.. hoteh hai and voh Program enn se mil kr bana hota hai:

/* Defining these upper Blocks of a Program:
    1.Constants: (jinki value ko program meh kahi orr vapis se update(mtlb change) nhi kiya ja skta)
    2.Variables: (jinki value ko program meh kahi bhi vapis se update(mtlb change) kiya ja skta hai)
    3.String-litrl: (mtlb ek chote ya bda sentance)
IMP-NOTE-point: and yeh Variables , Constants , String-litrls , ek container ki tarah hoteh hai jinmeh data dali and store ki jati hai.


    4.Identifiers: (simply names mtlb jo bhi names given hoteh hai kisi variable, constants , function etc ko unko names ko apn Identifiers bolteh hai)

    // 4.Keywords: (keywords are the reserved-words jo ki kisi ek cheez ko and uske ek kaam ko specify krne k liyeh use hoteh hai (where kaam ko specify krne ka mtlb uss ess keyword ko dekh kr koi particular setted kaam ho jayega ) jaise do-keyword se do-loop specify hota hai and thus uski working chal jati hai ya ho jati hai, int-keyword integer-datatype ko specify krne k liyeh use hota hai , and char-keyword character-datatype ko specify krne k liyeh use hota hai and return-keyword function ki return-value-ko-specify krne k liyeh use hota hai and etc..etc..
    // and note-point: enn keywords ko apn use nhi kr skteh in naming of our variable-name , constant-name , string-name , array-name , function-name , etc-name .) 
    //  C-language meh 32-keywords hai and java meh 51-keywords hai and may different for different languages: Keywords in C-Language are:
    // datatyped-Container-keywords: (voh keywords jo container ko specify krteh and saat hi saat uske andar k data k datatype ko bhi specify krteh hai), are:
        1.int(signed and unsigned)
        2.char(signed and unsigned) 
        3.double
        4.float
        5.short(signed and unsigned)
        6.long( datatype ko long-datatyped-container specify krne k liyeh)
        6.long int(signed and unsigned) ,
    other-keywords 
     7.auto , return, struct , break , else( conditional ko specify and for compiler k liyeh specify and thus compiler will activate it) ,  switch , case , enum , register , typedef ,extern , for(for-loop ko specify and activate krne k liyeh), unsigned  , void , volatile , while(while-loop ko specify and activate krne k liyeh) , if  , static , do(do-loop ko specify krne k liyeh ya do-loop ko activate krne k liyeh) , goto , sizeof , default , union, signed , continue . 

    //  5. Symbols(or Operators) (jaise %d , &a)
*/

// program k sbhi elemental-part ko tokens kha jata hai jaise: {} , [] , ; , printf , etcc....
// note-point: C-PROGRAM meh har statement terminate kiya jata hai by semi-colon(;) and C-program meh hr statement(mtlb code-line) terminate krna jaruri hai by semi-colon(;) otherwise phir apnko error show hogi bcoz sbhi statments ek hi statement consider hogi and voh toh koi syntax nhi hai isiliy we get error.

// NOTES to be noted regarding C-LANGUAGE:
// note-point: C-languaged-Program meh whitespaces matter nhi krti.
// note-point: C-languaged-Program meh tokens k bich kaam se kaam ek whitespace toh hona hi chahiyeh but yeh hr jagah jaruri nhi hai and voh apn apne aap hi samaj jaynege:.
// note-point: C-language ek case-sensitive Language hai mtlb jaise koi identifier hai aju and Aju then yeh dono alag-alag consider hoteh hai.