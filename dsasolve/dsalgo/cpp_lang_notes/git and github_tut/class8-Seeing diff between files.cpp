// YAHA pe apn Changes dekhenge between apne commits-commits k bich meh ,  last-commit and modified-staging-area k bich meh and last-commit and working-dir k bich meh.. etc etc..

// and yeh kaam git k kuch commands se krteh hai:
/* 1. < git diff>  (as yeh command se staging-area meh present-files or folders and staginging-area ki modified-files or folders k bich ka diff deta hai.) */
// jaise mtlb apnne 3-files stage-area meh daal di and then unn 3-files ko commit krne se phle apnne unmeh se ek ya doo kisi file ko edit kr diya hai , thus toh yeh <git diff> command apnko enn modified-files-of-staging area jo ki apn staging-area se bahar nikall gayi hai, and voh jo staging-area meh present-unmodified-file mtlb locked-files jinko edit kiya hai unke bich ka diff apnko milta hai.
// as apn janteh hi hai ki staging-area meh files ko lane se unn files ek locked-copy ban jati hai jo ki phir commit ho jati hai mtlb unka ek commit-folder ban jata hai.

// 2. <git diff --staged> ( as apn ess command se staging-area mtlb current-meh jo commit-folder banne wala hai uske bich meh and last-commit k bich meh difference show krta hai.) note-point: As mtlb ki esseh sirf staging-area meh present-file hi last-commit-folder meh voh files hi commpare hogi mtlb sari files compare nhi hogi of last commit and this current-will-commit q ki baki files toh same hi hai thus toh agr files same hoti hai then phir difference-show nhi hota .
// as jaise appne apbhi 1-file stage-area meh daal rkhi then eska mtlb hai apn jo commit krne wale hai usmeh ek file-hogi and baki files toh last-commit wali hi hogi, thus toh mtlb current-will-commit and last-commit meh jo diff hai vahi apnko show hoga , thus isiliy staging-area meh present files ka difference show hota hai , as q ki baki files toh same hi hai na isiliy.

// Showing-way-of-file-diff
/*
1. as jo bhi line meh apnnne backspace use krke kuch delete kiya ya  mitaya hai voh-line red-color show hoti hai , thus toh mtlb red-color meh line mtlb ki ess line meh kuch deletion huaa hai paka 
2. and red-line k just niche wali uss deleted-line k baad jo line likhi gayi hai voh show hoti hai.
3. white-line mtlb voh line dono-files meh same hi thi and same hi hai.
4. and baki +green-lines , just simply ek-dam newly added line hoti hai.
5. and as apnko dono files k bich ka diff line-by-line hi show hota . as mtlb apn sirf white an red lines ko dekhe toh mtlb voh apni purani file thi , and agr apn white-line and green-line ko dekhe toh mtlb voh apni exact new mtlb after-modification file hai. and agr apnko kuch nhi mtlb koi bhi line nhi dikhti hai toh mtlb voh file empty thi ya empty hai.
*/