//🔥💲🍕 YAHA pe apn given "String" k Combinations( which are made by performing-Permutations ) ka "number" find krna and more importantly voh sare Combination "find" mtlb "print" krna dekhenge... 🍕💲🔥

// as toh sbse phle apn permutatised-Combinations k number nikalna dekhenge...
// As jaise ki apne pass n-cheezo-ka-set hai and apnko uss set k diff combinations banane hai by performing permutation, then apn vaha directly bol sktehh hai ki then tab toh eske "n!"  Combinations ban sktehh hai or mtlb banenge hi.

// 🔔 For getting all the combinations we will use and apply these things..
// 1.state-space-tree
// 2.back-tracking-approch
// 3.brute-force
// 4.recursion

//📔📔Note-point:- 🔥🔥Very-imp-note:- as agr apna koi solution tree-form krke k ban raha hai toh mtlb  sahi hai mtlb sahi kaam kiya hai, q ki apn uss solution ko code kr skteh simply by "recursion" , as q ki apn jantehh hi hai ki jab bhi apn "recursion-fn" ko trace krteh hai then vaha tree hi form hota hai. Thus toh eska vice-versa bhi hoga mtlb uss tree ko vapis apn "recursion" meh likh sktehh hai..

// Backtracking is used when there multiple - solution of the problem or mtlb solution create krne k liyeh apnko multiple-steps one-by-bye constraint k according lene ho, jaise permutation - combinations problem jinmeh apnko as are "n!" possible - combination batane hoteh hai or mtlb find - out krne hotehh hai, as toh mtlb ess problem k multiple solution hai na or jaise knight-tour problem or traveller-salesman-problem jismeh apnko voh ek-kam-cheap-route find krna hota hai thus toh mtlb ess problem ka solution toh ek hai but uss ek solution meh many-choices hai na mtlb simply apnko combinations banane honge sabhi tarah k routes k and apn unn routes meh jo sbse-cheap-route hai voh output krdenge.. as toh jab kabhi bhi esseh combination banane k basis pe answer milta ho then vaha pe apn brute-force or backtracing laga sktehh hai. as hala ki apn yeh problem greedy se bhi solve kr sktehh hai voh bhi efficiently but khne ka mtlb hai ki apn brute-force and back-tracking se bhi kr sktehh hai. as ess problem ko apn brute-force ess tarah krenge ki sbse phle apn sare-possible-combinations routes bana lenge and then atlast voh sbse cheap-route hai voh return kr denge.. as brute-force se sbse simple , sbse naive and sbse phle dimak meh aani wali problem-solving-approach hai , as q ki yeh ek-daam naive-approach hai ki mtlb apn bina kuch soche-samje bhi problem ko line-wise solve kr sktehhh hai. and ess problem ko apn backtracking se ess tarah krenge ki apn phle se vohi brute-force-appoach hi lagayenge as q ki backtracking is little-extra-ordinary part of brute-force hai. as backtracking se krne k liyeh apn phle toh uss problem ko tree meh represent krenge mtlb apn uska "state-space-tree" banayenge.. and then voh condition find-out krenge mtlb dekhenge ki voh kya condition jispe apnko "back-track" hona hai mltb "vapis-piche-aake-agle-solution" pe mtlb agle-choice pe move hona hai... and so on upto the all the solution we get. and one-more example ki 8 - queen - problem mtlb apbko 8 - queens ko chess - board meh esseh set krna ki sabhi queens ek - dusre ko attack na kr payehh.Thus toh basicallly apn combinations hi toh banane hai. toh mtlb apn brute-force or back-tracking ka use kr sktehh hai.

//💲🍕 somewhat- about "Brute-force":- 🍕💲
// Brute-force mtlb simply straight-forward approach to solve a problem..
// Brute-force tarika mtlb ek-dam simple noob tarika , jaise apnko koi kuch idea nhi hai.. for the solution , ki solution kya hoga or mtlb ess tarike se , kis special technique se apn solution pe puch sktehh hai. Toh mtlb brute-force-approach meh koi special-technique nhi hoti for move faster towards the solution. As mtlb apnko simply bas noob-tarika follow krna hai.. for getting the solution..
// As brute-force meh solution banane k liyeh kuch socha-samja nhi jata as bas.. esseh hi ek randomly range-meh-solution soch k check kiya jata hai ki yeh solution hai ya nhi hai agr hai toh bhi thik and nhi hai toh bhi thik hai as apn aage badh jayenge by taking linewise other random-solution and then also check it...and so on upto the last possible solution in the range

// As same jaise apn apni trolley-bag ka lock bhul jattehh hai na.. then apn usska solution findout krne k liyeh brute-force-approch hi lagateh hai.. mtlb apbko ek range pata hai ki solution essi bich meh hoga toh apn simply koi extra special-technique lagayeh bina initial-point-range se start krteh hai and after getting direct solution apn usko check krteh hai.. and phir aage 2nd-point pe badh jattehh hai.. and so..onn esseh krtehh rhtehh hai...

//📔📔Note-point:- 🍕🍕 imp-note-point:- ki backtracking and brute force permutation-combinations problems k liyeh mtlb enn problems yeh kaam aati hai..

// jaise some-important-questions apnko pata hona chahiyehh..
// Que-1.How to solve n-queen-problem via brute-force and backtracking
// Que-2. How to find all total poosible arrangements

// Now baat yeh hai ki haan thik hai ki apn essi multiple - solution mtlb permutation - combinations wali problem ko apn back - tracing se solve kr sktehh hai mtlb voh sabhi combinations mtlb sabhi multiple solution find - out kr sktehh hai and apnne physically yeh bhi dekh liya hai ki kaise apn backtracking se krtehh hai , ki phle apn "state-space-tree" banateh hai , then usmeh back-tack wali condition find krtehh hai and phir simply uss apporach toh continue-follow krteh rhtehh hai upto we get all the solutions or mtlb all the combinations.
// and now then baat aati hai for implementing that solution programatically. as implementation k liyeh toh apne Data-strucutures hai na and data-strucutures-pe-operations hai na, unseh apn kr sktehh hai. mtlb apn apne given-data k according appropiate "ds" choose kr lenge for storing that data as q ki data-strucutues-topic meh apnne yeh toh sikha hai ki apporiate-data ko uske apporiate-container meh store krna. and then phir apni problem-solivng-apporach k according ds-operations kab and kaise krna.

//💲🍕 Now toh aab overall apn yeh bol sktehh hai ki yeh "Finding-Permutation-of-String" problem ko apn brute-force or mtlb brute-force se accha mtlb efficiently "BackTracking" se kr sktehh hai. 🍕💲

// continue here from againg-starting the vedio-140.
