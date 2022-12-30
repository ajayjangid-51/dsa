//p7: Abstract Classes - Polymorphism
/*
// as toh phle apn Cache-concept samjenge, and uska algorithm dekhenge.
// as sbse phle simply boleh toh Cache ek container hai jismeh data-key or mtlb simply data-values store hoti hai.
// cache-hit mtlb jab cache se uske bane kisi function se data request kiya jata hai then agr voh data cache meh present hota then mtlb uss kaam ko cache-hit hona khteh hai.
// cache-miss jab requested-data meh nhi milta hai toh uss kaam ko cache-miss hona khteh hai. thus toh jab cache-miss hota hai , then vaha apnko voh requested-element cache meh add krna hota hai and orderly-arrange bhi krna hota hai. and in cache-hit meh apnko sirf simply data ko recently-used-orderly meh arrange krna hota hai, thus toh aab apn yaha Cache-container banayenge and uske apn dedicated-function banayenge. as yaha Container ka mtlb yeh nhi ki sirf container jismeh apn data store kr skteh hai. as mtlb ki a container jiske dedicated-fns bhi hoteh hai jinseh apn uss container ko access , set etc etc sambhal skteh hai. as toh jab apnkok kabhi esseh koi cheez banani ho mtlb container+its-dedicated-fns then voh cheez apn class se banteh hai. as mtlb apn basically and simply data k liyeh ek memory-structure banateh hai and then uss memory-structure meh stored-data k liyeh dedicated-fns banteh hai. as yeh data-structure nhi hai as yeh data-structure se bani huyeh cheez hai. bascially mtlb yeh ek program hai jo ki esa kaam krta hai and ess program ka naam hai "cache"(cache-program).
// as data-structure toh simply ek memory-structure hota hai. jisko apn esseh ess tarah design krteh hai ki apn jo dedicated-fns banyenge unke k liyeh very comfortly , fastly , and efficiently ho stored-data ko use krna bcoz voh data ek acche mast soche-samaje data-structure mtlb memory-structure meh store kiyeh gayeh. as efficient , accha memory-structure w.r.t unn dedicated-fn se resect meh accha and efficient hota hai. as memory-structure simply as like jaise ek village ya ek city meh houses and store ess way meh design kiyeh jateh hai takki voh store(as a function) unn sabhi houses ko efficiently and fastly samaan pucha sake, unka koi kaam kr sake etc..etc.. as toh yeh esko apn house-structure( or houses-structure or mtlb house k liyeh structure ya houses ka structure) bol skteh hai and same as like this data-structure hoteh hai
// or ya basically apn public-ko as a data maan skteh hai ya public ko as dedicated-fn maan skteh hai and stores , hospitals , schools etc data maan skteh hai, toh apn ennko stores, hospitals ,schools etc ko ek esseh acche and efficient way meh structure krteh hai, takki voh public(as a dedicated-fn) enko acche se , easily , efficiently access kr skti hai. where access krne ka mtlb apne important kaam krna. and voh important kaam easily krna. 
// and yahi jaise apnne public-store example meh feel kiya ki haa agr esseh structuring ho vakehi meh yeh public k liyeh effient hoga, as same as apn data-structure meh bhi feel krenge mtlb apni ankho se acche se dekhenge ki haan yeh esseh ek kaam k liyeh kafi sahi and ess tarah sahi hai. jaise array-structure meh apn contiguous-memory rkhteh hai linked-list meh non-contiguous memory rkteh hai. thus toh contiguous-nodes ko access short pdta hai and non-contiguous-node ko acces krne k liyeh apnko phle initial-node ka address lena hota hai then usseh uske baad wale ka address lena hota and then usseh uske baad wale ka and so..on upto jab apnko jo node chaheh uska address na mil jayeh. toh mtlb ess tarah se mtlb ess reason se array-memory-or-data-struture meh accessing fast hoti hai and linked-list meh accessing slow hoti hai.
// as here data is plural. and data ka singular "datum" hota hai.
// thus toh basically apnko data-structure-topic meh apn yahi dekhteh hai ki kis-tarah ek data-structures ho skteh hai, hoteh hai jo ki kafi acche and effiecient hoteh hai, ho skteh hai unke dedicated-fn k liyeh in the sense ki voh uss structure meh stored data ko access kr ske effiecintly and fastly. as overall enn sab cheeze se apna program mast banta hai mtlb fast banta as q ki program k functions hi fast hai. AND program toh functions ka hi combo hota hai mtlb apn functions-k-combo ko hi simply program boteh hai, jo ki bas kabhi bhi run kiya ja skta hai and usko call krne pr apne repesct meh automatically cpu k duvra uske sare functions , loops call hojayenge.

// as now according to question apne pass ek abtract-base-class named "cache" hai.

visit: https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem?h_r=next-challenge&h_v=zen
*/
