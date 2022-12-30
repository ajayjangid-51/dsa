//🔥💲🍕 As now apn Strings meh Duplicates character find krna dekhenge mtlb simply yeh check krenge ki given string meh koi character ya characters repeat ho rhe hai kya and agr voh ho rhe hai then mtlb voh konse elements hai.. 🍕💲🔥

#include <bits/stdc++.h>
using namespace std;

// As toh Duplicates find krne k 3-methods hai:-
//  👍 1.Compare-with-other-letters (mtlb ek-element ko uthana and then usko phir baki rest-of-the-elements se compare krna and voh kisise match hota hai, then mtlb voh uss string meh duplicates elements present hai.).
void isDuplicates(char str[])
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        char element = str[i];
        for (int j = (i + 1); str[j] != '\0'; j++)
        {
            if (element == str[j] && str[j] != 0)
            {
                cout << str[j] << endl;
                str[j] = '0';
            }
        }
    }
}
// first we will apply this approach.....
void toLowerCase(char *str);
// 👍 2.Using-HastTable or Counting-the-occurences-of-elements.
// okay toh idea-of-HashTable ko use krke Duplicates and Duplicates-ki-frequency find-out krne ka tarika yeh hai ki:- as sbse phle toh apnko Hash-Table ki size decide krni hai, and toh Hash-table ki size apn decide krenge on the basis of ki apnko apne total-no-of-characters that can be present in the "string", thus toh total toh "26" characters alfabet meh hotehh hai , thus "26" characters ho sktehh hai, toh mtlb apn Hash-Table of size "26" lenge.. and aab apnko character k according unko Hast-table-index pe store krna hai. thus toh jaise 'a' ko apn index-0 pe store krenge , 'b' ko apn index-1( mtlb ('b'-97) mtlb (98-97)) pe store krenge mtlb overall apn ('char'-ascii-code - 97)th-index pe store krenge mtlb vaha uss index-value ko by +1 increment krteh rhenge...
// and thus after filling the "Hash-Table" , apn "Hash-Table" ko traverse krenge and koi bhi element >1 milta hai then usko apn print krenge with frequency.

// 🔗 see:-pic1 🔗
void DuplicatesByHash(char str[])
{
    toLowerCase(str);
    int Hash[26] = {0};
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        Hash[str[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (Hash[i] > 1)
        {
            cout << char(i + 97) << "with frequency = " << Hash[i] << endl;
        }
    }
}
// 3.Using-bits
// 🔗 class138.cpp 🔗

int main()
{
    char str[] = "Ajayy bhaii xa";
    // isDuplicates(str);
    DuplicatesByHash(str); // ✅

    return 0;
}

// hashtable kuch nhi hai, as hash-table ek array hi hai intialized-with-zero-elements. where elements are stored at the index = element-value.

void toLowerCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
};
