/* 🌟 Now YAHA pe apn Recursion(mtlb Recursive-Function) meh Static-variables k bareh meh kuch dekhenge:: 🌟 */

//🎆 -implementation:
//🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗🔗
#include <iostream>
using namespace std;

int fn(int p1)
{
    if (p1 > 0)
    {
        return fn(p1 - 1) + p1;
    }
    return 0;
}
int fn2(int p1)
{
    static int x = 0;
    if (p1 > 0)
    {
        x++;
        return fn(p1 - 1) + x;
    }
    return 0;
}
int main()
{
    cout << fn(10) << " ";
    cout << fn2(10) << " ";

    return 0;
}