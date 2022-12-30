//🔥💲🍕 AS toh YAHA pe apn Strings ko Anagrams k liyeh Check krenge mtlb Check krna dekhenge..  🍕💲🔥
// Now "Anagram" define hota hai for 2 or more strings k liyeh, on the basis ki voh strings exactly same "characters" se milke bani huyi hai mtlb koi ek-jyada and na koi ek-kam character, mtlb ki apn simply esseh bol sktehh hai ki "Anagram"-Strings voh hoti hai strings hoti jinki "size"-same-hoti-hai , jinke characters-same hoteh hai , and haan ki voh characters diff-diff permutation meh ho sktehh hai and morely hotehh hi hai.
// anagrams mtlb letters same hai , but unko arragement different hone ki vajah se unke diff-diff words ban jatehh hai..
// jaise:- thus toh jaise "rat" ka anagrams kya ho sktehh hai: jaise "tar" or "art" or etc.. wher yaha "tar" koi anagram nhi hai "rat" ka q ki here "tar" is meaningless but phir yeh "anagram" khelata hai.
// and kisi ek word k kafi mtlb multiple anagrams ho sktehh hai and voh word unn sab words se voh ek dusre k anagrams khlayenge..

#include <bits/stdc++.h>
using namespace std;

// as toh yeh kaam bhi apn 3-tariko se kr sktehh hai:-
// 🌟1Method1:- Simply by taking one-one-element from the str1 and then Searching it in the str2. as agr voh present hota hai toh thik hai and toh apn phir alge-element pe kaam krenge , otherwise we will simply and directly return-that-Strings-are-not-Anagram-of-each-other.

// 🌟2.Method2:- by-Hash-Table technique.
// as yeh Method mostly same as it is Finding-Duplicates-using-Hash-Table k jaisa hi hai , mtlb voh Hash-table ki size decide krna (and notice-point 📔📔 ki:- character-array (mtlb strings) meh essi hi Hash-table define and decide hoti hai, thus toh yeh wali baat apnko hamesa kii character-array k liyeh apnko esi Hast-Table hi use krni hai.  ), and phir apn phle str1 ko scan krke hash-table ko fill krlenge in the same-way. and phir str2 ko scan krne pr apn hash-table in the same-way by-1-decrement krenge.
// and then after all apn Hash-table ko scan krenge and yeh dekhenge ki koi element negative hai kya , and agr hai toh mtlb koi element repeat huaa hai , and koi element greater than zero(0) hai kya , as agr hai toh mtlb str2-meh voh element present nhi hai, toh mtlb ki voh phir anagram nhi hai. thus toh overall apn simply Hash_table ko zero(0) k liyeh check krenge. agr sbhi zero hotehh hai toh mtlb apni strings anagrams hai, otherwise mtlb "anagrams" nhi hai.

void isAnagramByHash(char str1[], char str2[])
{
    condition for length of both strins are equal or not??
    int Hash[26] = {0};
    for (int i = 0; i != '\0'; i++)
    {
        Hash[str1[i] - 97]++;
    }
    for (int i = 0; i != '\0'; i++)
    {
        Hash[str2[i] - 97]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (Hash[i] != 0)
        {
            cout << "No Strings are not Anagrams" << endl;
            return;
        }
    }
    cout << "Yes Strings are anagrams of each others " << endl;
}

// 🌟3.Method3- by using Bits (but yeh methods tabhi successfull hoga jab strings meh koi duplicate elements na ho.)

int main()
{
    char str1[] = "ajayya";
    char str2[] = "jayaez";
    isAnagramByHash(str1, str2);

    return 0;
}