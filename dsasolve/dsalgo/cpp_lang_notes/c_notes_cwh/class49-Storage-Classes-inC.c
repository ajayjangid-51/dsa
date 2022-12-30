// Memory-Management:
// YAHA pe apn Storage-Classes or mtlb Storage-Containers k bareh meh dekhenge:
// As Memory-Containers Programming meh bohat important hoteh hai as bcoz apn usih memory meh sara data store krteh hai and phir uspe koi operations krvateh hai. thus C-language Programming meh mainly 4-types ki Storage-Classes mtlb Storage-Containers hoteh hai jinko apn memory meh allocate krke usmeh Values Store kr skteh hai.


// YAHA pe apn C-program ka Memory-Layout k bareh meh dekhenge: 
// mtlb jab c-program banta hai tb memory meh voh program kis tarike se load hota hai run hone k liyeh. mtlb voh kis tarah se run hota hai:



// as now jab program execute hone k liyeh memory meh load hota hai toh vaha memory meh 4-diff memory-parts allocate hoteh hau uss program ko load hone  k liyeh:
//  1. Code-container (ess container(mtlb memory-part) meh program assembly-code and .exe(jo as like as main functions ko call krteh hai. ) file store hoti hai.)
//  2. Global and Static-container (ess container meh program k global and static-variable-container load hoteh hai.)
//  3. Stack-container (ess container meh program-functions , loops , conditionals , local-variables load hoteh hai.)
//  4. heap-container (ess container meh request krke programm se functions, loops , conditionals and local-variables ko load karaya jata hai. by the mallock and callock-commands.)

// now aab apn yeh dekhenge ki Heap meh memory request kaise ki jati hai. and kis-kis k liyeh memory request ki ja skti and esseh memory-request krne ka fayada hota hai voh sab apn dekhenge:
// Storage-Classes:
// 🎆 very-imp-note-points:

// scope define hota hai allocated memory-part k liyey and scope ka mtlb hai uss allocated-memory-part ka life-span with respect to execution of the program-parts not with respect to time.
// Jaise kisi function k andar se allocated memory-part ka scope mtlb uski lifespan uss function k execution time tk hi hoti hai mtlb phir just baad meh voh allocated memory-part disallocate ho jata mtlb vanish ho jata hai..
// 
// Prgramming mainly 5 cheeze hoti hai, and apnko sirf enhi cheezo ka acche se dhyn rhena chahiyeh .
//  1. Containers for data-storing with Memory-Management  ( as Program meh data storing ek important cheez hai. as bcoz jo bhi sari real-life-problems phle ek data ki form meh hoti hai thus uss data ko store krke phir uspe execution karaya jata hai. thus esiliy Containers- most important hai and Container-ka-management kafi important hai. thus yeh Container-management k liyeh C-programming meh different-tarah k containers-define hoteh hai mtlb ho skteh hai mtlb jab chaheh toh voh Containers apn C-programm meh bana skteh hai and containers ko mtlb memory ko acchi tarah se manage kr skteh hai. 
// thus now C-programming meh 4-diff types k Container(mtlb memory) banayeh mtlb allocate ja skteh hai. and now enn Containers ki quality on the basis of Scope, initial-default-value and Lifetime as mtlb ennhi 3-cheezo k basis memory-management hota hai. mtlb memory-management k time apnko enhi 3-cheezo ko dhyan rkhna hota hai. thus enn 3-cheezo ko dhyan meh rkhteh huyeh apn apni memory- ko aacche tarah se manage kr skteh hai. thus enhi 3 cheezo k basis pe apn enn Container ko use meh lateh hai.
//  1.automatic-Container (yeh container kisi function k according allocated rheta hai and ek baar voh function end hogaya toh yeh container bhi automatic end hojayega mtlb vanish hojayega.)
//  2.external-container 
//  3.static-container. 
//  4.return-container.

//  2.Conditionals
//  3.Loops
//  4.Functions (mtlb function-block k andar code ko kabhi bhi just call krke execute kiya ja skta hai.)

