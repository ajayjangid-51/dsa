// operating-system k functions meh se yeh filesystem bhi os ek kafi important functinality hai.
// filesystem is a software which manages files.
// managing files mtlb storing-data and retrieving-data in the harddisk/from the harddisk.

// os files ko manage krta hai, and agr thoda exact boleh toh os meh filesystem_modules hotehh hai joki voh files ko manage krtehh hai.
// jaise windows-os meh "ntfs"-filesystem_module hota hai , and jaise "docs"-os meh "fat" naame se "filesystem_module" hota hai , linux meh "unix-filesystem-module" hota hai , linux meh "extended naam se filesystem_module" hota hai , bade big-data k liyeh "zfs filesystem hota hai."

// so toh filesystem-software krta kya hai ki jaise apn koi file/folder(mtlb files) download , copy kr rhe hai then filesystem unn 1gb files ko logically multiple blocks meh divide krta hai , and then phir enn blocks and plater's-track-sectors ki mapping krta hai. and phir ess mapping-data ko store krke rkhta hai takki jab kabhi bhi ess data ko vapis retrieve krne ki request aayeh toh uss mapping-data ki help filesystem uss data ko retrieve krsake.

// notepoint:-
// databases meh toh data in terms of tables/objects form meh store hota hai and whereas apne computers meh data in form of "files" store hota hai. thus toh mtlb isliy database and apna local-storage ekdusre se aseh different hai, and esi manner meh database-management-system(dbms) and file-system alg hai, mtlb dbms toh data ko in form tables/objects meh store krta hai and filesystem apne data ko in form of "files" krta hai.
// file can be of any type:- (mtlb like jaise:- .txt , .cpp , .js , .xls , .png , .jpeg , .pdf , .mp3 ,   .mp4 etc..etc..)
// allover apn aseh bolsktehh hai ki files are managed by filesystem-software and tables/objects are managed by dbms-software.
// 4.folder/directory/repository mtlb ek hi hai ki it is collection of files.
// 5. now aage apn baat krenge files k bareh meh ki jaise files k bhi kuch attributes hotehh hai, files-operation(copy,create , write , modify , delete  , truncate)