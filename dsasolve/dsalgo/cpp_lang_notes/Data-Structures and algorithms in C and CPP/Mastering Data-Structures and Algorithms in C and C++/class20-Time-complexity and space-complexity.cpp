// as hamesa koi bhi program ki mltb koi bhi algrithm ka hamesa worst-case time hi find-out krna hota hai , q ki voh safe side hai, mtlb worst-case dedicated time-complexity hi find out krni hoti hai.

// as time-complexity meh apn time ko seconds ya minutes meh represent nhi krteh,,, as time-ka mtlb time ki Complexity hota hai mtlb time kis-kis cheezo pe depended hai. esseh toh apn input-size(n) , or procedure-cycle (n) meh likhteh hai... and programs k runtime ko enmeh likhna kafi sahi hai , jo ki apnko aage orr acche se clear hojayega..

// key mtlb index hota hai..    , where key mtlb numbering 1 se start hoti hai. and index mtlb numbering 0 se start hoti hai.
// 🎆 As jaise ki apnne kaha ki apn program ki time-complexity ko seconds, minutes meh represent nhi krteh as apn nahi kr skteh..q ki program ka time input-size pe depend krta hai.. toh apn program-time ko uss input se hone wale no-of-times of program-process or program-cycle(n) ki terms meh likteh hai and agr input-size pe depend nhi krta tab bhi apn program-time ko seconds and minutes meh nhi likteh,as vaha pe apn simply orderof 1 mtlb O(1) likteh hai.. 🎆
// Jaise O(n^2) mtlb program n^2 times chalega...

// As apn hamesa program-time ko program-worst-case k basis pe hi  show krteh hai, batateh hai.. bcoz. Worst-case-time ek safe-side-time hai  jisko dekh kr apn kabhi confuse nhi hoteh ki program ess input pe kahi esseh jada time toh na lele...
// As esa toh average-case and best-case analysied-time-complexity meh hota hai..

//Time-complexity mtlb voh complexities jinpeh program-time krta hai..

//And voh complexities mainly program-procedure , input-size and no-of-execution-cycle(n) hoti hai..
// Time-complexity mtlb Time ki complexity, mtlb kin kin cheezo pe time-depend krta hai..

//And same for Space-complexity, space-complxity mtlb space ki complexities, mtlb program-space kon kon si complexities pe, mtlb kon kon si complex-cheezo pe mtlb kon kon si complex cheezo pe depend krta hai..
// Time-complexities find out krna mtlb time ki Complexities findout krna mtlb voh cheeze findout krna jinpe time depended hai..
//And time-complexities analysis krna mtlb time-complexities findout krke unki overall equation likhna mtlb result likhna..
//
// Now time-complexity analysis krne ka apne pass ek method hai jisko Aysmptotic-analysis or Aysmptotic-time-complexity-analysis bolteh hai

//  Aab Now apn yeh dekhenge ki yeh Method krteh kaise hai...
//  Now at the end of asymtotic-analysis. Asympyotic-notations aati hai.. mtlb apn apna analysis-result accordingly enn notations meh likhteh hai... Jaise mtlb apnne worst-case k basis pe analysis kiya hai toh usko apn bigO()-notation meh likhenge. And yeh notations vice-versa hai mtlb agr big-O()-notation toh mtlb analysis worst-case ko lekar kiya gaya hai...
// And same for theata-notation(syad average-case) and omega-notation (for best-case)

// as toh program kitne loop or mtlb kitni baar chal raha hai uss term meh apn program-time likhteh hai..

// As apn mainly program-time ko mtlb program-time-complexity ko  no-of-execution-of-loop(n) or no-of-program-repitation(n) ki terms meh hi represent krenge...

// As apn big-O , theta , omega-notations ka use nhi krenge.bas simply no-of-repitations meh represent krenge...

// Note-point:- as apn program ko dekh kr bhi apn find-out kr skteh ki program ya program-loop kitni bar repeat ya mtlb chal raha hai chalega... And vohi apna time-complexitiy or mtlb program-time hi hai..

//As toh apnko har-cycle ko add krna hai...for finding total repitations..
// As hamesa mostly program working se hi apnko uske no-of-execution find out krne hoteh hai..

// Naki by seeing code. As apn code se bhi kr skteh but more prebly program ki working dekh apnko uska order(mltb no-of-excution) find out krna hota hai

//Kisi cheezo 4-baar add krna mtlb uss cheez 4 se multiply krna. Toh mtlb dono ek baat hai..

// As yeh cheez p&c kafi matter krti hai kafi kaam aati hai..

// n^2 ko n-times add krna mtln n^3 . And same like n^3 ko n times add krna mtlb n^4.  And so..on...
// Now aab apn kisi bhi cheez ki time-complexity likh skteh as time-complexity meh no-of-cycles ko add krna hota hai. And then multiple and square likhne k principal ko follow overall addition likhna hota hai in the multiplication or square representation-form..

//har cycle ko add krna hota hai ya group-of-cycle ko add krna hota hai...

//Space-complexity is simply measure-of number-of-elements.. mtlb apn program ek-array of n-elements then space-complexity ka order hai n mtlb O(n).. and same for linked-list of n elements , tree of n-elements mtlb no-of-containers allocated in the memory ki terms meh apn space-complexity ko measure krteh hai.. whatever thesize of container that we didn't consider...

// Mtlb apn container ki size nhi. As containers k number measure krteh hai.. for the space-complexity..

//3 ko n-times add krna mtlb 3*n krna.. simplee. And 3 ko 3-times krna mtlb 3*3 krna ya or 3^2 same hi ,ek hi baat hai.. and then 3^2  ko 3-times add krna mtlb 3^2 * 2 krna or ya 3^3 krna ek hi same hi baat bai.. and then 3^2 ko n-times add krna mtlb 3^2 * n krna or ya 3^n krna... Dono ek hi same hi baat hai..

//🎆 -implementation:(vedio-44)
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗