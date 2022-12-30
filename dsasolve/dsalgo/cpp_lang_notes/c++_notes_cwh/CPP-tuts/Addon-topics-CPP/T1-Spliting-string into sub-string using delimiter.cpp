//
// delimiter mtlb ek character jo ki used for denoting separation like ,(comma) , ;(semi-colon) , #  .. etc..kuch bhi mtlb jisko apn maan rhe hai as a delimiter.
#include <iostream>
using namespace std;

int main()
{

    /*
    char str[20];
    cout << "Enter the Sentence with ;(semi-colons) delimiters  " << endl;
    cin >> str;
    for (int i = 0; i < 20; i++)
    {
        if (str[i] == ';' || str[i] == '#')
        {
            cout << endl;
        }
        else
        {

            cout << str[i];
        }
    }
    */

    /* raw-Algorithm: 
    fn(str , dlchar , )
    fn(str, substr_list, dl)
    Initialize word = ""
    Initialize num = 0
    str = str + dl
    l = str.size
    
    for i = 0 to l-1     {{ mtlb for(int i = 0 ; i <= l-1 ; i++ )}}
        if str[i] != dl   {{ if(str[i] != dl){ word = word + str[i ]} }}
           word = word + str[i]  {{ else { if(word.size != 0 { substr_list[num] = num; n++ ; word = "" })}}}
        else
           if word.size != 0
               substr_list[num] = word
               num++
           word = ""

    return num  {{ return num; }}
    // 💡 As q ki Raw-Algorithm esa hi hota hai, mtlb raw-Algo in the sense of thinking-programs ki terms meh hota hai na ki writing-program ki terms meh hota hai. thus toh hamesa apnko kisi problem ko solve krne se phle uss problem ka Raw-algorithm likh lena hota hai. and then phir usseh implement(mtlb code) krna hota hai.  AS mtlb agr apne pass Raw-algorithm hoga hoga toh phir toh apn uss cheez ko aaram se easily usko Code meh convert kr skteh hai. as bas apnko apni har Problem ka Raw-Algorithm banana hai , sochna hai and likhna hai in the terms of Codeing-Programming-ki-terms-meh 💡
*/

    // visit this to continue::  https://www.geeksforgeeks.org/split-string-substrings-using-delimiter/

    return 0;
}