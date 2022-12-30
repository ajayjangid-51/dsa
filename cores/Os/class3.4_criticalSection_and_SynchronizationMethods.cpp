
// critical-section-Problem yehi hai ki mtlb jaise ki critical-section is a section in a "Program-code" jaha shared-variables/ya shared-resources ko handle ki ja rha ho, uss section ko apn "Critical-section" boltehh hai. and thus critical-section-problem ka yehi mtlb hai ki agr multiple-parrelly-running-programs(coperative-programs) k critical-section meh agr synchronization nhi huaa toh vaha bas vohi "race-condition" hovegi, and yeh "race-condition" hone ko hi apn "critical-section-problem" bol rhe hai.

// yaha yeh niche explanation ko samaj k liyeh sbse phle apnko yeh assume krna hai ki abhi Os mutiple-coperative-proccess ko run kr rha hai, and enn processes ko apnko synchronization krna hai takki "race-condition-problems" or mtlb "inconsistency-problems" na hove.

// Requirements to achieve synchronization between the paralley-running-coperative-processes (mtlb exactly boleh toh Requirements to achieve synchronization between the common-critical-section of parallelly-running-coperative-processes.):- (obviously critical-section is common-part between cooperative-processes.)
// 1.mutual-exclusion
// yaha mutual-exclusion ka mtlb ki processes aapas meh mutually-exclusive honi chahiyehh mtlb processes aapas meh ek-dusre ka बहिष्कार( बहिष्कार mtlb oppose krna toh nhi hoga, toh mtlb it is like ki agr voh hai toh meh nhi honga(bas itna hai, mtlb additionally phir aur koi opposition/virodh nhi hota.)) krni chahiyehh. so toh allover mutual-exclusion ka mtlb hai ki multiple-running-coperative-processes meh se agr koi ek process critical-section meh hai then uss time uss critical-section unn processes meh koi aur process nhi aani chahiyehh , and agr aati hai then eska mtlb ki vaha koi synchronization nhi hai, toh mtlb ki processes-k-bich synchronization achieve krne k liyeh yeh mutual-exclusion condition/rule follow krna hota hai.

// 2.progess:-
// mtlb ki cpu meh process ki progess hamesa honi chahiyehh, mtlb esa nhi ki process ki progress ruk rhi ho. jaise ki mtlb multiple-coperative-processes meh kabhi-kabar jo critical-section hota hai voh empty hi bana rhjata hai bcoz ki process-p1 process-p2 ya process-p2 process-p1 ko critical-section meh enter nhi krne de rhi bcoz of the mistake in entry or exit section of processes.. toh allover eska mtlb hai ki for acheiving sychronization jo apn critical-section banateh and uspe phir entry-section and exit-section code likhtehh hai toh unnmeh apnko koi esa code nhi likh dena hai jisseh process ki progress hi na ho rhi ho aur mtlb ki critical-section meh enter hone ka chance indefinite-time k liyeh postponed nhi hona chahiyehh.

// 3.Bounded-wait:-
// jaise ki process ne critical-section meh enter krne ki request ki toh before granting permission or denying permission to enter or no-enter into the critical-state, then vaha se bound-wait-function hona chahiyehh joki no.of-times permission-granted to enter critical-section pe najar rkhta ho, mtlb ki esa nhi ki sirf ek hi process critical-section ko access krhi ho and baki other processes indefinite-time k liyeh bas wait hi kri ja rhi hai. toh mtlb allover bound-wait-function hona chahiyehh for good and well Synchronization.
// 4. no hardware/software dependent solution.

// notepoint:-
// 1."Program" mtlb ki it is simply a set of linewise instructions(or mtlb code-statements or commands) to do some task/work.
// 2.jab "Program" execution-state  meh hota hai toh usko apn "Process" boltehh hai and jab Program ideal-state(mtlb saant baithna) hota hai then apn simply "Program " boltehh hai.
/*3.
3.lockvariable
2.monitors
4.tsl
4.semaphores

These are the diff-diff entry and exit section methods
*/