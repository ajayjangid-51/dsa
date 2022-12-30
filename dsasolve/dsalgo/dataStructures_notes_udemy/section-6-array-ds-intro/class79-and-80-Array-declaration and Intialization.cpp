// AS YAHA pe apn Array-Declaration and Intialization and accesing all Array-elements dekhenge...
// AS Array-Declaration mtlb Array ko memory-meh allocate krna.. , thus toh esseh toh apn janteh toh hai ki Array ko declare kaise krteh hai in the memory meh in terms of code. as mtlb memory meh apnko koi bhi kaam krna hai then voh toh apn Code ki-madad se hi krteh hai na, as mtlb sirf Code ki madad se hi kr skteh hai, thus toh mtlb apn voh "Code" dekhenge jisseh apn Array ko Declare kr skteh hai (offcourse in the memory meh hi) as programming meh sara koi bhi Data "Memory" meh allocate hota hai na..
// thus toh mtlb apn array-declaration krne ko chota-sa,shortly rewise krenge.

// all a[4];
// as Array ko define or declare krne k orr bhi bohat sare tarike hai, which all are yeh niche hai...
/*
1.simple and short:  
    int arrayname[array-size-in-integer];  // as esseh initialization-by-garbage value apne-aap hi huaa rheta hai.  as like this:-              ___________________________
    //                               | ? | ? | ? | ? | ? | ? | ? |

2.declaration and intialization with different-values::
   int arrayname[array-size] = {v1 , v2 , v3 , v4 or data4 , upto...size-of-array };
// as value and data, or data mtlb kisi cheeze ki value hi hoti hai.

3.declaration with partial-intialization with values and other-partial-intialization automatically with "zero"
                                           ___________________________
    int arrayname[array-size] = { 2, 4};  | 2 | 4 | 0 | 0 | 0 | 0 | 0 |
                                           
4. declaration with intialization with value-as "zero"
    int arrayname[array-size] = {0}

5. declaration without inputing the size but bcoz of with initialization size-automatically set ho jati hai..
    int arrname[] = {2,4,6}  // as thus toh esseh array of size-3 create ho jata hai.. and Note-point: as esseh only for Array-declaration k liyeh toh size very-mandatory hai as otherwise apnko error mil skta hai.

*/

// and Importantly ki as apnko Memory meh cheeze ko kaise krna , kaise handle krna hai voh kafi sahi hai aata hai, and orr bhi baki cheeze apn sikh rahe and sikhteh rhengee...


// Implementation-of-code for declaration and Initialization of Array:-
#include<iostream>
using namespace std;

int  main(){
    cout << " hey hello world of brothers ji kaise ho";
    int arr1[4];
    int arr2[3] = {1 , 23 , 5};
    // int arr3[];  // as yeh error hai.. mtlb esseh line-of-code se apnko error show hogi as q ki apnne size-of-array specify nhi ki hai na esliy..

    int arr4[6] = { 2, 5};
    int arr5[10] = {0};

    // Accessing all Array-elements..
    for(int i = 0; i<6 ; i++){
        // cout << *(arr4+i) << "  ";  // or yaa apn directly and shortly esehi bhi kr skteh hai...
        // whereas yaha pe *(arr4+i) ka mtlb ki value-at-this-address.
        // Note-point: as yeh array-name se ek pointer bhi always hota hai.  

        // note-point:- as apnko hamesa dhyn rkhna hai ki ess word(mtlb word-code) ka kya mtlb hai ,mtlb yeh konsi cheez ko specify kr raha hai jaise yaha esmeh:- *(arr4+i) arr4+i address-hai, whereas arr4[i] kisi container-ka-naam hai. toh mtlb apnko dhyn rkhna hai ki konsa word kya hai , and yeh wali baat apnko "type-specifier(jo ki apn identifier-name k phle lagateh hai)"-se and ya phir "concepts" pata chal jati hai..
        
        // cout << arr4[i] << "  ";  // as mtlb q ki arr4[i] ka mtlb *(arr4+i) hi hota hai..
        cout << i[arr4] << "  ";

    // As jaise apnne phle kaha tha na ki Array meh contiguous-container hoteh hai, thus toh mtlb unn sub-containers k addresses bhi contiguous hoteh hai...


    }
    for(int i = 0; i<6 ; i++){
        cout << &arr4[i] << endl;
    }
    return 0;
}

// NOw aab aage apn Static and dynamic Array k bareh meh dekhenge......
