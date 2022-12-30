//🔥💲🍕 as yaha pe apn "Strings" ko compare krna dekhenge and "Strings" ko check krenge for that ki voh "string" palindrome hai kya?  🍕💲🔥

//💲🍕 1.Comparing-Strings 🍕💲
// as strings ko compare krne ki baat yeh hai ki apnko pata chal jayeh ki strings same hai k nhi.

//💲🍕 2.Palindrome- 🍕💲
// as toh palindrome k liyeh condition yeh hai ki string and reverse-of-that-string both shoudld be equal. mtlb apn phle given string ki reverse-string find krlenge.. and then phir dono string ko compare krlenge...
// palindrone ka mtlb voh word , voh phrase , voh sequence of characters jo starting se read krne pr or ending se read krne pr ek hi sound krtehh hai mtlb voh ek hi hoteh hai chahiyeh unheh starting se or ending se likhdo
// jaise "madam" , as agr apn esko from the rear-side se read krna chalu kre or write kare then voh phir yeh "madam" hi banega. thus toh apn bol deteh hai ki yeh "madam" is palindrome

// and coding ki terms meh boleh toh mtlb voh string jiski reverse-string same hoti hai , voh palindrome hai.

#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ps(x) printf("\n%s", x);
#define pi(x) printf("\n%d", x);
#define si(x) scanf("%d", &x);
#define ss(x) scanf("%s", &x);
#define debug(x) cout << #x << " = " << x << endl;
#define fo(i, start, n) for (int i = start; i < n; i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pair<int, int>> vi2d;
typedef map<int, int> mpii;
typedef set<int> si;

//💲🍕 1.Comparing-Strings:- 🍕💲
bool Compare(char str1[], char str2[])
{
    int size1 = 0, size2 = 0;
    while (str1[size1] != '\0')
    {
        size1++;
    }
    while (str2[size2] != '\0')
    {
        size2++;
    }
    if (size1 != size2)
    {
        return 0;
    }
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}

char *ReverseStrM1(char str[]);
//💲🍕 2.Finding-Palindrome:- 🍕💲
bool isPalindrome(char str[])
{

    char *rstr = ReverseStrM1(str);
    return Compare(str, rstr);
}

int main()
{
    char str1[] = "hello ajo";
    char str2[] = "hello ajo";
    debug(Compare(str1, str2));

    char palindrm[] = "racecar";
    debug(isPalindrome(palindrm));
    char palindrm2[] = "dick";
    debug(isPalindrome(palindrm2));
    char palindrm3[] = "madam";
    debug(isPalindrome(palindrm3));

    return 0;
}

char *ReverseStrM1(char str[])
{
    int size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    size++; // this is total-size of string.
    // char revstr[size];
    char *revstr = new char[size];
    int lastindex = size - 1;
    for (int i = lastindex - 1, j = 0; i >= 0; i--, j++)
    {
        revstr[j] = str[i];
    }
    revstr[lastindex] = '\0';
    return revstr;
}