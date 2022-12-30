// YAHA pe apn Git-Repository meh present Files ki status-Lifecycle or mtlb Stage-Lifecycle k bareh meh dekhenge:
// as mtlb apn file ki lifecycle k bareh meh dekhenge:
// 1. as file sbse phle toh untracked-hoti hai(mtlb working-directory meh present hoti hai.)
// 2. and then apn uss working-dirctory meh empty of filled-files add krteh hai, thus uss time voh files unmodified-files hoti hai.
// 3. now enn added files ko jab edit ki jati hai tab yeh files phir modified-files khlati hai.
// 4. and then files ko modified krke phir staging-area meh bhej diya jata hai. thus staging-area meh present files staged-files khelati hai.
// 5. then jaise hi apn unn staged-files ko commit krenge , then voh phir vapis unmodified-condition meh aajayegi. thus mtlb commit-files unmodified-conditions meh ho jati hai as a filled-files.
// again-1. and jab apn unmodified-file ko remove/delete krteh hai then voh file working-stage meh mtlb as a untracked- file hojayegi mtlb uss file ka koi aata pataa hi nhi hai mtlb untracked-file ka mtlb uss file ko koi aata pata hi nhi hai mtlb voh present hi nhi hai.
// and yeh untracked , unmodified and modified process sari working-stage meh hi hoti hai. thus toh apn simply jab kabhi koi file enn untracked or unmodified or modified condition or stage meh ho then apn esseh bolteh hai ki voh file abhi working-stage meh hai.

// as toh untracked file hai mtlb files hai hi nhi.

// untracked-file ka mtlb file abhi hai hi nhi ya abhi just file add ki gayi hai. thus initilly file untracked hi rhti hai.
// modified : file-name(in red color) ka mtlb hai ki yeh file modified hai mtlb modified-stage meh hai and yeh file last-commit ki file ki modified-file hai jisko apnne stage krke phir usko edit kiya but un-edited file ko commit kr diya tha..mtlb commit-folder meh daal diya tha.
// modified : file-name(in green-color) ka mtlb hai hai file modified hai and stage-area meh hai , and as stage area meh sabhi sari files modified-files hi hoti hai.

// as file ek baar commit hone k baad untracked-condition meh nhi jati hai , voh toh sbse phle unmodified meh jati hai , then modified meh , then stage , then commit meh , then mtlb new-version k unmodified-stage meh ho jati hai.

// as toh uncommited file ko apn change , modified bhi krteh hai then tabbhi voh apnko untracked hi batayega q ki voh abhi working-stage meh hi hai. and working-stage meh wali files ko git-track nhi krta hai , as git toh commited-files ko track krta hai. as working-stage wali files ko git toh bas itna hi track krta hai ki working-stage meh kitni and konsi files hai.
// as toh mtlb jo files stage meh hoti hai git unhi ko hi track krta hai in the sense ki usmeh modification huaa hai ya nhi huaa hai. and jaise hi agr staged-files meh changement huaa hai toh git apnko unn staged-file ko red-color meh show karega ki yeh esmeh changement huaa hai and agr baad meh apn simply <git status> likh k uss file ko vapis se change or modify krteh hai toh git apnko nhi batayega ki yeh esmeh orr changement huaa hai, thus toh ek baar sufficient amout of changement krke apnko vapis se uss file ko stage-area meh daalna hota hai, q ki phir tabhi toh git uss file ko vapis se track krna chalu karega.
// note-point: as apn kisi staging-file ko modify krteh hai then voh staging-file without -modification se stage-area meh rheti hai but with-modification wali stage-file phir stage-area se bahar nikal jati hai, thus vaha apni marzi ki apn with-modification or without-modification wali file ko commit meh rkhenge as agr apn without-modification wali file ko commit meh rkhteh hai toh voh apn directly <commit> command se kr skteh hai , but agr apn with-modification-wali-file ko commit meh rkhna chahteh hai toh usse phle apnko staging-area meh laana hoga.
// as mtlb agr apn working-area wali file meh kuch bhi modification etc.. kuch bhi kare toh git apnko nhi batayega ki esmeh modification huaa hai ya nhi huaa hai , yeh toh bas sirf yeh batata hai ki working-area meh yeh yeh files hai.

// thus toh mtlb initially starting meh toh itna hota hai ki working-area meh file banavoh , edit kro , modify kro kuch bhi karo git usseh track nhi krta , as jab apn uss working-area wali files ko stage-area meh daal denge then phir unn files ko git track krna chalu kr deta hai, mtlb agr apn unn staged-area wali files meh kuch modification , chagement vagera kuch kare toh voh git apnko batega ki yeh.

// untracked area : meh only sirf unmodified-files hi aati hai. as koi bhi file 2-type se unmodified ho skti hai firstly ki voh file yaa toh just abhi created ho mtlb empty ho ya phir voh file commit ho.

// thus in-very-fist toh yeh path follow hoto hai:
// untracked-file(mtlb koi file nhi) >> unmodified file(mtlb koi empty-file hai ) >> phir modified-hona >> phir stage-hona >> phir commit hona.

// agr files phle se ek baar commited hai toh:
//  commited-file-as-unmodified-file jo ki apnko red meh dikhti hai >> phir unka modified hona( jo ki apno red color meh dikti hai mtlb sirf modified hi red-color meh dikhti hai, unmodified toh apnko dikti hi nhi hai, as q ki voh toh commit meh as it is hai and phir jo bhi modified-files stage hoke k commit hoti hai voh ess unmodified-file k saat meh commit hoke essi sab as unmodified ban jati hai , and then again ) >> phir stage hona >> and then phir se commit hona >> and then as commit meh sabhi unmodified files hoti hai thus uss commit ki unmodified files ko modify krna and stage krna and then vapis se commit banana , as sooo..onn aas like this esseh commit banteh rhti hai.
// as toh apnko ek baat dyhn rkni hai ki har commit meh sari unmodified-files hi hoti hai.
// as thus kisi bhi commit ki unmodified files ko apn modify kr skteh hai and unheh stage krke ek new commit bana skteh hai, as jaise hi phir voh files unmodified-condition meh aa jati hai mtlb unkko phir koi change nhi kr skta hai ,as agr change krta bhi toh unn modified-files ek new commit(as commit ek lock-folder ki tarah hota hai jisko koi delete nhi kr skta and jiski file ko koi change nhi kr skta hai but uski files ko copy and paste kr skta hai kahi bhi and usseh phir use kr skteh hai , mtlb modified kr skta hai etc..etc..) hi banega.

// as ek baar commit krne k baad apnko working-folder ko nhi dekhna hai mtlb apnko esseh maanna hai ki voh working-area clean hai , aab apnko hamesa just last commit ko refer krna hai. ya phir apn ksi bhi commit ko refer kr skteh hai as apne according.

// as jab bhi file stage ki jati hai, then voh unmodified hi hoti hai , and jab stage-file modified ki jati hai voh modified ban jati hai and stage k bahar nikal aati hai , thus phir apno vapis se uss file ko stage krna hoga. and jaise hi apn stage krenge voh file as a unmodified ban jayegi , as unmodified-file ka mtlb static-file mtlb as a locked-file for the commit-folder jismeh sari unmodified-file mtlb locked-files hi hoti hai and commit-folder bhi apne aap meh ek locked-folder hi hota hai.

// thus toh apn basically files ko staging area meh isiliy hi lateh hai q ki apnko unn files + and kuch baki bacchi huee files of last-commit except these current-staging ko combine krke ek new commit banateh hai or new-commit banta hai. as toh yahi pura commits ka use hota hai.

// 🎆 And as importanly boleh toh git working-directory and just-last-commited-folder ki files ko track krta hai. 🎆 and git status command apnko enhi cheezo k bareh meh batata hai , show krta hai.

// Links: (as aab apni sabhi short-notes-files meh bottommost meh ek Link-section rkhna hai jismeh apn sabhi voh links mentions karenge jo apnne ess topic ko study krteh time visit and researched kiyeh the..)