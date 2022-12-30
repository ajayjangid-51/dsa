// YAHA pe apn git-three-Stage(directory)-architecture k bareh meh dekhenge: mtlb staging area ,working-directory,  git-directory mtlb files ki staging krna.
// AS mtlb git k according kisi bhi software-development k liyeh yeh 3-steps , 3-stages honi chahiyeh.
// mtlb sbse phle project-files working-stage meh hoti hai and working-stage k baad voh project-files phir staging-stage meh jati hai and stagin-stage meh just jane k baad voh commit ho jati hai mtlb voh phir .git-directory meh chali jati hai. and phir vapis voh working-stage meh files toh as it is rheti hai mtlb voh files toh hamesa as it is rhti hai , mtlb unmeh chagements , features-addition sab kuch unmeh hi hota hai. ya phir esseh hota ki voh working-place se voh files bhi nikal jati hai , and thus apn baad meh uss working-place meh commit-folder meh se files ko pull krke phir vapis se unpeh kaam krne lag jateh hai. and phir again staging hoti hai and then again commit hoti hai ... and yeh cycle so on hamesa chlti hi rheti hai jab tak ek mastam se mastam ek-dam stable project-product na ban jayeh.
// thus software-development k liyeh yahi hi 3-stage-architecture cycliclly follow hota hai.

// Three-stage-Architecture:
// 1.Working-Directory (mtbl voh directory jismeh apn abhi currently kaam kr rhe hai on the xyz-version mtlb voh version koi sa bhi ho skta hai , mtlb ess version k phle k bhi bohat sare commits ho skteh hai ya nhi bhi ho skteh hai. and atlast in 3-stage process yeh apni working-directory bhi ek commit banne wali hai. )
// 2.Staging-area (staging area voh folder hota hai jismeh previos-version ki voh files hoti hai jo ki agle new-commit(mtlb new-version jiska commit banega ) meh jayegi. thus toh mtlb apn staging-area meh vohi files daalteh hai jinko apnko new-commit meh bhejni hai mtlb use krni hai.) as staging process tab hoti hai jab apn apne working-directory meh apna pura kaam krle and then decide kare ki haan aab kisko , konsi  file ko apnko aage stage krna and nhi krna hai.
// as commit mtlb locked-version's-copy.
// 3.git- directory(repository) ( mtlb yeh .git-folder hota hai jo ki hidden hota hai apni another-version commit-krne-wala folder hota hai yeh voh purana version1-wala folder hi hota hai. jismeh apn new-files and changements krke vapis se commit krteh hai.    ) mtlb ek baar commit krne k baad enn sab versions ki copy ess .git-repository meh hoti hai. and apn kisi bhi version(mtlb commited-folder ) ki kisi bhi ka access and use kr skteh hai with all its informations.

// as apn ess kaamo practically krenge.

// 3-stages meh yeh-yeh hota hai:
//  1.stage-files
//  2.commit-files
//  3.checkout the project