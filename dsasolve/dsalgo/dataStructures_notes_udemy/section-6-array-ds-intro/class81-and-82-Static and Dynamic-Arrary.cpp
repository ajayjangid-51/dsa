// NOW YAHA pe apn Static and Dynamic Array dekhenge:::
// As now agr apn phle simply boleh toh mtlb ki yeh Static and Dynamic 2-diff repect meh define hoteh hai: 1st- w.r.to memory-allocation, thus toh yaha w.r.to this static ka mtlb allocation at the compile-time hi set(,mtlb "decide") hogaya hai , and Dynamic mtlb ki allocation during the programm-run-time hoga mtlb voh allocation program-run-time meh kabhi ho skta hai jaise in the just-starting-moment , in-the-middle-moment, or last etc.etc..
//   and 2nd- w.r.to array's-Size mtlb array ki size kaisi hai mtlb static hai ya dynamic hai where static mtlb fixed-size and dynamic mtlb "not-fixed-size" thus toh dynamic-array mtlb voh array jiski size runtime pe decide hoti hai, thus toh size variable hoit hai mtlb kuch bhi ho skti hai as it depends upon user. but-apn ek note krenge ki "dynamic-array" mtlb yeh nhi hota ki dynamic-array voh hota hai jiski size apn increase or decrease kr skteh hai, as voh toh "Vector" hota hai. as toh "dynamic"-array toh  allocate hoti hai. can be changed means it can be decrease or increase.

// note-point: as C-lang meh dynamically-allocated array mtlb voh obviously heap-meh hi allocate hota hai, but C++ meh dynamically-allocated array stack or heap dono meh ho skta hai, as C++ meh dynamic-array in stack bhi supported hai.
// as "dynamic" ka mtlb hi yeh hota hai ki "runtime pe" , thus toh dynamic-array mtlb runtime-pe allocate hone wala array or dynamic-array mtlb voh array-jo jiski runtime pe size-decide and allocate hota hai.

// as C-language meh toh apn run-time pe array-size decide krke allocate nhi kr skteh hai but C++ meh apn yeh kr skteh hai.. mtlb run-time pe array ki size decide krke usko allocate kr skteh hai.. as like this:
/*int n;
cin >> n;
int arr[n];
*/ 
// as yeh sirf only c++ meh hi valid hai, C-language meh yeh supported nhi hai mtlb C-langugae meh apn array-size runtime pe decide nhi kr skteh hai, sirf only on compile-time pe hi apnko array-size decide krna hota hai..

// Array in "Heap-memory"
// as jaruri nhi hai ki "heap" meh Array only dynamically hi allocate hota hai or mtlb runtime-pe hi allocate hota hai, yeh jaruri nhi hai in both C and C++ meh as mtlb dono kaam hi ho skteh hai both statically(mtlb size-decided at compiletime only ) and dynamically(mtlb size-decided at run-time only) and allocation toh obvivously runtime pe hota hai na, compile time pe kaise ho skta hai mtlb nhi ho sktaa.
// as C language meh yeh supported hai ki apn jab "heap" meh array ko allocate kare then vaha pe voh "heap" meh array-size decide apn dynamically kr skteh hai mtlb runtime pe kr skteh hai.

// now one-more Note-point ki " as Stack-memory , global-memory k alava koi si bhi memory jaise heap-memory , hard-disk-memory etc koi bhi memory ko access krne k liyeh mtlb usmeh stored data ko access krne k liyeh apnko 'Pointer' ki need hoti hai mtlb 'address' ki need hoti hai". thus jab apn "heap" meh memory-containers allocation krteh hai then vaha pe unn heap-memory-containers ko access krne k liyeh apnko unpe pointers chahiyeh mtlb unn memory-containers k addresses chahiyehh.

// allocation-memory in Heap:
// as c++ meh apn yeh kaam easily and simply "new"-operator ka use krke kr skteh hai.. as like this:
// int* p;  // as yah specifier "int" mtlb yeh pointer kisi integer-container ka adderss store karega.
// p = new arr[5];  // as c++ meh apn ess tarah array-allocate krteh hai. mtlb apnko jo bhi cheez heap-meh allocate krni simply just uss container ka naam(mtlb "datatype") likhna hai. and array k liyeh simply square-bracket-with-size specify krna hota hai.

// and for C-language meh heap-allocation mtlb heap-meh-allocation ess tarah kiya jata hai:
// p = (int *)malloc(n*sizeof(int));   // as yeh malloc-fn null-pointer allocate krta hai, toh apn usko type-caste kr leteh hai in required-type of pointer.

// as then apn ess pointer se mtlb ess address se heap-memory ko access kr sktehh hai..

// Note-point: as toh apnko heap-meh allocated memory apnko khud ko hi disallocate krna hoga after the use-of that memory, as otherwise "memoory-leak" problem ho jati hai, as mtlb apnko pata hi nhi chalega ki memory-utilize ho rahi hai and mtlb ek tarah se leak hi hai, jaise cycle-tyre pancher ho jata hai then vaha tube-meh air leak hone lg jati hai and as apnko phle pata nhi chalta ki ohh air-leak ho rahi hai , but baad meh last meh pata chalta hai ki ohh air-toh hai hi nhi , as like this only "memory-leak" hota hai and that is bcoz of not releasing or disallocating the allocated-memory in heap:
// as toh ess tarah heap-meh allocated memory ko vapis se disallocate or mtlb release kiya jata hai..

// in c++ :- delete []p // as square-bracket array k liyeh use kiya jata hai otherwise apnko simply pointer ka name likhna hota hai.

// in C :- free(p);

// Now accessing Array which is allocated in heap.


// Implementation::
#include<iostream>
using  namespace std;

int main(){
    // now phle apn static-array dekhenge in both stack and heap::
    // (as static-array mtlb apn compile-time pe size daaldenge mtlb decide kr lenge thus toh outside-veiwer k respect yeh "static" hoga.)
    int arr[5];
    arr[0] = 1;
    arr[1] = 13;
    arr[2] = 21;
    arr[3] = 3;
    arr[4] = 8;

    double* p;
    p = new double[5];
    p[0] = 22;
    p[1] = 3;
    p[2] = 1;
    p[3] = 5;
    p[4] = 10;
    // as yeh array apne "static"-array hai, as mtlb enki size compile-time pe hi decided hai.

    for(int i =0;i<5; i++)
        cout << arr[i] << "  ";
    cout << endl << " Heap-Array " ;
    for(int i= 0; i < 5; i++)
        cout << p[i] << " ";

    // dynamic-array:
    int n; 
    cin >> n;
    int arrr[n]; 

    int *p1;
    int n1;
    cin>> n1;
    p1 = new int[n1];
    // As yeh dynamic-array hai bcoz mtlb enki size runtime pe "decide" huee hai. thus toh yeh array runtime pe phle decide hoke allocate hoteh hai.

    return 0;
}

// As now aage apn allocated-Array ki siZe ko increase and decrease krna dekhenge...
