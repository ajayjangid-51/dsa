//🔥💲🍕 job-sequencing-with-Deadlines 🍕💲🔥
// Okay toh now aab apn phle ess problem ko samajenge and then phir esko solve krenge and esko solve apn greedy-method se solve krenge toh mtlb apn esko greedy-method se solve krna dekhnege..
// Okay toh problem is ki:-
// Apnko multiple jobs de rhkhi hogi and har job ka profit bhi hoga mtlb usko complete krne ka profit hoga.. but baat yeh hai ki apnko koi bhi job uski deadline k andar andar krna hai, mtlb agr usko apn mtlb usko uski deadline k baad nhi kr sktehh hai...

//🖼️🖼️🖼️  see pic-1 :- 🖼️🖼️🖼️
// And imp baat yeh hai ki each job takes same 1-hour-of-time..
// As ess problem ko apnko ess tarah samajna hai ki jaise koi ek machine hai and voh J1,j2,j3,j4 jobs kr skti hai.. har job takes 1-unit-of-time(mtlb here it is one-hour ) and now suppose that ki 4-persons uske samne khde hai and voh persons ko apni job krvani hai , as yaha sbhi persons ki job ek hi hai,but profit per person alg-alg hai,, now baat yeh hai ki voh persons ek particular-time tk hi khde rhtehh hai, toh now question yeh hai machine ko voh jobs eseeh krni hai ki machine can earn maximum Profit. Toh mtlb question yeh hai ki machine ko algo follow krna chahiyeh for getting , earning maximum Profit.
// Person rukne ka Mtlb person is ready to wait for a particular-time.
// Mtlb from above img given-time we can see in this way ki all person came at same time at 8-'O'-clock, and p1 can wait for 10am ,and respective all 10am , 9am , 11am, 11am
// Thus toh overall apnko voh set-of-jobs chahiyeh that can be done in deadline and with maximum-profit
//🔔🔔 So mtlb this is maximization-problem.. 🔔🔔
//🌟🌟🌟  So toh mtlb it is optimization-problem and toh mtlb we can apply greedy-method 🌟🌟🌟
//🖼️🖼️🖼️  see pic-2 :- for seeing the avialable-solts allotment 🖼️🖼️🖼️
// So according to this there are only 3-solts ,we can do only 3-jobs
// So out of 5-jobs we have to select 3-jobs to get maximum-profits
// So as per the greedy apn sbse phle sbse maximum-profit wali job ko sbse phle krenge...
// Then useh kam , and then useh kam cost wali job
// And but apn job ko select krke usko uske deadline k according wale last slot meh rkhengemm

//🖼️🖼️🖼️  see pic-3 :-(for seeing the procedure of allotment of slots for the selected-Job) 🖼️🖼️🖼️
// continue-statement-of-pic3 is:- And after checking on left-side on slot is found empty then leave that job, and go onto next job..
// As yeh bhi greedy-approach hi hai, as q ki greedy mtlb apnko ek-dam full greedy banke problem ko solve krna hota hai..
// As yeh greedy hi hai, as person p1 is ready to wait for 2-hours then usko apn 2-solt meh hi krenge , as greedy mtlb sirf apna phayedaa dekhna, aur kisi ka bhi nhi dekhna... Mtlb sirf apna...
// So first-of-all sort the jobs-profit in decreasing-order and go on with selecting the jobs one-by-one..

//🖼️🖼️🖼️  see pic-4 :- for seeing the alloted slots for Jobs 🖼️🖼️🖼️
//🖼️🖼️🖼️  see pic-5&6 :- for seeing that there can be multiple sequence-of-jobs possible if jobs have same-deadline-time , then apn phir unn jobs ko ek-dusre ki place pe place kr sktehh hai, and diff "Sequence" bana sktehh hai. toh mtlb apnko "Sequences" ka bhi acche se dhyn rkhna hai. 🖼️🖼️🖼️

//🔔🔔 🖼️🖼️🖼️  see pic-7 :- for seeing the code-Implementation-method or Tablular-represention-method 🖼️🖼️🖼️  🔔🔔

//👿📔imp-Note-point:-so if solts are limited but jobs are many-more then we have select jobs accordingly so we can earn maximum-profit..
//👿📔imp-Note-point:- toh apnko esseh kaam k liyeh statergy mil gayi hai, toh esa kaam k liyeh apn aage dhyn rkhenge ki apnko ...

//💲🍕 2nd-Example of Job-sequencing-problem:- 🍕💲
//🖼️🖼️🖼️  see pic-8 :- 🖼️🖼️🖼️

//👿📔imp-Note-point:- AS yaha apn ne 2-baar greedy approach lagayi hai, thus toh mtlb greedy-approach se koi kaam krna mtlb as much possible apnko uss kaam meh greedy-approach apply krni hi hai.jaise yaha first-time meh toh apnne bola ki apn maximum-profit wali job ko sbse phle choose krenge , and phir second-time slot allotment meh apn ne socha ki ess selected-job ko ki deadline wale slot meh hi place krtehh hai, toh as allover apn ne apna fayedaa pura kr liya...