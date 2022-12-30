// AS NOW YAHA pe apn Array-ADT dekhenge...
// as sbse phle apn ADT(Abstract-Datatype) ko define kare toh ADT ka simple hota hai ki "data-structure(mtlb memory-structure) + some-dedicated-fns-for-this-memory-structure", as and atlast sahi se boleh toh ADT mtlb class hi hota hai jismeh apna data-structure-implementation toh privated hoti hai and uss memory-strucuture k dedicated-fns publiced hoteh hai. and yeh functions isiliy hi hoteh hai ki apn fully-on-full uss memory-strucutre ko enn functions se control kr payeh. mtlb apn actual memory-strucuture ko touch bhi nhi krna chahteh, as sab kaam apn unn functions se hi krenge. thus toh yahi eski ko ADT bola jata hai and aseh dekhe toh ADT kafi acchi and mast cheez hai, as mtlb apn sara kaam dedicated-fns se kr skteh hai and actual-implemented memory-strucuture ko apnko touch bhi nhi krna hota. thus toh mtlb actual-implemented or allocated memory-structure bhi safe rheta hai and apn apna sara kaam bhi kr leteh hai..

// Thus toh now aab apn "array-ADT" ko bhi define kr skteh hai.. thus "array-ADT" mtlb array-memory-structure + array-handling-dedicated-fns.

// as basically and actually boleh toh apn YAHA pe apn array-memory-structure pe diff-diff operations krna dekhenge , sikhenge ki apn kaise yeh aseh aseh operations kr skteh hai. and then apn enn operations k functions bana denge..

// and more-notepoint:- ki array-memory-structure toh sbhi languages by-default provide krti hi hai. as yaha provide krne ka mtlb hai ki apnko khud ko array-memory-strucuture memory meh implement nhi krna pdta, bas just apnko simple ek code-line likhni hai and apna array-memory-strucuture memory-meh ban jayega, or simply in-short boleh toh array( array-memory-structure) memory meh allocate hojayega. as Linked-list , stack , queues , tree , etc.etc. memory-strucutures languages by-default provide nhi krti mtlb esseh nhi hoga ki apn ek code-line likhenge and apni linked-list memory-meh ban jayegi , or jaise ek code-line likhne se tree-memory-strucuture banajayega.. etc..etc. nhi hota hai q ki yeh data-structures languages provide nhi krti, as toh eske liyeh 2-cheeze hai:
//  1st-one: ki apn kisi external-library (as like jaise Stl or any-other) ka use kr skteh hai mtlb uss library ko apne program meh include krke simply unn bane-banayeh memory-strucutures or sahi se boleh toh ADT ko bhiii use kr skteh hai.
// and 
// 2nd-one: ki apnko khud ko yeh esseh memory-strucutures banane hoteh hai and yeh memory-strucuture apn "structures" and "classes" ka use krke mtlb ensehh bana skteh hai mtlb banateh hi hai. thus toh apn phle apne memory-strucuture ko design krenge and then by structure or class-declaring code se uss memory-structure ko memory meh allocate kr leteh hai.

// note-point: as upar apnne kaha ki array-memory-strucuture languages by-default provide krti hai, but voh array-dedicated functions nhi provide krti, thus toh aab apn YAHA vohi functions or operations krna dekhenge and sikhenge.. 

// LIst-of-Operations jo apn dekhenge and sikkhenge... (as esseh toh apnko operations krna and banana aata hai but phir bhi kahi doubt hoga toh ek-baar recheck krenge.. and then confirm krke apne concepts and appproach ko pack-to-pack krenge..)

/*
    1.display-operation k liyeh display()-fn  (mtlb array k sbhi elements ko display krna on the screen)
    2.append-opearation k liyeh Add() or Append()-fn (mtlb array k end meh extra element add krna . as where append mtlb adding-at-last)
    3.Insert-operation k liyeh insert(index)-fn (mtlb array k bich meh at inputed-index pe extra se koi orr element insert krna)
    4.delete-operation k liyeh delete(index)-fn (mtlb array meh koi particular index pe se element ko delete krna)
    5.search-operation k liyeh search( value )-fn (mtlb array meh kisi inputed-value k liyeh search krna ki yeh element array meh present hai ya nhi hai and agr hai toh kaha konse index pe present hai.)
    6.get-operation k liyeh get( index )-fn (mtlb array meh inputed index pe element present hai usko get krna)
    7.set-operation k liyeh set( index , vaue)-fn (mtl array meh inputed-index pe inputed-value ko set krna)
    8.max and min-operatin k liyeh max()-fn and min()-fn (mtlb array meh se maximum and minimum element-value find-out krna ki mtlb voh hai ya nhi hai and agr hai toh kaha pr hai mtlb konse index pr hai..)
    9.reverse-opearation k liyeh reverse()-fn ( as mtlb array ko reverse krna mtlb ki jaise 1st-element ko last-element kr dena , 2nd-element ko 2nd-last-element kr dena as like this.....)
    10.shift or rotate-operation k liyeh rotate()-fn (mtlb array ko rotate krna .. as yeh apn phle bhi kr chuke and apn esko aage acche se dekhenge...)
    11. and more opeartions ... jo ki apnko ds-problems meh dekhne ko milengeee..

    // as array-data-strucutures k questions meh bhi mostly esseh array pe diff-diff operations implement krna hi pucha jata hai... and baki data-strucutres pe questions meh bhi yahi hota hai ki apnko mostly particular data-strucutures diff-diff operations implement krna hi pucha jata hai.. thus toh enn questions ko solve krne k liyeh apnko data-strucuture (mtlb memory-structure) ka memory meh actual structure dikhana chahiyeh mtlb visulize hona chahiyehh and logic mtlb krne ka tarika hona chahiyeh and apn enn questions ko easily and acchce se solve kr sktehh hai.. 
    // as apn phir baad meh enn operations ko analize bhi krenge for the time-complexities , space-complexities and kuch other cheezo k liyeh bhi.
    
    */

// As now array-pe Operations se phle apn  array-memory-strcuture ko implement mtlb memory meh allocate kr leteh hai. and saat meh ess memory-structure ki kuch properties( mtlb ess memory-structure ki kuch baateh jaise eski size kya hai, eski length kya hai , or bhi koi jaruri cheez jo apnko operations apply krne k liyeh chahiyeh hogi) bhi mention krenge.. as yeh properties bhi kafi important for applying or designing Operation-logics.

// so now Allocating the "array":-
// int A[size]; 
// or apn heap-memory meh bhi allocate kr skteh hai.. as like this: jo ki apn janteh hi hai...
// int * p;
// p = new int[size];

// property1:- Size-of-array.
// property2:- Length-of-array. as length-of-array mtlb kitne no.-of-elements array meh filled hai.


// AS and now aab apn Operations krenge mtlb banayenge..

// Thus toh overall "ADT" meh memory-structure-allocation , memory-structure-properties and Operation-fns on that memory-structures hoteh hai.  as like this:- in class32

// as apn ADT ess tarah banateh hai mtlb apn memory-structure-implementation and memory-structure-properties ko phle ek structure or union meh code krteh hai, define krteh hai. And ya apn directly "class" bana rahe hai then tab apn unko privately define kr deteh hai..