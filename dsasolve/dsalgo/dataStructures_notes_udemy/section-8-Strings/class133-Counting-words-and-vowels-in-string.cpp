//🔥💲🍕 Counting-Words and Vowels in string:- as mtlb apn string meh presents "Vowels" count krna dekhenge and agr koi string as sentence ho then phir usmeh "words" count krna dekhenge... 🍕💲🔥

//💲🍕 1.Counting-words 🍕💲
// as words ka concept toh yeh hai ki words "white-space" se seprated hotehh hai, thus toh mtlb apn "whitespaces" k basis "Words" ko count krlenge...

//💲🍕 2.Finding-Number-of Vowels and Consonents() 🍕💲
// as vowels k liyeh toh apn simply string ko traverse krenge and traversing pe agr koi element(character) vowel se match hota hai, toh apn vaha uss vowel ko simply "note" kr lenge..

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl;

int CountWords(char *str)
{
    int whitespaces = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        // debug(str[i]);
        if (str[i] == ' ')
            whitespaces++;
        i++;
    }
    return (whitespaces + 1);
}

int CountVowels(char *str)
{
    int vowels = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        i++;
    }
    return vowels;
}

int main()
{
    char str[] = "Hello ji i am the good boy";
    int numberofwords = CountWords(str);
    debug(numberofwords);

    char str2[] = "Hello";
    int vowels = CountVowels(str2);
    debug(vowels);
    int allvowelsinstr1 = CountVowels(str);
    debug(allvowelsinstr1);

    return 0;
}