// As NOW YAHA pe apn 2D-array k bareh meh dekhenge.... mtlb jaise 2D-array kay hota hai , 2D-array ko memory meh kaise allocate krteh hai mtlb 2D-array ko kaise define(mtlb declare and initialize) krteh hai and kuch other etc..etc batehh.

// what is 2D-array:-
// as 2D-array ka mtlb ki array ka sub-container bhi ek array hi hoga. mtlb array meh element as a array hi hai. and as 2D-array  3D-array meh array-meh-array-meh-array mtlb array meh sub-container bhi as array hoga and uss sub-container meh sub-container bhi array hi hoga.and as like this for 4D-array , and ..so..onn jinko simply phir multi-dimensional-array bol diya jata hai..
// as very commanly 1D-array , 2D-array and atmost 3D-arrays hi use hoteh hai, but essehh toh apn multi-n-dimensional-array bhi bana skteh hai, but mostly use 1D , 2D and 3D-arrays ka hi hota hai..

// Now aab apn 2D-array ko declare krna dekhenge::
// int arrayname[size-of-array-in-integer][size-of-sub-container-array-in-integer]; // where size mtlb number-of-containers.
// jaise for-eg: int arr[3][4]; mtlb 3-rows and 4-columns. and Note-point: ki 2D-array ko hi simply "Matrix" bhi bolteh hai.

// as actually toh memory meh 2D-array ess tarah se allocate hota hai.. as mtlb jaise: a[3][4] mtlb 3-main-part and then har 3-main-parts meh 4,4,4 sub-parts honge as like this.

//    _________________________________________________________________________
//   [ A00 | A01 | A02 | A03 ][ A10 | A11 | A12 | A13 ][ A20 | A21 | A22 | A23 ]  
//  
// but commanly 2D-array ko apn ess tarah Matrix-form meh represent krteh hai... q ki yeh phir aasaan easy hota hai for doing work on it. as like this:-
/*  
         ___________
    0   |__|__|__|__|
    1   |__|__|__|__|
    2   |__|__|__|__|
          0  1  2  3


//  as yeh a[2][3] kuch esstarah resolve hota hai *(a+ 2*3).. as toh mtlb yeh apne pass ek "ease" hoti hai haan ann essehh easily 2D-array ko access kr skteh hai..
*/

// 2. declaration and intialization simultaneously::
// int a[3][4] = {{2,4,6 , 8} , {4,8 , 10 , 12} , {5,10 , 15 , 20 }};



#include<iostream>
using namespace std;

int main(){
// Method-1: as above mentioned (2D-array created completely in stack )
// int aa[4][2];
int aa[4][2] = {{2,3} , {1, 23}, { 1,3 } , {1,3}};
// as simultanous intialization meh apnko intialization row-wise krna hota hai mtlb phle first fill 1st-column , then 2nd-column , then 3rd-column and soo.onnn....
// in general-simple and directly ess syntax ko esseh samaj skteh hai ki: aa[no-of-rows][no-of-columns] or ya phir aa[no.-of-rows][no.-of-elements-in-each-row]
// as columns mtlb no-of-elments in row ( as now aab apnko yeh column wali cheez acche se visulize ho jayegi..)
// as har jagah element mtlb container hi hota hai as element container meh hi store hota hai na, thus toh agr element hai toh mtlb phle container hai.


// Method-2: (2D-array partially in stack and partially in heap)
// Now allocating the 2D-array in the "heap"
    int *p;
    // p = new int[3][4];  // as toh apn heap meh ess tarah 2D-array allocate nhi kr sktehh... thus toh for allocating 2D-array in heap apnko ess tarah se krna hota hai::

    // first creating the array-of-pointers in stack and then creating arrays-in 
    int* pp[3];
    pp[0] = new int[4];
    pp[1] = new int[4];
    pp[2] = new int[4];

    pp[0][1] = 20;

    cout << pp[0][1] << endl;

    cout << pp[0][2];

// method-3  (2D-array completely in heap)
    // Double-pointer:--- (mtlb pointer to pointer mtlb pointer meh kisi or pointer ka addresss hai. as special hai q ki pointer-ka-adress bhi special mtlb apnko specify krna hota hai na at the time of declaration of any container , ki esmeh kya cheez store hone wali hai jaise pointers k liyeh apn yeh specify krteh hai ki ess pointer meh konse-type-k-container-ka-address store hone wala hai, jaise int-type-container k apn int specify krteh hai, and now but jab pointer meh apnko pointer-container ka address store krna hoa then vaha pe apn **(double-star) -mention krteh hai.. )
    // thus toh double-pointer ka most and main use "heap" meh pointers-allocate krne k liyeh hota hai..
    // and same like double-pointer ,triple , quad-pointer bhi hoteh ho skteh hai , hoteh hi hai but enka itna use nhi hota.

    cout << "whats up brother" << endl;

    int** dp;
    dp = new int*[3];
    dp[0] = new int[4];
    dp[1] = new int[4];
    dp[2] = new int[4];
    cout << endl;


    dp[2][2] = 21;
    cout << "whats up brother" << endl;
    dp[2][1] = 11;
    cout << dp[2][2] << endl;
    cout << dp[1][2] << endl;
    cout << dp[2][1] << endl;

    cout << "whats up brother" << endl;
    // Accesing 2D-array:
    // as apn nested-loops se 2D-array ko access krteh hai and accesing row-by-row hoti hai mtlb phle 1st-row, then 2nd-row , then 3rd-row.. and soo..on....

    for(int i = 0; i< 5; i++){
        for(int j=0 ; j< 5; j++){
            pp[i][j] = i+j;
        }
    }
    for(int i = 0; i< 3; i++){
        for(int j=0 ; j< 4; j++){
            cout << pp[i][j] << "  ";
        }
    }

    // as thus toh overall apne pass 2D-array create krne k(mtlb memory-meh create mtlb memory-meh allocate krne k) 3-tarike hai. and enmeh se apnn koi-sa bhi as per our requirement use kr sktehh hai.. and as aage kabhi bhi apnkno ess 2D-array ki jarurat pdi then apn enhi 3-tariko meh se koi bhi ek tarika use krke ;simply 2D-array create kr lenge..
    return 0;
}

// as now aage apn yeh dekhenge ki compiler "array" ko kaise manage and handle and krta hai mtlb in the memory kaise handle and manage krta hai simply mtlb ki "array" memory meh kaise allocate hota hai.as yeh wali cheez apn esseh jante hi hao lo kaise "array" memory meh allocate hota hai. and jab array-accessing hoti hai k time jo representation-conversion hota hai voh formula dekhenge ki voh representation konse formulae meh convert hoti hai.. jaise apn janteh hi hai jab at the time of array-accesing apn esseh arr[i] likhteh then yeh (arr+i) meh resolve hota hai. toh in-short and simply apn yahi dekhenge ki 1D-array , 2D-array , 3D-array .. and nD-array accessing-code kismeh "resolve" hota hai mtlb kismeh "resolve" kiya jata hai by the compiler.