// minimalCover mtlb irreduceable-set. ,
// thus toh minimalCover mtlb apn FDs ka set jismeh koi FDs redundant(repeat) nhi ho rhi ho. and FD reduntant khne ka mtlb ki agr apn uss kisi Dependency ko remove krtehhh hai , then uss dependecy meh jo determine-krne-wala-attribute(mtlb lhs-attribute) hai, uska apnko baki bachi dependencies se closure(closure mtlb voh attribute kis-kis attribute ko find krta hai) find krna hai and agr voh closure meh agr rhs-wala-attribute aa rha hai ya nhi aa rha hai, mtlb agr aa rha hai then mtlb okay we can remove that FD otherwise apn uss FD ko remove nhi kr sktehh.

// Irreduceable set mtlb voh set jisko apn reduce nhi kr sktehh on the basis of redundant or mtlb repeated elements in the set, mtlb basically voh set jismeh elements ki redundancy nhi hai, mtlb elements ka same deto repeatations nhi hai.
// mtlb apnko functional-dependencies given hai and apnko find krna hai irredcerable-set-of-FDs find krna hai.

// notepoint:-
// jaise ki koi FD hai: D->ABC, then as per decomposition-property or mtlb general-senseofhumour apn aseh hi likh sktehh hai ki D->A , D->B , D->C .