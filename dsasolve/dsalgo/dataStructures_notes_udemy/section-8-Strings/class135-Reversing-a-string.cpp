//🔥💲🍕 as now apn String ko "Reverse" krna dekhenge... 🍕💲🔥
// as Reversing k liyeh toh same vohi baat ki apn Reversing 2-methods se kr sktehh hai,
// method1:- by using auxilary-string
// method2:- by using two-index-pointers idea:-
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

//💲🍕 Method1:- 🍕💲
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
//💲🍕 Method2:- implementing:- 🍕💲
void ReverseStr(char str[])
{
    // int size = (sizeof(str) / sizeof(str[0])) - 1;
    // or
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    int lastindex = i;
    i = 0;
    int j = lastindex - 1;
    for (; i < j; i++, j--)
    {
        swap(str[i], str[j]);
    }
}
int main()
{

    //👿📔imp-Note-point:-as modern-compilers meh apn heap-meh-allocated-string ko modify(mtlb mutable) nhi kr sktehh, mtlb esseh ess tarah se (char *str = "string") allocated-string ko apn modify nhi kr sktehh hai, mtlb agr apn krtehh hai then apnko warning or error milegi. as apn esseh tarah se allocated string (char *str = new char[10]) ko toh apn modify kr sktehh hai.

    char str[] = "Hello brobigbooss";
    debug(str);

    char *revstr = ReverseStrM1(str);
    debug(revstr);
    cout << "the reverse string is " << ReverseStrM1(str) << endl;
    int *arr = new int[5];
    arr[0] = 3, arr[1] = 10, arr[2] = 8, arr[3] = 7, arr[4] = 5;
    cout << "the array arr is " << *arr << endl;
    char *p = new char[5];
    p[0] = 'd', p[1] = 'o', p[2] = 'g', p[3] = 'g'; // , p[4] = '\0';
    cout << " the string p is " << p << " good" << endl;

    // 🔥 🌟🌟 👿📔 👇👇👇👇👇👇 Very-imp-Note-point:-  as yeh ek mastam alg hi special-case hai ki jo apna "cout" hota hai na voh , char-array(which is allocated in "stack" or in "heap" ) ko simply and directly jab apne-aap simply esseh "cout << str" likhteh hai then yeh "cout" uss str-char-array ko pura print kr deta hai ek-dam sequence-wise. and but yeh kaam apne int-array meh etc..etcc meh nhi hota hai.. thus toh yeh wali baat apnko hamesa dhyn rkhni hai ki char-array-pointer whose containers are allocated in "stack" or "heap" ko exactly same sequence-wise print kr deta hai , as like as jasise apn string(mtlb char-array) ko iterate krke likhteh hai same vase hi. thus toh aaj k baad apnko dhyn rkhna hai ki apnko char-array ko print krne k liyeh voh vase-iterative-loop nhi likhna jaise apn other-datatype-array-ko-print krne k liyeh krtehh hai, as apnko simply "cout" or printf("%s") ka use krlena hai. 🔥 🌟🌟 👿📔 👆👆👆👆

    ReverseStr(str);
    debug(str);

    return 0;
}