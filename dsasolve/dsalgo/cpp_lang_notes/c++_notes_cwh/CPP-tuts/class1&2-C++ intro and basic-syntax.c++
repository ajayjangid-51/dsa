// NOW YAHA pe apn C++ Language se programming-krna( mtlb Program banana) sikhenge:
// as yeh course meh apn complete C++ sikhenge , and ess course meh repetative-stuff nhi hai mtlb yeh course sari cheeze hi importantly apnko focus krni hai mtlb acche se dekhni hai.
// and C++ se program banana mtlb C++ syntax se program banana kafi enjoyable and mastam hoga and overall apni samaj ek dam mast badhegi. and as enn tuts meh apn orr bhi kafi sari new-new bateh bhi sikhenge.
// and apki baar apn C++ language k bohat sare questions , exercise and many more bohat kuch mtlb mostly sab kuch saat-saat meh explore bhi karenge.

// C++ 1979 meh bani thi, by as yeh language kafi purani hai but ess language k reguraly updates aayeh hai mtlb ess language meh reguraly and continusly thode-thode new features add kiyeh gayeh hai and aaj yeh laguage ek bohat mastam language hai, as C++ language meh major changes mtlb major features actually 2011(mtlb C++ 11) , 2014 and 2017 (C++ 17) meh huee the .. thus toh apn enn newly added Features ko aage dekhenge ki yeh features kaise hai and kya hai.
// as language ka update aana mtlb uss lanauge meh aurr jada features ka add hona mtlb orr jada functionality ka add hona, as toh mtlb apn uss programming-language se aur jada kuch alag kaam kr skteh hai mtlb automate kr skteh hai. as new features ka add hona mtlb uss feature ka machine-level-code hona .
// thus toh language k updates jaana and apply krna ek mast cheez hai bcoz yeh cheez krke apn new -tarike , teachonologies ko samaj skteh hai and use kr skteh and baki programmers se alag mtlb advance ho skteh hai. thus toh mtlb apnko apni langauges k update new-features sikhteh rhene hai , takki apn orr acchi coding and programming kr sake.

// as C++ Language Hardware k kafi najdeek hai as like as C-language, (where najdeek hone se mtlb hai ki jaise other language jaise python ..orr etc jinke kuch mediators-functions ki functionality hoti hai before the hardware as but C++ meh mediators-functions nhi hoteh hai , as tabbhi esse bola jata hai ki C++ langugae hardware k kafi najdeek hai.

// and apn C++ Programming IDE meh hi krenge , bcoz IDE se apn kafi fastly code likh skteh hai , easy to view hota hai and IDE apnko kafi madad bhi krti hai code yaad dilane meh.

// Now apn Kuch Steps-dekhenge mtlb follow krenge ess course ko start krne se phle .
// STEP1: install Vs-code
// STEP2: install G++ ( as this is C++ program compiler jo ki C++ language-code ko machine-level-instructions mtlb 0 and 1 meh convert krta hai. mtlb .exe file bana deta hai as mtlb uss .exe-file meh binary-code mtlb machine-level-code hi hota hai.) as after installing this copy the minGW>> bin path to the paths. takki apn uss folder meh files ko directly access kr ske.
// STEP3: install C/C++ extenstion in Vs-code
// STEP4: writing a simply-short Hello-world program:

#include <iostream>
// as C++ programming meh apn ess tarah files ko import krteh hai. as like this:
// #include <file-name-to-be-imported>
// as toh apnne yaha iostream-header-file or module-file import ki hai , jiske functions ka apn use krke apn print krva skteh hai , user se input le skteh hai and orr bhi kafi sare kaam just shortly kr skteh hai.

// as like as C-program apnko C++ programs ko bhi int main()-fn meh hi likhna hota hai, as bcoz C++ compiler directly and exactly and sbse phle ess function ko access krta hai and phir eske according jin cheezo ko access and compile krna hai unko compile krta hai. thus toh esseh main()-fn k according baki cheezo ko access krna ek accha kaam ho jata hai q ki vaha phir apne compiler ko koi faltu code ko apnne esseh hi likh diya tha , voh access nhi hota. as jaise ki apnne apn janteh hai ki C++ meh intermediaters kafi kaam hai ya nhi hoteh hai , as toh sab kaam apnko hi krna hota hai , as jaise python , JavaScript meh apnko esseh nhi krna hota hai , as bcoz python, JavaScript k liyeh intermediater hoteh hai jo ki uss python code ko phle esseh koi main()-fn meh daalteh hai and phir baad meh voh aage compilation hota hai, thus toh C++ Programming meh most of sare kaam apnko hi krne hoteh hai , as yeh kafi acchi baat hai bcoz esseh koi intermediators nhi hoteh hai , thus toh apna program very fastly execute ho jata hai.

// using namespace std;
int main()
{
    // as yaha pe apnne std:: likha hai , whereas yeh std:: ek keyword hai jo ki yeh specify krta hai ki apn included-file k functions ko use kr rhe hai , as bcoz enn same naame se apn apne khud k functions bhi bana skteh hai isiliy apn agr apnko included-file k functions ko use krna hai then toh apnko uss included-file k function k phle ess keyword se specify krna hoga ki yeh function uss header-file ka hai , and yeh cheez , mtlb yeh kaam krne ka ek aur tarika bhi hai, jo apn baad meh dekhenge.
    std::cout << "Hello World how is the josh";
    // as yaha yeh cout-fn uss header-file ka function hi hai.
    // as apn yeh "std::" -keyword uss iostream-header-file ko specify krne k liyeh laga rhe hai , and ess esseh keyword ko jo ko header-file ko specify krne k liyeh use kiya jata hai usseh simply "namespace"-bolteh hai.

    // Note:💡 as C++ meh white-spaces matter nhi krti.

    // Note-point-2💡: as C++ programming meh apn function k andar function define nhi kr skteh hai , whereas apn JavaScript meh toh kr skteh hai , jaise C++ , C , Java meh nhi kr skteh hai. as toh isliy C++ , C , java Programming meh apn function phle function fn k bahar define krteh hai , and then as per need kisi bhi function meh call krke usseh kr leteh hai.

    // Note-3 💡: as C++ programming meh as like C and Java-Programming apnko har statement k baad semi-colon lagana hota hai, otherwise apnko error milti hai. as sirf Statement k baad hi semi-colon lagana jaruri hai , mtlb work-box jaise conditionals , loops , functions k end meh semi-colon nhi lagana hota. and phir ek baar semi-colon lagane k baad apn uske just-aage dusri-koi-othere-statement likh skteh hai , as but apn mostly nhi krteh hai , bcoz apnko apne programm ko readable banana hota hai.
    // jaise::
    std::cout << "Hello World how is the josh";
    return 1;
    // NOte-4 💡: where yaha return-value "0" means ki switch off the program.
}

// best-baateh of C++ Programming:
// 1. AS simply boleh toh C++ language , C -Language ko hi extend kr krke banaee gayi hai , mtlb C-Language meh object-oriented nhi thi , thus toh now C++ Object-oriented hai , mtlb hr variable-container k liyeh ek dedicated Object- bana jismeh uss particular datatype variable k liyeh kafi sare functions , propeties(key-value pairs) hoteh hai.
// 2. C++ programming se banayeh gayeh programs fast hoteh hai , and C++ lanauage se apn memory-management for our program khud se kr skteh hai , as yeh ek bohat mastam baat hai , as bcoz yeh memory-management wala kaam apn python , JavaScript jaisi language meh nhi kr skteh hai. as isiliiy web-backend-development meh apnko agr fast and powerfull programs likhne hoteh hai toh voh apn phir easily C++ meh likh skteh hai.