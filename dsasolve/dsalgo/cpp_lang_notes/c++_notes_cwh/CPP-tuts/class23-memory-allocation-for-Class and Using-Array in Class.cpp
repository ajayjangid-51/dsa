// YAHA pe apn Class-user-defined-type-of-data k liyeh Memory-allocation and Using Array in Class k bareh meh dekhenge:

/* Memory-Allocation for "Class-User-defined-datatypes-Variables" mtlb simply boleh toh for "class"::
// 👿: AS particular-types-of-data k liyeh memory ek single bada particualr memory-container hota hai and uss container meh hi uske dedicated-datatype k liyeh jo memory-structure allocate hota hai voh ess particualar-bade-memory-container meh hi hoteh hai.
// Thus now particular-Class-User-defined-memory-Structure k liyeh bhi ek parent memory-container allocate hota  hai but ess Parent-Container meh 2 more parts hoteh hai jinmeh first-part toh class-functions k liyeh hota hai and 2nd-part is for ess class-structures k liyeh.
// AS ess essehi Structuring se phir jab apn class-copy banteh hai (mtlb koi-si-bhi-class-user-defined-memory-structure memory meh allocate krteh hai then ) then vaha pe phir uss class k functions har variable-memory-structure meh allocate nhi hoteh mtlb kisi bhi variable-memory-structure meh allocate nhi hoteh as voh toh parent-Container-k first-memory jismeh class-function store hoteh hai uss sub-parent-memory-container meh allocate hoteh hai.
// thus toh overall boleh essih memory-Structuring apni memory-space bachti hai as jo ki programming krne meh ek bohat valuable-cheez hai.
*/

/* Using Array in Class:
 
*/
#include <iostream>
using namespace std;

class animaltypestructure_for_data
{
    int a = 31;
    int arr1[10];
    char arr22[15];
    void prvfn1(void)
    {
        // for (int i = 0; i <= 10 ; i++)
        for (int i = 0; i <= (sizeof(arr1) / sizeof(int)); i++)
        {

            cout << "Enter tha value for array means enter the your all subject's marks at the inder-no " << i << endl;
            cin >> arr1[i];
        }
    }

public:
    char arr2[3];

    void pubuserinputtakingfn()
    {
        cout << "so first you have toh set the marks-data" << endl;
        prvfn1(); // as yaha pe function ki nesting kr di hai.
    }
    void showarraydata(void);
};
void animaltypestructure_for_data::showarraydata(void)
{
    int i = 0;
    while (i <= 10)
    {
        cout << "the marks at index-no " << i << " is " << arr1[i] << endl;
        i++;
    }
}
int main()
{
    animaltypestructure_for_data ajumarks;
    ajumarks.pubuserinputtakingfn();
    cout << "now if you want to see your inputed-marks for rechecking then type yes otherwise no" << endl;
    cin >> ajumarks.arr2;
    if (ajumarks.arr2[0] == 'y' && ajumarks.arr2[1] == 'e' && ajumarks.arr2[2] == 's')
    {
        cout << "your data is here" << endl;
        ajumarks.showarraydata();
    }
    // as agr apn sari if if conditions likhteh then sari sab if-conditions check hoti hai. and agr apn if-else-if conditions likhteh hai then sari conditions cheez nhi hoti mtlb koi bhi conditions true hone k baad orr koi conditions cheeze nhi hoti thus , toh apn accordingly kr skteh hai jisseh apna kaam bhi ho jayeh and apne program ki time-complexity(jo actually meh input-size k liyeh define hoti hai) kaam rhe.

    // else if (ajumarks.arr2 == "no")
    else if (ajumarks.arr2[0] == 'n' && ajumarks.arr2[1] == 'o')
    {
        cout << "you entered no. so bye-bye" << endl;
    }

    return 0;
}