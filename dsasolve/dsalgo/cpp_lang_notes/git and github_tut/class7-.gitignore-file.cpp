// YAHA pe apn Working-directory-Files ko git meh ignore krna dekhenge , mtlb apn Working-directory-files mtlb working-stage meh files ko git se ignore krva skteh hai , mtlb phir git unn files ko ignore karega mtlb unko track nhi karega , as mtlb apn phir unn files meh kuch bhi changement krteh hai  , then tabbhi git apnko koi kuch nhi batayega unke bareh meh q ki phir git unn files ko dekhta hi nhi hai.

// AS yeh apn mainly essliy krteh hai q ki kuch files bohat badi hoti hai ,and unka apne program meh koi kaam nhi hota . mostly yeh hai ki apnko faltu meh unn files ko track krna hi nhi hai q ki unka koi kaam bhi nhi hai developement k liyeh ,mtlb simply boleh toh esehi bhi static-rheti hai thus toh apnko faltu meh unn files ko apne <git status> command k result meh baar nhi dekhna q ki usseh phir rush feellta hai and readibility kaam hoti hai toh mtlb isiliy.

// 🎆 note-point: AS toh apn sirf working-directory meh present-files ko hi ignore kr skteh hai , as mtlb apn stage-area meh present-files or Commit-area meh present files ko ignore nhi krva skteh hai, thus toh apnko dhyn rkhna hai ki apn ignoring-file(mtlb files for ignoring) ko staging area and commit-area meh naa daale.
// as toh ignore-files phir apnko dikhti bhi nhi hai and voh files phir apne commit-folder meh bhi nhi jati hai. and in the last apn apna latest-commit-folder hi github-pe upload krteh hai. thus toh jab bhi apn koi bhi git-repo clone krke toh apnko uski .gitignore file dikhni chahiyeh takki apnko yeh pata chal jayeh ki apnko yeh cheez chalane k liyeh yeh sab ignored-files ko phle apne ess folder meh lani hogi. tabhi apn uss project ko execute kr payenge . jaise apnne class5- meh ek portfoloi-website ko clone ki thi and as apnne usko phir uski ignore-file, folders ko bhi leke aayeh the apne react-folder se and phir usseh execute ki thi toh as like that apnko har sabhi git-repo k liyeh yeh cheez krni hota hai.

// 🎆Thus toh now aab apn yeh esseh files ko git se ignore krna dekhenge:
// So follow these steps:
/*
    1.first create a ".gitignore"-file and then just write the names of files jo ki apnko git se ignore krvani hai , ki mtlb git unn files ko track na kare thus mtlb phir apnko git status result enn files k bareh meh kuch bhi infos nhi milegi ki mtlb yeh files meh kisi ne kuch edit kiya hai , ya file ko delete ki hai , ya rename etc..kuch bhi. and apn directly multiple files of same extension ko ek saat ignore kr skteh hai by just simply typing <*.log> in .gitignore-file.
            3. ignoring-folder ( as apn pure present-folder in git-repo mtlb working-directory-hii ko bhi ignore kr skteh hai by just simply typing this <foldername/> from the new-line in .gitignore-folder and as "git" folder ko ess tarah hi denote krta hai : <foldername/> for all these foldersname or </filename> for only just present in working-folder or <filename> ) note-point: ki As git empty-folder in working-directory ko toh essehi track nhi krta hai mtlb usmeh files hogi tabbhi voh track krta hai.
            4. 📔note-point: AS apn .gitignore file "#" se comments likh skteh hai.
            5. 📓note-point: as apn kisi folder ko stage-area and commit-folder meh daalteh and but uss folder meh meh present orr folder ko apnne ignore kr rkhna toh phir voh folder phir stage-area or commit-area meh nhi jata hai.

    2.and after writing the name of files in .gitignore-file , stage this .gitignore-file also. as q ki jab tk apn apni ess .gitignore-file ko stage nhi karenge tab yeh file jo kaam krti hai , voh kaam hoga nhi. toh yeh kaam krna jaruri hai.

    3. and as apn .gitignore meh orr bhi bohat sare kaam kr skteh hai jaise: pattern-matching etc..etc jo ki apn baad meh dekhenge: but abhi yeh itna git sufficient and yeh apnko acche se aana chahiyeh.
*/

// AS git status krne se apnko current meh apni git-repository meh kya hai , kya ho raha hai yeh sab pata chalta hai. mtlb jaise:1. abhi current meh konsi commit banne wali hai uske realted mtlb jaise konsi kitni files abhi staging-state meh hai and konsi-kitni-files staging-stage wali modified huee hai etc.. like and yeh sab cheeze just-last Commit se hi continue hoti hai. and 2.working-directory mtlb working-stage meh kya new hai jo bhi tk kabhi bhi stage nhi huaa hai ya kisi commit meh nhi hai as like that.

// 🔗Links:
// vedio: https://www.youtube.com/watch?v=TwKALVoK5cE&list=PLu0W_9lII9agwhy658ZPA0MTStKUJTWPi&index=7
// main use of .gitignore : https://www.google.com/search?q=why+.gitignore+is+used&oq=why+.gitignore+is+used&aqs=chrome..69i57j0i22i30i457.10274j0j7&sourceid=chrome&ie=UTF-8