// // YAHA pe apn Dangling-Pointer k bareh meh dekhenge:
// // toh thus simply boleh toh Dangling Pointer voh pointer hota hai jo kisi freed-memory(mtlb abb voh memory hai hi nhi ) ko point krta hai mtlb uss memory-container ko point kr rha hai jiska content delete kr diya gya ho, mtlb voh container free hai. thus toh actually apn ase bol skteh hai Dangling-pointer meh ek empty Container ka address stored hota hai. ya phir apn ase bhi bol skteh hai ki voh Pointer-container jo kisi empty Container ka address store kr rha ho usee  Dangling-Pointer khteh hai.

// // and now ki yeh Dangling-Pointer actually meh banaya kaise jata hai ya banta kaise hai. thus toh Dangling-pointer mostly ban hi jata hai as bcoz jaise suppose koi pointer hai voh kisi object ko point kr rha hhai mtlb uss obeject-container ka address store kr raha hai. thus suppose programmatically ess object meh cheeze store hone wali thi but kisi reason voh cheeze kisi or object-container meh store kr di gayi ya phir ess object ko hi delete kr diya gaya hai thus then toh mtlb yeh object khali rhe gaya ya hai hi nhi , mtlb sidhi common language meh boleh toh mtlb yeh object toh latak gaya mtlb eske pass jo cheez aane wali thi voh nhi aayi thus , toh dangling-container ko point krne wala pointer Dangling-Pointer khelata hai.

// // Causes of Dangling-pointer formation:
// /*  1.Deallocation of memory (mtlb voh memory deallocate kr di gayi hai mtlb voh memory aab allocate nhi hai mtlb voh memory-part aab hai hi nhi.)
//     2.Returning Local variables in function calls. (kisi function meh in the return koi local variable dedena, thus toh agr kabhi koi pointer kisi variable  ko point kr rha ho and uss variable meh koi function-store ho mtlb usmhe uski return-value store ho and voh return-value koi Local-varialbe ho and voh variable hi uss return-value k scope se bahar ho. then vaha voh Dangling-Pointer ban jayega.)
//     3. Variables out of scope  (as jaise apn ki local ko kahi uske scope k bahar se kisi pointer se point kr rhe hai then mtlb voh variable ya container toh hai nhi na.)