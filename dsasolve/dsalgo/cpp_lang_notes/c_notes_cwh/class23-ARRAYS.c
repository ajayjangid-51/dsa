// YAHA pe apn Objects and Arrays k bareh meh dekhenge:

// simply boleh toh Arrays voh container jinmeh one or more datatypes ko store kiya ja skta hai.
// and ess container meh as according to no. of datas esmeh sub-container ban jateh hai jinka identifier/name array-name[0], array-name[1], array-name[2] ..and so on hota hai. toh thus apnko kabhi bhi multiple data ek saat store krvane then apn simply Objects/Arrays ka use krteh hai.

// Arrays actually ek special type k container hoteh hai. bcoz enn ess tarah k Objects k liyeh kuch dedicated functions define hoteh hai,
// and haan Programming meh ARRAYs ko define krne ka alg syntax hota hai.

/*Arrays k liyeh memory allocation ess tarah hoti hai
Mtlb yeh unspecified datatype s hai mtlb enki size fixed nhi hoti hai but enke sun-part ki size fixed hoti hai jaise: koi int array hai then mtlb yeh ess array meh sub-part ki size 4bytes hai....and so on same for all datatypes

Now toh agr apnko kabhi bhi same type k multiple datas store krne ho , and vaha pe unke name itna jada matter nhi krteh ho then apn simply Voh datas Array meh store krteh hai. As bcoz toh apnko har data ki naming bhi nhi krni hoti bcoz arrays meh naming numbering se apne aap ho jati hai..

Arraya meh stored datas ko arrays ka element kaha jata hai...


And apn array meh kisi type ka data store kr skteh hai...
Simply boleh toh arrays plural hoteh hai hr datatype-container k jaise: agr apnko ek int store hai toh apn int meh stoee krteh and agr apnko multiple ints store krne hai toh apn simple int array meh store krteh hai

1-d array mtlb ek array
2-d array mtlb array k andar array thus mtlb esseh matrix bnti hai esliy apn aab 
Thus toh apn matrices solve krne wala program esseh aaray se easily bana skteh hai as bcoz as tarah jaise array[1[1]] *array[5[1]] + and so on...
Tip: apn apne physics k questions solve krne wale programs bhi likh skyeh hai as bcoZ ki apnko physics k sare concepts aateh hai...
3-d array mtlb array k andar arrray and uss array k andar ek orr array

Note:: now agr apn kisi array ko print krteh hai then vaha pe apn ek vertical list dikhee deti hai..


Thus toh agr apn same type k datas k multup datas k liyeh arrys use krteh hai the esse apna program short hai mtlb messy and cluttered nhi hoga and easy to sort out ya hr data-element ko easily access kr skteh hai by its index or address bhi hoga...thus yeh ek kafi bada use hai arrays ka...toh thus apn aab se arrays ka hi use krenge for storing same type of multiple datas*/

// C-Language Programming meh Arrays ko declare ya initialize ya define ess tarah kiya jata hai:
/*  
// 1-D ARRAY:
    1.declaration of ARRAY: apn ess tarah array ko declare krteh hai:
    //  datatype_of_data Array-name[size of array mtlb no. of data which will be stored];
    2.Initializing an ARRAY: arrays ko initialize krne k 1-tarike hota hai:
    // 1. array-name[index for element like 5] = data;    // thus means ki 5th index(mtlb 5th sub-container of array-Container) of array meh yeh data store ho jayega.
    3.Defining an ARRAY:
    //  datatype_of_data Array-name[] = { data1, data2 ,data3 ,....};
    // note-point: jb apn array define kr rhe hai then vaha pe Array ki size batana required nhi hai, mtlb size nhi daalna hota hai.

// 2-D ARRAY:
    1.declaration of 2-D ARRAY:
    //  datatype_of_data Array-name[size of row][size of column];
    2.Initializing an 2-D ARRAY: arrays ko initialize krne k 1-tarike hota hai:
    // 1. array-name[2[1]] = 5;    // thus toh esseh 2nd index element meh 1th index sub-element meh 5 store hojayega.
    3.Defining an ARRAY:
    //  datatype_of_array array-name = { {data1 , data2 , ...},{},{},....};


// 3-D ARRAY:
    similar toh 2-d array:

    // datatype_of_array ka mtlb data ka type in Array. 

*/
#include <stdio.h>
int main()
{
    // yaha pe apn ek array banayenge:
    int marks_array[15];

    // initializing array:
    // marks_array[0] = 20;
    // marks_array[1]= 30;
    // marks_array[2] = 42;
    // marks_array[4] =31;
    // marks_array[5] =18;
    // marks_array[6] =56;
    // marks_array[7] =21;
    // marks_array[8] =34;
    // marks_array[9]
    // marks_array[10] =11;

    // or:
    // marks_array = {3, 6, 7, 89, 9, 7, 10, 10, 3,4};
    int rollno_array[] = {1,3,5,3,2};

    int m = 0;
    for (; m <= 9; m++)
    {
        printf("%d\n", rollno_array[m]);
    }

    printf("the value of 5th index of marks_array is %d\n", marks_array[5]);
    printf("the value of 9th index of marks_array is %d\n", marks_array[9]);

    int i = 0;
    for (; i < 10; i++)
    {
        printf("enter the value to be stored in marks_array[%d]", i);
        scanf("%d", &marks_array[i]);
        // thus toh esseh apn apne array ko asani se fill up bhi kr skteh hai.
    }


    printf("now the updated value of 4th index element of marks-array is %d\n", marks_array[4]);
    printf("now the updated value of 5th index element of marks-array is %d\n", marks_array[5]);
int l=0;
    for (; l<=9; l++)
    {
    printf("now the updated value of %dth index element of marks-array is %d\n",l, marks_array[l]);
        /* code */
    }
    
    

    // 2-D arrays:
    int matrix_2darray[2][3] = { {2,3,4,45},{},{},{4,3,2,1}};
    // here 1st-[]-box meh 2 ka mtlb hai ki ess 2D array meh 2-array hai, and 2nd-[]-box meh 3 ka mtlb hai ki ess array k andar wale array meh 3 elements hai.
    return 0;
}

// DISADVANTAGES OF ARRAY:
// 1. jaise apnne koi bade size ka array declare kr diya, and apn usmeh sirf 20-30 data hi store krteh hai thus toh esseh baki sbhi elements khali rahejayenge mtlb unmeh garbage value store ho jayegi thus, yeh esseh memory ka Wastage bohat jda ho skta hai agr apnn ess tarah k kuch ARRAYS bana de toh.
//  2. agr apni memory continous-khali nhi hai then apn apni memory meh Arrays ko load nhi kr payenge, mtlb apn Arrays bana hi nhi payenge.
// 3.Array meh uski size k according hi no. of datas daale jateh hai. mtlb usse jada apn nhi daal skteh.
