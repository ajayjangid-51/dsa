//🔥💲🍕 AS now apn "Hashing" and "Hashing-Technique" k bareh meh dekhenge... 🍕💲🔥
// as toh "hashing" ka mtlb hota hai ki:- https://www.shabdkosh.com/search-dictionary?lc=hi&sl=en&tl=hi&e=hash.
// and Now aab "Hashing-Technique" dekhenge mtlb "Hashing" ko krne ki Technique dekhenge..

// Okay..toh now yaha pe apn:-
// 1.why hashing is need
// 1.Ideal-hash-function and its drawbacks then its solution (which is actually "Modulus-hash-function")
// 2.modulus-hash-function and its drawbacks then solutions of its drawbacks of or mtlb improvements in "modulus-hash-function"

// "why-Hashing:-"
// as jaise abhi tk apnne "searching" krna dekha hai and "Searching" krne k 2-Methods hai:
// 1st:- "Linear-Searching" and 2nd:- "Binary-Searching". and apn agr enki time-complexities dekhe toh 1st-method ki toh O(n) hai and 2nd-method ki O(logn) hai.now baat hai ki "Searching" jo ki bohat matterable cheez hai , jaise mtlb apn google pe kuch bhi search krteh hai ki yeh expect krteh hai ki apnko apna "Search" kiya huaa cheez mil jayehh and phir usseh bhi jadaa yeh expect krtehh hai ki apnko apna "Search-Result" ek-dam jldi se mil jayehh, and as agr apnko apna "Search-result" jldi se nhi milta hai toh mtlb apna "Searching" krna bekar hai.. q ki apn search jab krtehh hai jab apnko immediately uss cheez ki jarurat ho.  thus toh overall yeh hai ki apni "Searching"-process fast honi chahiyehh.. mtlb as much as possible jitni fast ho skti hai , voh utni honi chahiyehh... mtlb boleh toh apni Searching O(1)-time meh honi chahiyehh..
// Thus toh eske liyeh phir "Hashing" krne ka idea aaya... as toh mtlb apn "Hashing" se apni "Searching" ek-dam as-possible-as fast kr sktehh hai.
// thus toh mtlb Hashing is used for fast  searching.. as toh mtlb apn hashing krke phir ek-dam fastly mtlb constant-time meh search kr sktehh hai..

// 🍧hashing-is-fastest-searching-method🍧

// thus now aab apn simply step-wise "Hashing-Idea" dekhenge mtlb "Hashing-Technique" dekhenge ki apn yeh kya and kaise yeh kaam kr sktehh hai.

// 🌟:- And thus toh eska idea yeh hai ki apnko simply ek alg se array-lena and usmeh apnko elements ki jo value hai uss index=value pe store krna hai mtlb vaha uss index pe 1-mark kr dena hai... Thus toh mtlb jab bhi apn phir search krenege toh voh search - function simply index = inputed - search - value ko check karega ki voh index pe value kya hai..as agr voh 1 - hogi toh mtlb voh apnoo yes - it - is - present kr dega and otherwise voh apnko "no" retunr krdega....
// Now yaha esko dekh apn note kr sktehh hai , mtlb apn index=value pe true-or-false kr rhe hai, thus toh mtlb aab "element-value" toh  100 , 200 , 10000 etc..etc kuch bhi jo skti hai. Thus toh esa mtlb apnko phir utni badi size ka array-lena hoga.. as simply mtlb ki apnko (maximum-element+1)-size ka array lena hoga.. tab phir apn easily apna yeh idea se apna kaam krpayenge...

// Thus toh now aab apn samaj skteehh hai ki yeh tarika toh mtlb phir sahi nhi hai.. mtlb eska drawback yeh hai ki agr original-array ki size toh "4" ho and usmeh kisi ek element ki value 10K ho.. thus mtlb apbko toh phir 10K-size ka array lena hoga... Thus mtlb phir yeh tarike meh toh apni bohat-bohat space-waste ho rhi hai...
// As toh now aab apn esmeh kuch koi improvement ho skta hai voh dekhnege....
// Okay...now aab kuch solutions mtlb improvement dekhnege jisseh apna itna sara-space-waste na ho.. and apna kaam bhi hojayeh mtlb apni fastest-searching bhi hojayehh...

// Now apn ekk baat notice kre toh apnne upar-hi-upar bola tha ki apnko index=element-value pe true-false marking krna hai... Toh mtlb yaha pe apn ek formula follow kr rhe hai mtlb ek function-ko-follow kr rhe hai jo apnko element-value input krne pr apnko index-return krta hai...
// 🎵🎵🎵  see audio-1 :- 🎵🎵🎵
// And Function essaa hai:-
/*
Index = fn(element-value){
Return element-value;
}

or:- mathematically apn esseh bhi bol sktehh hai:-
F(x) = x;
where input-parameter is element and output is index-at-which-we-have-to-store.

//🔔🔔 And Function ko apn simply ideal- hash- function bolteh hai. 🔔🔔 
// As esko ideal apn isliy bol rhe hai q ki ess function k according agr apn hash-table meh marking and searching krtehh hai then apnko dono meh constant time hi lgne wala hai...
// Mtlb ess function meh kuch additional-statements mtlb kuch additional-working nhi hoti hai...and eski vajah se apni Searching ki time-complexity exactly O(1) ho rhi hai..

//📔📔Note-point:- And this is one-to-one function according to relation. Mtlb diff inputed-values k liyeh jo return-value hogi voh diff hi hogi...
//📔📔Note-point:- And many-to-one Function voh hota hai jo different-inputed value k liyeh same-value-return kr skta hai...

// 🌟🌟As toh overall boleh toh hash-function hi responsible hai for space-consumption,thus toh apn hash-function kohi badalenge... 🌟🌟
*/

//🔔🔔
// Thus toh improvement-idea hai:- "modulus-Hash-Function", mtlb ess function k  according array meh marking krenge... Mtlb yeh function jo apnko "index" dega for inputed-value uss index-pe apn marking krenge...  🔔🔔
/*
Thus toh voh function(mtlb modulus-hash-function) yeh hai:-

Index =modulusHfn(element-value){
   Return (element-value%10)
}

or:- mathematically apn esseh bhi bol sktehh hai:-
F(x) = (x%10);
where input-parameter is element and output is index-at-which-we-have-to-store.

//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️

//🌟🌟🌟  as toh overall importanly apn yeh bol sktehh hai ki yeh hai apna.."modulus-hash-function" .. as ess hash-function k according apnko hash-table-of-size-10 hi chahiyeh... Thus toh aab mtlb apni searching bhi fast hai and apna space-consumption bhi kafi kaam  hogaya hai...  :- 🌟🌟🌟


//🔔🔔 And but as now now thoda orr acche se dekhe toh mtlb jaise apn 25-as input ess modular-hash-function meh input kare toh yeh apnko index-5 return kr raha hai and apn phir hash-table ko dekhe toh vaha index-5 pe toh phle se element present hai.. toh mtlb aab apn vaha store ya mtlb marking kaise kre as vaha toh already marking ki huee hai... Thus toh mtlb apn aab toh kuch kr hi nhi sktehh hai.. thus toh yeh esska "drawback" hai. And ess "sare-drawbacking-phenomenon" ko "collision" hona khtehh hai.. 
// //🎵🎵🎵  see audio-3 :- 🎵🎵🎵
//🖼️🖼️🖼️  see pic-2 :- 🖼️🖼️🖼️ 🔔🔔
// Thus mtlb jab many-keys kisi ek index pe map kr di jati hai..usko apn "collision-of-keys" on that index hona boltehh hai..
// And yeh kaam "many-to-one" function meh hota hai... Thus toh overall baat yeh hai ki "modulus-function" many-to-one function hai and apnko hash-function as a "many-to-one" nhi "one-to-one" chahiyeh tabhi apna kaam sahi se hoga...
*/

//🔔🔔 "mathematical-model" mtlb kisi cheez ko mathematically define krne k liyeb ek simply phle model-banana phir uske according mathematical-functions define krlena.. As mtlb ki yeh jo upar apnne hash-Functions define kiyeh hai na voh ess mathematical-k-according hi kiyehh hai:-

// for Mathematical-model-for-hashing:- 🔗 see pic1 🔗 🔔🔔

//🔔🔔 Intro-to "Hash-Table" : //🎵🎵🎵  see audio-2 :- 🎵🎵🎵  🔔🔔

//🔔🔔 Analyizing-allover-conclusion about hash-function
//🎵🎵🎵  see audio-4 :- 🎵🎵🎵  🔔🔔

//💲🍕 Solution of hashing-function( "modulus-of-hash-Function") 🍕💲
//🎵🎵🎵  see audio-5 :- 🎵🎵🎵
// and now

//🌟🌟🌟  //🖼️🖼️🖼️  see pic-3 :- 🖼️🖼️🖼️
//🎵🎵🎵  see audio-6 :- 🎵🎵🎵  :- 🌟🌟🌟
//🔔🔔 Okay toh now aab aage-classes meh apn simply one-by-one een Collision-Resolving-Techinques k bareh meh hi dekhenge... 🔔🔔

// As Hashing  ka use searching k liyeh hota hai and esseh searching bohat fast hoti.hai. as but hashing ka ek hi drawback hai ki hashing-method meh space-consumption bohat hota hai....
// But esske liyeh bhi apne pass kuch techniques hai jisseh apn hashing ki space-complexity ko accha kr skteh hai mtlb kaam kr skteh hai...
//👿📔imp-Note-point:-as Hashing and Huffman-Coding dono diff-diff cheeze hai.
