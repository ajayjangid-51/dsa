// YAHA pe apn Arrays and phir Pointer-Arithematic (mtlb Adresses-Arithematic ) k bareh meh dekhenge:
// Array bhi ek type of data hi hai, mtlb combo-of-multiple-primitive-datas ko apn simply array-data bolteh hai. aab NOw C++ programming meh ki apnko har array meh multiple-data ko primitive-datatype specify krna hota hai , as baki languages jaise python , JavaScript meh toh apnko esseh specify nhi krna pdta hai. as but c++ meh directly without filtering at compilation time particualr array k liyeh particular-memory-part allocate ho jata hai.
// Note-point: as jab bhi koi declare ya define hota hai , then uss Array k naam se hi uss Array ka pointer by-default ban jata hai. mtlb uss pointer meh uss Array[0]th-Container ka address(mtlb pointer) hota hai.

// Address meh 1 add krne ka mtlb uss container ka just agle wale container ka address
// And yehi pointer-arithematic hota hai bcoz pointer mtlb address hi toh hota hai.
//Container-Address meh +1 krne ka mtlb uss container k just agle wala containers
//

#include <iostream>
using namespace std;

int main()
{
    int arraydata1[] = {1, 3, 4, 52, 13, 31};
    cout << arraydata1[0] << endl;
    cout << arraydata1[1] << endl;
    cout << arraydata1[2] << endl;
    cout << arraydata1[3] << endl;
    cout << arraydata1[4] << endl;
    arraydata1[4] = 101;
    cout << "the updated value of arrarydatat[4] is = " << arraydata1[4] << endl;

    // aab now ess arraydata1-array-variable-container k naam se hi ess arrarydata1[0] ka pointer ban jata hai. thus toh apnko array-data-container k liyeh pointer banane ki jarurat nhi hai , and array-container k baki succedding-container ko access krne k liyeh apn phir pointer-arithematic ka use krke voh kaam kr leteh hai. thus pointer-arimetic ka main and mostly use array-contaier k sub-container k liyeh hota hai. as apn bina- pointer-arithematic k bina bhi kr skteh hai , but pointer-arithematic se arrays ko access krna ek-dam striaght forward and easy hai.

    // jaise:
    int a = 32, b = 31;
    // int b = 31;
    int *pointerofa_mtlbaddressofa = &a;
    int *pointerofb_mtlbaddressofb = &b;
    cout << pointerofa_mtlbaddressofa << endl;
    cout << pointerofb_mtlbaddressofb << endl;
    // 0x28fefc
    // 0x28fef8
    cout << (pointerofa_mtlbaddressofa + 1) << endl;
    cout << *(pointerofa_mtlbaddressofa + 1) << endl;

    // 📓 👿: As esseh same primitive-datas k liyeh bhi particular-dedicated meh sub-memory-part continously allocate nhi hoteh hai , but array-data k liyeh uske sub-primitive-data k liyeh continous-memory-parts allocate hoteh hai. as om line-no: 45.

    int arr1[2] = {32, 31};
    cout << arr1 << endl;
    cout << (arr1 + 1) << endl;
    *(arr1 + 1) = 101;
    // 3 = 2;
    // as yeh *(derenrcing-operator ) uss jis variable ka address hai uss variable ko return krta hai. as mtlb varialbe-name ko return nhi krta , as variable ko return krta hai.
    cout << arr1[1] << endl;
    // as like this:
    // 0x28fef0
    // 0x28fef4

    int *araddrss = &arr1[1];
    cout << araddrss << endl;
    cout << (arr1 + 1) << endl;
    cout << *(araddrss) << endl;
    cout << arr1[1];

    cout << "printing array-data using for-loop " << endl;
    for (int a = 0; a < sizeof(arraydata1) / sizeof(arraydata1[0]); a++)
    {
        cout << arraydata1[a] << endl;
    };
    cout << "printing array-data using while-loop " << endl;
    int i = 0;
    while (i < (sizeof(arraydata1) / sizeof(arraydata1[0])))
    {
        cout << arraydata1[i] << endl;
        i++;
    };
    cout << "printing array-data using do-while-loop " << endl;
    // int m = 0;
    i = 0;
    do
    {

        cout << arraydata1[i] << endl;
        // m++;
        i++;
        // } while (m < (sizeof(arraydata1) / sizeof(arraydata1[0])));
    } while (i < (sizeof(arraydata1) / sizeof(arraydata1[0])));

    return 0;
}