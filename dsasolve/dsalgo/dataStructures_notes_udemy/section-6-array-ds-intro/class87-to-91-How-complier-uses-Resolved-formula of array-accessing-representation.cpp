// As NOW apn array-representation for accessing array ki "Resolved" -form dekhenge..

// For 1D-arrays:
// as jaise esseh arr[i] likhteh hai for accessing array's-particular-sub-container. then yeh "arr[i]" -->
// (arr+i) (where yaha "arr" mtlb first-container and "i" denotes the no.-of-container) or acche se bolteh toh (arr+i*w) (where w is size-of-particular-container) meh resolve hota hai by the compiler.

// for the if indexing start from 1 then:-
// arr+ (i-1)*w

// For 2D-arrys:
// as jis tarah apn 2D-array ko visulaze krteh hai, voh ess tarah 1D-array meh map hota hai, set hota hai.

// as 2D-arrays ki intialization 2-tarike se ho skti hai, but yeh tarika compiler pe depend krta hai ki voh konsa tarika apnata hai::-- 
// as voh 2-tarike yeh hai:
/*
1.row-major-mapping ( as row-major mapping meh apnko esseh multi-d-array ka initialization krna hota hai.. 
as like this: mtlb apnko row-wise sub-containers meh values-assign krni hoti hai. mtlb phle first-row meh values assign kro, then second-row meh and then soo..onn upto no.-of-rows.
    int arr[3][4] = { {x, x, x, x } , {x, x, x, x} , {x, x, x, x} })

// row-major-mapping ( mtlb row-wise mapping)
// int A[m][n];
// A[i][j] = arr + [i*n + j]*size0f(container-type)

// for those languages jismeh array-indexing 1 se start hoti hai.
// A[i][j] = arr + [i-1*n + j-1]*size0f(container-type)  // very-imp-Note-point: as yeh formalea meh thode jada arithematic-operations hai, thus toh yeh formula thoda costly hai in terms of time mtlb thoda slow hai, thus one-of-reason ek yeh bhi hai ki programming meh indexing "zero" se ki jati hai.

2.column-major-mapping ( as column-major-mapping meh apnko column-wise multid-array ka intialization krna hota hai: mtlb phle first-column then second-column and soo..onnn
    int arr[3][4] = { {x , x, x} , {x, x, x} , {x , x, x} , {x , x, x} } 

// column-major-mapping or representation (mtlb column-wise mapping mtlb column-wise)
// as mtlb esmeh column-wise values map hoti hai , mtlb phle 1st-column ki values series meh mmap(mtlb set or assign) ho jayegi. and then 2nd-column and soo..onnn
// A[m][n];
// A[i][j] = arr + [j*m + i]*size0f(container-type)
)

// row ki respect meh column ka mtlb no.-of-elements in row.
// and column ki respect meh row ka mtlb no.-of-elements in column.
*/

// as C++ meh row-major-mapping or representation follow hoti hai. but agr apn apna koi compiler design krteh hai then vaha pe apn koi bhi "row-major-mapping" or "column-major-mapping" dono meh se koi bhi choose kr skteh hai, dono time-related same hi hai , bas thodi understanding or mapping thoda difference aa jata hai..

// For nD-array:- (as now apn n-dimensional-array k liyeh row-major and column-major formula find-out krengee.)
/*
// as intially apne pass ek nD-array hai: 
    type A[d1][d2][d3][d4]..[dn];

// now for accessing the sub-container of this nD-array apn simply yeh esseh likhenge(mtlb yeh code-likhenge jo ki compiler samajta ho or mtlb jispeh compiler kaam krta ho voh likhenge..):
    A[i1][i2][i3][i4]...[in]; as then toh as the compilation-time ess tarah resolve hoga:

 // as for row-major-mapping k liyeh forumla hai:: mtlb ess formula meh voh-abstract-code resolve hota hai.   
    = A(mtlb L0) + [i1*d2*d3*d4...dn + i2*d3*d4*....dn + i3*d4*d5*d6...dn + ....... i(n-1)*dn + in]*w( where w mtlb size-of-container-type)

 // and for column-major-mapping meh ess forumule meh resolving hoti hai: ( as mtlb resolving is from right-to-left)
    = A + [ in*dn-1*dn-2*dn-3...d1 + in-1*dn-2*dn-3*...d1 + ..... i1]*w
*/

// HOrner's-rule //
// as Horner's rule yeh that ki apnko fourmule ko reverse-order meh likhlena chahiyeh and comman-lelena chahiyeh as toh esseh working-complexity n^2 se n meh aa jati hai, jo ki ek kafi acchi baat hai..
// as like this: jaise apne pass 4D-array hai:
// A[i1][i2][i3][i4] = A + [i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4 ]*w
// as now yaha pe apn sab-operation count kareh toh.. we get:
//  3+2+1-multiplication-opearation and 3-addition-opeartion and 1-multiplication and 1-addition-operation. and apn janteh hi hai ki ek-arithematic-operation or kaisa bhi ek-operation meh 1-unit-time lgta hai.

// and now aab apn 5D-array k liyeh dekhe.. toh..
// A[i1][i2][i3][i4][i5] = A + [i1*d2*d3*d4*d5 + i2*d3*d4*d5 + i3*d4*d5 + i4*d5 + i5]*w
// as by couting-operation-statement( as ek-operation-statement mtlb ek-operation) , we get:
// 4+3+2+1-multiplication + 4-addition + 1-multiplication + 1-addition

// AS by just generelizing from above apn nD-array-formula k liyeh no.-of-operations mtlb uss formula meh kitne-no.-of-operation-statement hai voh find-out kr skteh hai.. 
// n-1+n-2+n-3+...+1 multiplication mtlb n(n-1)/2 -multiplication + n-addition + 1-multiplication + 1-addition.

// thus toh total-no.-of-opeations is = (n^2/2 - n/2 + n + 2) = mtlb working-complexity is = theta(n^2)

// As toh now aab apn "Horner's-rule" follow krenge..
// as toh phle apn resolved-forumale ko reverse krenge... and then comman lenge...
// A[i1][i2][i3][i4] = A + [i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4 ]*w
//  = [i4 + i3*d4 + i2*d3*d4 + i1*d2*d3*d4 ]
// now takking commans
//  = [i4 + d4*[i3+ i2*d3 + i1*i2*d3]]
//  = [i4 + d4*[i3+ d3*[i2+ i1*i2]]
// as toh apn ne jitne commans ho skteh the.. utne le liyeh hai and now aab apne no-of-operation-statements (mtlb no.of-operations) count krenge...
//  3-multiplication + 2-addition + 1-addition
// so toh by generliazation nD-array k liyeh apne pass: n-1 -multiplication + n-2-addition + 1-addition == theat(n). 
// as toh apni working-complexity n^2 se n pe aa gayi just by using Horner's-rule . toh thus mtlb aage for mulit-dimensional-arrays k liyeh horner's-rule hi follow hota hai and yeh horner's-rule kafi accha and kafi sahi hai..

// For 3D-array:-
// As toh from above-formula apn 3D-array ka forumla bhi find-out kr skteh hai... simply by just putting value of n=3 as like this:
    // int A[d1[d2][d3];
    // A[i1][i2][i3] = A + [i1*d2*d3 + i2*d3 + i3]*4
// and as like same-deto this apn baki 4D , 5D etc.etc arrays k resolved-formula find out kr skteh hai...



// As array ADT banayenge , mtlb apn phle array-implement krdenge memory meh and then uss array k related sare functions banayenge jaise inserting k liyeh insert-fn , searching k liyeh searching-fn etc..etc.. sab kuch banayenge and ek-class meh sbko mtlb array ko and uske dedicated-fns ko ek saat privatly and publicly put krdenge..

