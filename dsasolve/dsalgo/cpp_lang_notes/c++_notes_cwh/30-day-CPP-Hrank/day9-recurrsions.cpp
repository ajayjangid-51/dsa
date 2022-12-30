// day9: recurssion-concept jo ki ek accha algorithm banane meh kafi use hota hai:
// 🎆 link: https://www.hackerrank.com/challenges/30-recursion/problem🎆
#include <bits/stdc++.h>

using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
