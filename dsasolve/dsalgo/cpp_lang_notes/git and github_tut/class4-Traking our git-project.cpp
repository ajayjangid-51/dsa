// Traking(mtlb making ) our first git-Project.

// git-repository(or git-directory) voh hoti hai jismeh just .git-folder hota hai. where yaha pe yeh just ka mtlb ki folder k andar folder meh .git-folder hota hai toh voh folder1 git-folder nhi hoga, as voh folder k andar wala folder git-folder mtlb git-repository hoga. and .git-folder hona mtlb ki uss folder meh git-software hona. and thus phir yeh git-software apne folder ko hamesa track krta hai rhega. where track krne ka mtlb sab kuch dhyn rkhega mtlb ess folder meh kya , kitni files hai , yeh files kab bannee gayi hai , yeh files kab , kaise duvra , kitna edit ki gayi etc..etc.. many more things.
//  and as apn <git status> -git-commmand se apni git-repository mtlb apne git-folder ka status jan skteh hai ki mtlb apne folder(jo ki ek git-repo hai toh apn sab cheeze track kr skteh hai otherwise nhi kr skteh..) meh kya kya files hai and enn files meh kya kya changesment huyeh hai and changement hone k baad kitni files stage-area(mtlb stage-2) meh bheji gayi hai as q ki apnko ek bar files ko staging-area (or staging-condition) meh lake uss apne folder ko commit krna hota hai mtlb lock krna hota hai.
// as commit krne ka mtlb yeh hota ki apne ess folder ki staging-files + V1 ki staged-files-k-other-files ki exact-copy create krna and usseh .git-folder meh hi kahi save krna.  thus but voh apne folder meh jo apni current-meh files thi , voh toh same as it is present rhegi. but apn .git-folder meh kisi bhi version ki koi bhi files kabhi bhi uthaa(syad pull) kr skteh hai apne ess folder(as yeh working-folder hi hota hai) meh.

// OUr-Questions:
//  1.what is branch-master:
//  2. no commits-yet( ka mtlb hai ki abhi tak koi commits nhi huyeh hai mtlb abhi tak koi abhi ek version nhi bana hai.)
// version boleh toh ek group of number-of-files jo ki apnko lgta hai ki haan yeh sab thik hai and apn esko production meh daal skteh hai mtlb live kr skteh hai.
// phir version 1, version 1.2 , version 2 ..and soo onn ka mtlb uss version- ki files meh kuch changement , kuch new-features and many more thing krke usseh commit kr diya gaya hai thus mtlb voh aab as version-xyz khelata hai.

// 🔥 thus Now yaha pe apn git-commands dekhenge: 🔥
/* 🎆1. init (as init mtlb initialize , as ess command se apn kisi bhi folder ko git-repository bana skteh hai or ya kisi bhi git-repository ko vapis se re-initialize kr skteh hai.)*/

// koi bhi folder-repository nhi hota hai mtlb usmeh .git-file nhi hai mtlb usmeh git-software nhi hai mtlb uspe git-software kaam nhi raha mtlb voh folder track nhi ho raha hai. (track in the sense ki git jo kaam krta hai voh kaam nhi ho raha hai.)
// As toh apn kisi bhi folder ess tarah git-folder(mtlb git-repository) bana skteh hai. by simply typing the:
//      <git init> in that folder's address. as q ki git-commands particular-folder k liyeh hi chlti hai. as toh esseh apna folder git-folder(mtlb git-repo) ban jata hai mtlb aab apna yeh folder track hota rhega.
// as ek baar kisi bhi folder ko git-folder banane k baad apn uspeh apni sari git-commands chala skteh hai and voh chalegi bhi bcoz aab apne ess folder pe git kaam kr raha hai.

// note-poitn: mtlb jo bhi git-commands chlti hai and jo bhi git-command ka result aata hai voh enn uske particular folder k liyeh hi aata hai.

// 🎆2. status (as command se apnko yeh pata chalta hai ki ess git-folder meh jo working-area hota hai usseh kitni files staging-nhi hai , kitni staing-meh hai and kitne commits aa tk huyeeh hai ess folder k.)
//  mtlb simply boleh toh ess status-command se apnko yeh 3-cheeze series meh essi order meh dekhne ko milti hai:
/* 📔 1. "commits" kitne commit kr diyeh gayeh hai, mtlb as abhi tk kitne version bane hai. 
// a.) as apn staging-files ko ess <git commit -m "message to show for related to this commit"
    b.) <git log> command se apn apne sare commits dekh skteh hai.  */
/* 📔 2. kitni files stage-area meh nhi daali gayi hai mtlb kitni and konsi files abhi working-area mtlb abhi working-stage meh hi hai. jinko simply "untracked"-files bola jata hai.
// a.) as toh noww apn ess command <git add --a> se sari all untracked-files mtlb working-stage meh present files ko staging-area meh daal skteh hai.  ( 👿📓: as agr working-stage meh koi folder hai and voh folder git-folder hai and voh git-folder commit nhi then phir apnko erro milti hai ki xyz-git-folder does not have any commit , thus toh essi condition meh apnko phle uss git-folder pe dhyn dena hoga mtlb uspeh kaam krke usko commit krna hoga ya directly bhi commit kr skteh hai.)
  b.) as apn <git add <file-name> > command se kisi particular file ko stage-area meh daal skteh hai.
 */

/* 📔 3. kitni files stage-area meh daal di gayi hai mtlb kitni files stage-area meh hai. as enko "tracked"-files bola jata hai. */

// and ek baar files ko stage and commit krne k baad apna working-area khali ho jata hai mtlb voh khali nhi hoti hai but apn khali kr bhi apn apna kaam kr skteh hai mtlb voh apn kisi bhi file ko apne working-area meh pull kr skteh hai and unpe kaam kr skteh hai..

// for commit-editor ; (
// Press i to enter inline insert mode. Type the description at the very top, press esc to exit insert mode, then type :x! (now the cursor is at the bottom) and hit enter to save and exit. After writing commit message, just press Esc Button and then write :wq or :wq! and then Enter to close the unix file.
// )
// .(dot) ko apn "then" se replace kr skteh hai. as esseh reading aasaan hoti hai mtlb easy-understable hoti hai.
//  ,(comma) ko apn "and then" se replace kr skteh hai.
// and read krteh time kuch esseh words aayeh jinka apnko meaning nhi pata toh phle unn words ko meaning dekha hota hai and then phir uss sentance , para ko read krna hota hai.