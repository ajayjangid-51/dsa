/* 🌟 Polymorphism 🌟 */
// AS YAHA pe apn Polymorphism k bareh meh dekhenge:
// 🎆 as polymorphism ek event , ek view hai jaha mtlb ek cheez diff conditions pe diff-tarah se behave krti hai. as mtlb jaha ek cheez k hi diff avatar hoteh hai , roop hoteh hai. as jaise apn bolteh hai na ki yeh car robot-man ban jati hai , aeroplanne bhi ban jati hai. as mtlb jab yeh car , car se robot --> robot se aeroplane , aeroplane se robot banti hai then vaha apn simply and shortly bolteh hai and bola jata hai ki ooh "polymorphism" ho raha haiii.
// As polymorphism simply mtlb ki ek naam se diffrent-cheezo ka hona ya ek cheez k kaee diff roop hona.

// 🎆 As toh CPP meh polymorphism supported hai, but jaise C meh polymorphism supported nhi hai.. Toh yeh bhi C++ ko mast banati hai... Compile-time polymorphism mtlb  voh polymorphism jo apnko mtlb compiler ko compile-time pe dikhta haii ya mtlb compile-time pe hota hai, and runtime polymorphism joki runtime pe hota hai. jaise overload-fns or overload-operators compile-time pe resolve hoteh hai , mtlb compilation-time pe hi compiler  overload-fn polymorphism ko shoot kr leta hai, and actual form ko compile kr deta hai.. And runtime polymorphism running - time pe shoot hoti hai mtlb polymorphism meh actual - that - time form shoot ho jati hai..🎆

// and Polymorphism bhi OOPS ka hi part hai. mtlb yeh polymorphism OOPS meh hi define hoti hai , otherwise yeh define nhi hoti ,as simply khne ka mtlb hai ki apn esseh override-fn , overload-operators and virtual-functions ka use nhi kr skteh , mtlb unheh define hi nhi kr skteh.

// AS polymorphism OOPS ka feature hi hai , as mtlb polymorphism feature hai isiliy hi apn function-overloading kr skteh hai , opeartor-overloading kr skteh hai , and function-overriding kr skteh hai. as mtlb enn sab featurers ka hona hi mtlb polymorphism hona.

// polymorphism:
//  1.compiletime-polymorphism or early-binding or static-binding in terms of code jo ki compiled-program meh bind hota hai as toh early-binding mtlb jldi binding mtlb comipletime pe hi binding hona. (function-overloading and operator-overloading) (as mtlb apna function-overloading(mtlb overload-functions define krna) krna and operator-overloading krna hi compiletime-polymorphism krna hota hai. as q ki yeh polymorphism compile time pe hoti hai. mtlb compilation time pe pata chalta hai ki accha yeh function yaha pe yeh esseh act kr raha hai and yaha pe esseh act kr raha hai.) as mtlb compile-time-polymorphism ki vajah se apna jo program banta hai usmeh function-ki-exact vahi form set hoti hai , bind ho jata hai or mtlb fetch hoti hai..
//      1.function-overloading (mtlb ek naam se different-fn banana mtlb unn functions return-datatype , paramaters-datatypes , no-of-parameters and function-defination sab kuch alg hota hai bas function-name same hota hai thus asee ess tarah functions ko define krne ko hi function-overloading krna khteh hai and yahi cheez ko polymorphism krna ya hona khteh hai , as yeh compiletime-polymorphism hai mtlb yeh functions-compiletime pe hi resolve ho jateh hai and phir compile kr diyeh jateh hai , q ki voh function-call se pata chal jata hai ki konsa overload-functions meh se konsa function call hone wala hai.)
// as jab koi ek cheez diff-diff tarah se act krti hai at diff-diff situation pe, then uss process ko polymorphism hona khateh hai.

//      2.Operator-overloading  ( mtlb jab ek operator diff situation pe , diff jagah pe diff tarah se act krta hai , kaam krta hai usko operator-polymorphism bolteh hai jaise: apn "+"-opeator ko jab two-interger-operands k bich meh rkhteh then voh voh 2-intergers ko add kr deta hai and jab apn "+"-opeartor ko two-strings k bich rkh deteh hai then voh two-strings ko concatenate mtlb jodd deta hai.)

//  2.runtime-polymorphism or late-binding (functions-overriding) (as derived-class meh uski base-class k member-function ko hi exactly same as it is with-diff defination define krna hi functions-overiding krna hota hai.  ) (as toh voh ek function diff tarah se act krta hai at diff situation and esi koi hi runtime-polymorphism bolteh hai q ki yeh polymorphism runtime pe hoti hai thus mtlb compiled-program meh yeh polymorsphism hota hai mtlb yeh polymorphism runtime pe shoot hoti hai. as mtlb simply khehne ka mtlb hai ki yeh polymorphism compilation meh shoor nhi ki jati ya hoti hi nhi.)

// 🎆 As toh aab apni marji hai ki apn kya krvana chahteh hai, mtlb situation according jo apnko sahi lage uss cheez ko apn choose krenge. jaise compiletime-polymorphism se compilation-time thoda jada jata hai and runtime-polymorphism ki vajah se runtime thoda jada ho jata hai. 🎆
//📓1-note-point: As overidden-functions pointer-type k according call hoteh hai.
// 🎆  AS now aab apn aage wale classes meh ess runtime-polymorphism k bareh meh hi dekhenge mtlb polymorphism ko acche se explore krenge ki runtime-polymorphism kaise hota hai, mtlb kaise krvaya jata hai. as runtime-polymorphism  function-overiding or mtlb virtual-functions ki madad se krvaya jata hai. mtlb apnko overridden-function pe virtual-keyword specify kr hota hai.🎆
// and enn sab se phle alpn pointer-to-derived-class k concept ko samajenge ki derived-class ka jo pointer hota hai, voh kaise and kis tarah behave krta hai. and then phir apn virtual-functions dekhenge.

// 🔗🔗 Link: https://www.geeksforgeeks.org/polymorphism-in-c/

// Abstraction mtlb displaying only essential information and hiding the details. as toh Abstraction bhi OOPS ka feature hi hai.
// Encapsulation , as yeh bhi OOOPS ka feature hi hai.

// 🔔 re-visit-polymorsphism's operator-overloading: