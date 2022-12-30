// recovery is done in many ways(or mtlb by different methods):-
// 1.log based Recovery (mtlb ess method meh database k liyeh jo bhi transactions hoti hai voh unn transactions ki sbhi steps ki little-information ko ek file meh store kiya jata hai jo mtlb ek tarah se uss meh "log" krne jaise hi hai, so toh isliy apn uss file ko phir "logfile" bhi boltehh hai.).
// then phir recovery of database ess "logfile" ko dekh-dekh k ki jati hai.

// now "log-based recovery" meh 2 tarah se "modification" kiya jata hai:-
// 1st. Immediate modification:-
// 2nd. Deffered modification (mtlb agr transaction "commit" huyi thi then only we wil make modification in the database otherwise not.) we can remember.