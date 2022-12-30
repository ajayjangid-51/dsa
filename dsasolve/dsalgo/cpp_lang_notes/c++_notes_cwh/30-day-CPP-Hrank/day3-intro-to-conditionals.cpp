// p3:
// 🎆
// link: https://www.hackerrank.com/challenges/30-conditional-statements/problem🎆

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N % 2 != 0)
    {
        cout << "Weird" << endl;
    }
    else if (N % 2 == 0 && N >= 2 && N <= 5) // inclusive-range mtlb showing-elements bhi included hai.
    {
        cout << "Not Weird" << endl;
    }
    else if (N % 2 == 0 && N >= 6 && N <= 20)
    {
        cout << "Weird" << endl;
    }
    else if (N % 2 == 0 & N > 20)
    {
        cout << "Not Weird" << endl;
    }
    /*Method-2: (very short and sweet)
    int N; 

scanf("%d",&N);

if( N%2 == 1 || (N > 5 && N < 21))

    printf("Weird");

else

    printf("Not Weird");
*/
    /*Method-3: 
( N % 2 === 1 || N > 5 && N <= 20 ? 'Weird' : "Not Weird" )*/
    return 0;
}