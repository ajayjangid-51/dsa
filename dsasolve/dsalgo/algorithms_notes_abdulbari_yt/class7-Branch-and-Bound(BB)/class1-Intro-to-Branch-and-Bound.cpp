//๐ฅ๐ฒ๐ Now YAHA apn "Branch-and-Bound (BB)"-statergy dekhenge.. ๐๐ฒ๐ฅ
// BB is only used for solving optimization-problems and inthat only "minimization-problem"
// Anyway apn maximization-problem ko solve kr sktehh hai by "BB" , as simply first coverting maximization-problem to minimisation-problem

// So toh now aab apn simply "Branch and bound" ko ek simple problem leke samjenge and that problem is   "Job-sequencing-problem"
// As ess job-sequencing-problem meh ........

// Now toh ess problem k liyeh apn phle toh simply state-space-tree generate krenge.. as toh apn 2-tarike se state-space-tree generate kr sktehh hai..
//๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ  see pic-1 :- for seeing that 2-tarike.. ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ
// where Method1:- is called subset-representing-method (or variable-sized representing-method)
// and Method2:- is called constant-size-representing-method

//๐๐ So, toh apn always "Method1" hi follow krenge.. ๐๐
// As ess Method ko apn 3-diff tarike se kr sktehh hai...
// 1.FIFO-Branch and Bound (as mtlb esko krne k liyeh mtlb esmeh apn "Queue" ka use krtehh hai for doing this)
// 2.LIFO-Branch and Bound (and esmeh apn "Stack" ka use krtehh hai)
// 3.least-count-Branch and Bound:- (as esmeh apn "Cost" ka use krtehh hai , mtlb apn har node ko cost bhi assign krethh hai , and then phir minimum-least-cost wale node ko expand krtehh hai.)

//๐๐Note-point:- ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ  see pic-2 for seeing that in "BB" we follow the tree-making in "BFS"-manner ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ

//๐ฒ๐ M1:- FIFO Branch-and-Bound ๐๐ฒ
//๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ  see pic-3 :- for seeing this method ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ
// Now after constructing "SST" Following the path from root-to-leaf gives uss the jobs-we-are-taking . Like in above example we are J1 & J2 and second-time we are taking J1&J4

//๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ  see pic-4 :- for this imp-point ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ ,๐ฟ๐very-imp-Note-point:- ki yaha jaise apn tree ki 2nd-branch meh Job-2 consider kr rhe hai mtlb apn Job-1 ko discard kr rhe hai, and yehi mast cheez hai about the "branch and bound" ki eseeh apn discardation krke solution find krletehh hai thus toh allover "bb" se mtlb apn esseh discardation kr sktehh hai for finding the solutio

//๐ฒ๐ M2:- LIFO Branch-and-Bound ๐๐ฒ
//๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ  see pic-5,6:- for seeing this Method:- ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ

//๐ฒ๐ M3:- Least-Count Branch-and-Bound (Firstly expanding the node with least-cost..) ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ  see pic-7 :- for this M3 ๐ผ๏ธ๐ผ๏ธ๐ผ๏ธ ๐๐ฒ
