//🔥💲 As toh now apn "Selection-sorting-technique" dekhenge... 💲🔥
// 🍕Selection-sort meh selection ka mtlb hai ki position-ko-select-krna and phir uss position k liyeh element find-out krna..
// As selection-sorting meh bhi as like bubble and insertion ki tarah "passes" hoteh hai.. And har "pass" meh ek element apni correct-position pe aa jata hai..
// Thus toh "selection" ka mtlb ki position select krna for finding-out element for that selected-position

// Now aab apn yeh dekhenge ki apn particular position k liyeh uska element kaise find krenge..
//In this phle apn intial-starting position ko select krenge mtlb intial position pe i, jand k lenge.. we will compare always compare j with k and when j crosses the array.size then we simply swap the i with k.
// Where yaha "i" mtlb selected-position pe element and "k" mtlb smallest-element and "j" mtlb traversing-krne-pe-jo-element-mil-raha hai voh. Thus toh apnko traversing-element k-element se smaller milta hai toh mtlb smallest-element toh voh hai, thus toh j=k kr deteh and again j ko traversing kr vateh hai..
// As yeh "selection-sort" idea same esseh hai ki suppose class meh ek-line meh benches hai, and apnko unn benches pe bethe students ko incresing-height-wise-order meh bithana hai, thus toh apn simply sbse phle 1st-bench ko select krenge and uss bench pe bithe-student ki height ko agle-bench se compare krenge and agr voh uski height choti hoti hai toh apn ess baat yaad rkhenge and usseh agle wale element ko dekhenge agr uski badi hoti usseh toh mtlb abhi 2nd-becnch hi smallest hai and so..onn krteh rhenge upto last-bench and bich meh agr apnko koi orr smaller height milti hai toh apn usko smallest bana denge and at the end apne pass smallest element and uss smallest element ko apn ith-element se replace krdenge...

// Thus toh "selection-sorting" meh 2 cheeze hoti hai selecting the position and finding-the-element-for-it

// now aab apn "selection-sort" ko analyize krenege and analyize simply ek example lenge and uspeh "selection-sort-process" krke uske result se generlize kr lenge and vohi apne "selection-sort" ka Analysis hoga..

// So from the above-example... (click the pic-of it)

// No.-of-comparisons = 1+ 2+3...+(n-1) = n(n-1)/2 = O(n^2)

// No.- of - swaps = 1 + 1 + 1 + 1... = (n - 1) = O(n).Note - point : -as yahi ek hi Algorithm hai jo minimum swaps krta hai.And yeh yeh minimum swaps isliy hoteh hai... q ki apnee 2 - extra variables le rhke hai.Toh unke basis se check kr leteh hai, thus toh baar - baar swaping krne ki jarurat nhi pdti.

//🍕as like "bubble-sort" One-interesting-baat-about "selection-sorting" ki apnko 1-pass pe 1-smallest element mil jata hai mtlb uski index mil jati hai, and 2-paases pe 2-smallest miljateh hai ..and so on "k-passes" k pe apnko k-smallest element line-wise mil jatehh hai...
// Thus toh yeh yeh wali bhi kabhi questions, problems meh jaruri hoti hai ya puchi bhi ja skti hai, then toh phir apn simply "selection-sort-pass" ko k - times simply chala denge... And we our answer....
